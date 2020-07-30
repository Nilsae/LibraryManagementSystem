#include "window_registernewaccount.h"
#include "ui_window_registernewaccount.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDateTime>
#include <QString>
#define AddedBooks "C:/Users/User/Desktop/project/project data/Books.json"
#define accounts "C:/Users/User/Desktop/project/project data/accounts.json"
//==========================================================================


Window_RegisterNewAccount::Window_RegisterNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RegisterNewAccount)
{
    ui->setupUi(this);
}

Window_RegisterNewAccount::~Window_RegisterNewAccount()
{
    delete ui;
}

void Window_RegisterNewAccount::on_pushButton_Register_clicked()
{
    QString ID = ui->lineEdit_ID->text();
    QString Name = ui->lineEdit_Name->text();
    QString Family = ui->lineEdit_Family->text();
    QString ExpireDate = ui->lineEdit_ExpireDate->text();
//    QString AccountType = ui->lineEdit_AccountType->text();
    QString Password = ui->lineEdit_Password->text();

   QFile AccountsFile(accounts);
   AccountsFile.open(QIODevice::ReadWrite);

   QJsonDocument jsonDoc = QJsonDocument::fromJson( AccountsFile.readAll() );

   QJsonObject main=jsonDoc.object();
   AccountsFile.close();

   QJsonObject RentedBooks;
   QJsonObject newAccount = { {"Name", Name},
                                  {"Family", Family},
                                  {"date_added", QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" )},
                          {"ExpireDate", ExpireDate},
//                                  {"AccountType", AccountType},
                                  {"Password", Password},
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
}
