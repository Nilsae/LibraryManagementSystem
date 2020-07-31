#include "window_updateaccount.h"
#include "ui_window_updateaccount.h"
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
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"

Window_UpdateAccount::Window_UpdateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_UpdateAccount)
{
    ui->setupUi(this);
    ui->label_Name->hide();
    ui->label_Username->hide();
    ui->label_ExpireDate->hide();
    ui->label_DateAdded->hide();
    ui->lineEdit_Name->hide();
    ui->lineEdit_Username->hide();
    ui->lineEdit_ExpireDate->hide();
    ui->lineEdit_DateAdded->hide();
    ui->pushButton_UpdateAccount->hide();
}

Window_UpdateAccount::~Window_UpdateAccount()
{
    delete ui;
}

void Window_UpdateAccount::on_pushButton_search_clicked()
{
    //======================================

    //put this codes in if(id==found)!!!!!!
    ui->label_Name->show();
    ui->label_Username->show();
    ui->label_ExpireDate->show();
    ui->label_DateAdded->show();
    ui->lineEdit_Name->show();
    ui->lineEdit_Username->show();
    ui->lineEdit_ExpireDate->show();
    ui->lineEdit_DateAdded->show();
    ui->pushButton_UpdateAccount->show();

    //============================================

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = ui->lineEdit_MemberId->text();

    if(Accounts_Obj.find(MemberId)==Accounts_Obj.end()){
        QMessageBox::warning(this," ","Member Account not found!");
        this->close();
        return;
    }

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();

   QString MemberName= Account_Obj["Name"].toString();
    QString Username= Account_Obj["Username"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   ui->lineEdit_Name->setText(MemberName);
   ui->lineEdit_Username->setText(Username);
   ui->lineEdit_ExpireDate->setText(ExpireDate);
   ui->lineEdit_DateAdded->setText(date_added);
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
    QString Username= Account_Obj["Username"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QString Password= Account_Obj["Password"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();


   QString newMemberName = ui->lineEdit_Name->text();
   QString newUsername = ui->lineEdit_Username->text();
   QString newExpireDate = ui->lineEdit_ExpireDate->text();
  // QString newAccountType = ui->lineEdit_AccountType->text();
   QJsonObject EditedAccount = { {"Name", newMemberName},
                                  {"Username", newUsername},
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


      QMessageBox::information(this," ","Account updated successfully");

}
