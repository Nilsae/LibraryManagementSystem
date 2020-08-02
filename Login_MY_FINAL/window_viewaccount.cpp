#include "window_viewaccount.h"
#include "ui_window_viewaccount.h"
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
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login_MY_FINAL/RowData/accounts.json"
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login_MY_FINAL/RowData/AddedBooks.json"
//==============================================================================================
Window_ViewAccount::Window_ViewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ViewAccount)
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
    ui->lineEdit_AccountType->hide();
    ui->label_AccountType->hide();
}

Window_ViewAccount::~Window_ViewAccount()
{
    delete ui;
}


void Window_ViewAccount::on_pushButton_ViewAccount_clicked()
{

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = ui->lineEdit_MemberId->text();
    if(Accounts_Obj.find(MemberId)==Accounts_Obj.end()){
        QMessageBox::warning(this," ","Member account not found!");
        this->close();
        return;
    }
    ui->label_Name->show();
    ui->label_Username->show();
    ui->label_ExpireDate->show();
    ui->label_DateAdded->show();
    ui->lineEdit_Name->show();
    ui->lineEdit_Username->show();
    ui->lineEdit_ExpireDate->show();
    ui->lineEdit_DateAdded->show();

    ui->pushButton_ViewAccount->hide();
    ui->lineEdit_AccountType->show();
    ui->label_AccountType->show();

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();

   QString MemberName= Account_Obj["Name"].toString();
    QString Username= Account_Obj["Username"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();

   if(Account_Obj["AccountType"]==1){
        ui->lineEdit_AccountType->setText("ADMIN");
   }
   if(Account_Obj["AccountType"]==0){
     ui->lineEdit_AccountType->setText("MEMBER");
   }
   ui->lineEdit_Name->setText(MemberName);
   ui->lineEdit_Username->setText(Username);
   ui->lineEdit_ExpireDate->setText(ExpireDate);
   ui->lineEdit_DateAdded->setText(date_added);
   int RentedBooksCount=RentedBooks.size();
    ui->lineEdit_MemberId->setReadOnly(1);
    ui->lineEdit_Name->setReadOnly(1);
    ui->lineEdit_Username->setReadOnly(1);
    ui->lineEdit_DateAdded->setReadOnly(1);
    ui->lineEdit_ExpireDate->setReadOnly(1);
    ui->lineEdit_AccountType->setReadOnly(1);

}
