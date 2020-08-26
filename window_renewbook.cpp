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
#include <QDate>
#include <QString>
#include <QPair>
#include<QMessageBox>
#include<QDir>
#include "globalvaribals.h"
//==============================================================================================
Window_RenewBook::Window_RenewBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RenewBook)
{
    ui->setupUi(this);
    ui->lineEdit_BookId->setFocus();
    ui->tableWidget_RentedBooks->hide();
    ui->pushButton_Renew->hide();
    ui->lineEdit_renewdDate->hide();
    if(GlobalVaribals::CurrentAccType==1){
        userflag=1;

    }
    if(GlobalVaribals::CurrentAccType==0){
        ui->lineEdit_MemberId->hide();
        userflag=0;

    }
}

Window_RenewBook::~Window_RenewBook()
{
    delete ui;
}

void Window_RenewBook::on_pushButton_search_clicked()
{QDir account;
    ui->tableWidget_RentedBooks->show();
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


    QString BookId = ui->lineEdit_BookId->text();

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();
   QString MemberName= Account_Obj["Name"].toString();
    QString Username= Account_Obj["Username"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added_account= Account_Obj["date_added"].toString();
   QString Password= Account_Obj["Password"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   QString RentedUntil = RentedBooks[BookId].toString();

   int RentedBooksCount=RentedBooks.size();

QString newExpireDate= ui->lineEdit_renewdDate->text();
    if(RentedBooks[BookId].toString()!=""){
//    qDebug()<<"book id = "<<BookId;
//    qDebug()<<"member id = "<<MemberId;
//    qDebug()<<"RentedBooks[BookId]"<<RentedBooks[BookId];
       RentedBooks[BookId]=newExpireDate;
       ui->tableWidget_RentedBooks->setItem(0,0,new QTableWidgetItem(BookId));
       ui->tableWidget_RentedBooks->setItem(0,1,new QTableWidgetItem(RentedUntil));


       //===========================================!!!!!!!ATTENTION!!!!!!!================================
       // ui->tableWidget_RentedBooks->setItem(0,0,new QTableWidgetItem(RENTED UNTILL STRING!! ));
        //ADD RENTED UNTILL TEXT ON LINE 73
       //============================================


       ui->pushButton_Renew->show();
       ui->lineEdit_renewdDate->show();
       ui->lineEdit_BookId->hide();
       ui->lineEdit_MemberId->hide();
       ui->pushButton_search->hide();
       QMessageBox::information(this," ","Please enter the new date");

   }
   else{

           QMessageBox::warning(this," ","This member doesn't have this book rented ");
           this->close();
           return;

       //notification that This member does not have this book rented
   }



}

void Window_RenewBook::on_pushButton_Renew_clicked()
{
    QDir account;
        account.cd("..");
        account.cd("Login_MY_FINAL");
        account.cd("RowData");
        QFile AccountsFile (account.path()+"/accounts.json");

    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = ui->lineEdit_MemberId->text();
    QString BookId = ui->lineEdit_BookId->text();

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();
   QString MemberName= Account_Obj["Name"].toString();
    QString Username= Account_Obj["Username"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added_account= Account_Obj["date_added"].toString();
   QString Password= Account_Obj["Password"].toString();
   int AccountType = Account_Obj["AccountType"].toInt();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();


//show RentedBooks[BookId] as previous expire date in the UI
QString newExpireDate= ui->lineEdit_renewdDate->text();

   if(RentedBooks.find(BookId)!=RentedBooks.end()){
       RentedBooks[BookId]=newExpireDate;
   }
   else{

           QMessageBox::warning(this," ","This member doesn't have this book rented ");
           return;


       //notification that This member does not have this book rented
   }

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
  QMessageBox::information(this," ","Renewd successfully ");
  this->close();
}
