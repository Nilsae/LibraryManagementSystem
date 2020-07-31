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
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"
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
    QString Username = ui->lineEdit_Username->text();
    QString ExpireDate = ui->lineEdit_ExpireDate->text();
    int AccountType=0;
    if(ui->radioButton_Admin->isChecked()){
        AccountType=1;
    }

    QString Password = ui->lineEdit_Password->text();

   QFile AccountsFile(accounts);
   AccountsFile.open(QIODevice::ReadWrite);

   QJsonDocument jsonDoc = QJsonDocument::fromJson( AccountsFile.readAll() );

   QJsonObject main=jsonDoc.object();
   AccountsFile.close();

   QJsonObject RentedBooks;
   QJsonObject newAccount = { {"Name", Name},
                                  {"Username", Username},
                                  {"date_added", QDate::currentDate().toString( "yyyy-MM-dd" )},
                          {"ExpireDate", ExpireDate},
                                  {"AccountType", AccountType},
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
   QMessageBox::information(this," ","Account registered succcessfully");
   this->close();
}


