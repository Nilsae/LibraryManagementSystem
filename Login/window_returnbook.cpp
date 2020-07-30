#include "window_returnbook.h"
#include "ui_window_returnbook.h"

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
#include <QMessageBox>
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"
Window_ReturnBook::Window_ReturnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReturnBook)
{
    ui->setupUi(this);
}

Window_ReturnBook::~Window_ReturnBook()
{
    delete ui;
}

void Window_ReturnBook::on_pushButton_ReturnBook_clicked()
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
   if(status!="rented"){
       QMessageBox::warning(this," ","This book is not rented by anyone");
       //notification that the book is not rented by anyone
       qDebug()<<"the book is not rented by anyone";
       return;
   }
   QString author= found_obj["author"].toString();
   QString date_added= found_obj["date_added"].toString();
   QJsonObject EditedBook = {   {"id", BookId},
                                  {"status", "available"},
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
  qDebug()<<"HI :/";
  qDebug()<<MemberName;
  qDebug()<<RentedBooks;



  if(RentedBooks.find(BookId)!=RentedBooks.end()){
      RentedBooks.remove(BookId);
  }
  else{
       QMessageBox::warning(this," ","This member does not have this book rented");
      qDebug()<<"This member does not have this book rented ";
      //notification that This member does not have this book rented
  }

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
 QMessageBox::information(this," ","Book returned successfully");

}
