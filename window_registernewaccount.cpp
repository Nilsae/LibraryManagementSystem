#include "window_registernewaccount.h"
#include "ui_window_registernewaccount.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDate>
#include <QString>
#include<QMessageBox>
#include <QCryptographicHash>
#include<QDir>
//==============================================================================================
Window_RegisterNewAccount::Window_RegisterNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RegisterNewAccount)
{
    ui->setupUi(this);
    ui->lineEdit_ID->setFocus();
}

Window_RegisterNewAccount::~Window_RegisterNewAccount()
{
    delete ui;
}

void Window_RegisterNewAccount::on_pushButton_Register_clicked()
{

    QString ID = ui->lineEdit_ID->text();
    QString Name = ui->lineEdit_Name->text();
    QString Username = ui->lineEdit_Username->text();
    QString ExpireDate = ui->lineEdit_ExpireDate->text();
    int AccountType=0;
    if(ui->radioButton_Admin->isChecked()){
        AccountType=1;
    }

    QString Password = ui->lineEdit_Password->text();
    QString ConfirmedPassword = ui->lineEdit_ConfirmedPassword->text();
    if(ID==""||Name==""||Username==""||ExpireDate==""||Password==0||ConfirmedPassword==""){
        QMessageBox::warning(this,"","All sections haven't filled out");
        this->close();
    }
    else{
    if(Password!=ConfirmedPassword){
        QMessageBox::warning(this,"","confirmed password did not match");
        this->close();
        return;

    }
    if(Password.size()<8){
        QMessageBox::warning(this,"","Password can not be less than 8 characters.");
        this->close();
        return;

    }
    QDir account;
        account.cd("..");
        account.cd("Login_MY_FINAL");
        account.cd("RowData");
        QFile AccountsFile (account.path()+"/accounts.json");
   AccountsFile.open(QIODevice::ReadWrite);

   QJsonDocument jsonDoc = QJsonDocument::fromJson( AccountsFile.readAll() );

   QJsonObject main=jsonDoc.object();
   AccountsFile.close();
   QByteArray ref =  Password.toUtf8();;
    QString HashedPassword = QString(QCryptographicHash::hash((ref),QCryptographicHash::Keccak_512).toHex());
   QJsonObject RentedBooks;
   QJsonObject newAccount = { {"Name", Name},
                                  {"Username", Username},
                              {"id", ID},
                                  {"date_added", QDate::currentDate().toString( "yyyy-MM-dd" )},
                          {"ExpireDate", ExpireDate},
                                  {"AccountType", AccountType},
                                  {"Password", HashedPassword},
                              {"RentedBooks",RentedBooks}
                                };

   main[ID]=newAccount;

   QJsonDocument doc( main );

   if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
   {
       qDebug()<<"error opening file for write.\n";
   }

   AccountsFile.write(doc.toJson());
   AccountsFile.close();
   QMessageBox::information(this," ","Account registered succcessfully");
   this->close();
    }
}



void Window_RegisterNewAccount::on_lineEdit_ConfirmPassword_cursorPositionChanged(int arg1, int arg2)
{

}
