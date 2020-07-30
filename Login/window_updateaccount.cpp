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

Window_UpdateAccount::Window_UpdateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_UpdateAccount)
{
    ui->setupUi(this);
}

Window_UpdateAccount::~Window_UpdateAccount()
{
    delete ui;
}

void Window_UpdateAccount::on_pushButton_search_clicked()
{
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
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();
}

void Window_UpdateAccount::on_pushButton_UpdateAccount_clicked()
{
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
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QString Password= Account_Obj["Password"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();


   QString newMemberName = ui->lineEdit_Name->text();
   QString newFamily = ui->lineEdit_Family->text();
   QString newExpireDate = ui->lineEdit_ExpireDate->text();
   QString newAccountType = ui->lineEdit_AccountType->text();
   QJsonObject EditedAccount = { {"Name", newMemberName},
                                  {"Family", newFamily},
                                  {"date_added", date_added},
                          {"ExpireDate", newExpireDate},
//                                  {"AccountType", newAccountType},
                                  {"Password", Password},
                              {"RentedBooks",RentedBooks}
                                };
   Accounts_Obj.remove(MemberId);
  Accounts_Obj[MemberId]=EditedAccount;


  QJsonDocument doc( Accounts_Obj );

  if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
  {
      qDebug()<<"error opening file for write.\n";
  }

  AccountsFile.write(doc.toJson());
  AccountsFile.close();
}
