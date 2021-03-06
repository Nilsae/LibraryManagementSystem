#include "window_reservebook.h"
#include "ui_window_reservebook.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDate>
#include <QString>
#include <QPair>
#include<QMessageBox>
#define max_permitted_books 4
#include<QDir>
#include "globalvaribals.h"
//==============================================================================================
Window_ReserveBook::Window_ReserveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReserveBook)
{
    ui->setupUi(this);
    ui->lineEdit_BookId->setFocus();
    if(GlobalVaribals::CurrentAccType==1){
        userflag=1;

    }
    if(GlobalVaribals::CurrentAccType==0){
        ui->lineEdit_MemberId->hide();
        userflag=0;

    }
}

Window_ReserveBook::~Window_ReserveBook()
{
    delete ui;
}

void Window_ReserveBook::on_pushButton_Reserve_clicked()
{
    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
    QString BookId = ui->lineEdit_BookId->text();

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
       QMessageBox::warning(this," ","This book is not available.");
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
   QDir account;
       account.cd("..");
       account.cd("Login_MY_FINAL");
       account.cd("RowData");
       QFile AccountsFile (account.path()+"/accounts.json");
   AccountsFile.open(QIODevice::ReadWrite);

   QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

   QJsonObject Accounts_Obj=jsonDocAcc.object();
   AccountsFile.close();
     QString MemberId;
   if(userflag==0){
        MemberId =QString::number(GlobalVaribals::CurrentId);
   }
   if(userflag==1){
      MemberId = ui->lineEdit_MemberId->text();
   }

  QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
  QJsonObject Account_Obj= Account_ref.toObject();

  QString MemberName= Account_Obj["Name"].toString();

  QString Username= Account_Obj["Username"].toString();
  QString date_added_account= Account_Obj["date_added"].toString();
  QString ExpireDate= Account_Obj["ExpireDate"].toString();
  int AccountType= Account_Obj["AccountType"].toInt();
  QString Password= Account_Obj["Password"].toString();
  QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
  if(RentedBooks.size()>max_permitted_books){
      QMessageBox::warning(this,"Not Permitted!","The number of the rented books is more than the permitted amount.");
      return;
  }

  QString ExpireRentDate =ui->lineEdit_ExpireRentDate->text();
  RentedBooks.insert(BookId,ExpireRentDate);

  QJsonObject newAccount = { {"Name", MemberName},
                                 {"Username", Username},
                             {"id", MemberId},
                                 {"date_added", date_added_account},
                         {"ExpireDate", ExpireDate},
                                 {"AccountType", AccountType},
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
 QMessageBox::information(this," ","Book rented successfully");
}
