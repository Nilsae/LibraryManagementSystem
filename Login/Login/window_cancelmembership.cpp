#include "window_cancelmembership.h"
#include "ui_window_cancelmembership.h"

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
#define AddedBooks "C:/Users/User/Desktop/project/project data/Books.json"
#define accounts "C:/Users/User/Desktop/project/project data/accounts.json"

Window_CancelMembership::Window_CancelMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_CancelMembership)
{
    ui->setupUi(this);
}

Window_CancelMembership::~Window_CancelMembership()
{
    delete ui;
}

void Window_CancelMembership::on_pushButton_CacnelMembership_clicked()
{

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = ui->lineEdit_MemberId->text();
    QString EnteredPassword = ui->lineEdit_Password->text();
   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();

   QString MemberName= Account_Obj["Name"].toString();

   QString Password= Account_Obj["Password"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   if(RentedBooks.size()>0){
       QMessageBox::warning(this,"Can't cancel membership","This member has some rented books yet.");
     //notification that it is not permitted
       return;
   }
   if(Password!=EnteredPassword){
       QMessageBox::warning(this,"Can't cancel membership","Entered ID and password did not match.");
        return;
   }

   Accounts_Obj.remove(MemberId);



  QJsonDocument final_acc_doc(Accounts_Obj);

  if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
  {
      qDebug()<<"error opening file for write.\n";
  }
  AccountsFile.write(final_acc_doc.toJson());
  QMessageBox::information(this,"","Membership canceled sucessfully.");

  AccountsFile.close();
}
