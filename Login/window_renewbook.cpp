#include "window_renewbook.h"
#include "ui_window_renewbook.h"
#include "window_updateaccount.h"
#include "ui_window_updateaccount.h"
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
#include<QMessageBox>
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"

Window_RenewBook::Window_RenewBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RenewBook)
{
    ui->setupUi(this);
}

Window_RenewBook::~Window_RenewBook()
{
    delete ui;
}

void Window_RenewBook::on_pushButton_search_clicked()
{

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = ui->lineEdit_MemberId->text();
    QString BookId = ui->lineEdit_BookId->text();

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();
   QString MemberName= Account_Obj["Name"].toString();
    QString Family= Account_Obj["Family"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added_account= Account_Obj["date_added"].toString();
   QString Password= Account_Obj["Password"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();

   qDebug()<<"HI :/";
   qDebug()<<MemberName;
   qDebug()<<RentedBooks;
//show RentedBooks[BookId] as previous expire date in the UI
QString newExpireDate= ui->lineEdit_renewdDate->text();

   if(RentedBooks.find(BookId)!=RentedBooks.end()){
       RentedBooks[BookId]=newExpireDate;
   }
   else{
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
}
