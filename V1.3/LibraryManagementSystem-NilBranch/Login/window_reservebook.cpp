#include "window_reservebook.h"
#include "ui_window_reservebook.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDateTime>
#include <QString>
#include <QPair>
#define AddedBooks "C:/Users/User/Desktop/project/project data/Books.json"
#define accounts "C:/Users/User/Desktop/project/project data/accounts.json"
#define max_permitted_books 4
Window_ReserveBook::Window_ReserveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReserveBook)
{
    ui->setupUi(this);
}

Window_ReserveBook::~Window_ReserveBook()
{
    delete ui;
}

void Window_ReserveBook::on_pushButton_Reserve_clicked()
{



    QString BookId = ui->lineEdit_BookId->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   QJsonValueRef found_ref = Obj.find(BookId).value();
   QJsonObject found_obj= found_ref.toObject();
   QString BookName= found_obj["name"].toString();
   QString subject= found_obj["subject"].toString();
   QString status= found_obj["status"].toString(); //ADD AN IF
   if(status!="available"){
       //notification that the book is not available
       return;
   }
   QString author= found_obj["author"].toString();
   QString date_added= found_obj["date_added"].toString();
   QJsonObject EditedBook = {   {"id", BookId},
                                  {"status", "rented"},
                                  {"date_added", date_added},
                                  {"name", BookName},
                                  {"author", author},
                                  {"subject", subject}
};
   AddedBooksFile.close();
    Obj.remove(BookId);
   Obj[BookId]=EditedBook;


   QJsonDocument doc( Obj );

   if( !AddedBooksFile.open( QIODevice::WriteOnly ) ) //write json content to file.
   {
       qDebug()<<"error opening file for write.\n";
   }

   AddedBooksFile.write(doc.toJson());
   AddedBooksFile.close();

//...........................................................................................................
   QFile AccountsFile(accounts);
   AccountsFile.open(QIODevice::ReadWrite);

   QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

   QJsonObject Accounts_Obj=jsonDocAcc.object();
   AccountsFile.close();

   QString MemberId = ui->lineEdit_MemberId->text();
  QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
  QJsonObject Account_Obj= Account_ref.toObject();

  QString MemberName= Account_Obj["Name"].toString();

  QString Family= Account_Obj["Family"].toString();
  QString date_added_account= Account_Obj["date_added"].toString();
  QString ExpireDate= Account_Obj["ExpireDate"].toString();
  QString AccountType= Account_Obj["AccountType"].toString();
  QString Password= Account_Obj["Password"].toString();
  QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
  if(RentedBooks.size()>max_permitted_books){
    //notification that it is not permitted
      return;
  }
//  QPair<QString,QString> BookDatePair ;
//  BookDatePair.first=BookId;
//  BookDatePair.second=QDate::currentDate().toString( "yyyy-MM-dd" );
//  QJsonObject RBook;
//  RBook[BookId]=QDate::currentDate().toString( "yyyy-MM-dd" );
  RentedBooks.insert(BookId,QDate::currentDate().toString( "yyyy-MM-dd" ));
  QJsonObject newAccount = { {"Name", MemberName},
                                 {"Family", Family},
                                 {"date_added", date_added_account},
                         {"ExpireDate", ExpireDate},
//                                  {"AccountType", AccountType},
                                 {"Password", Password},
                             {"RentedBooks",RentedBooks}
                               };

  Accounts_Obj.remove(MemberId);
 Accounts_Obj[MemberId]=newAccount;


 QJsonDocument final_acc_doc(Accounts_Obj);

 if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
 {
     qDebug()<<"error opening file for write.\n";
 }

 AccountsFile.write(final_acc_doc.toJson());
 AccountsFile.close();
}
