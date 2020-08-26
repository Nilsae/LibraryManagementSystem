#include "window_rentedbooks.h"
#include "ui_window_rentedbooks.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDate>
#include <QString>
#include "globalvaribals.h"
#include  <QDir>
#include<QMessageBox>
#include "globalvaribals.h"
//==============================================================================================
Window_RentedBooks::Window_RentedBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RentedBooks)
{
        QDir account;
    ui->setupUi(this);
    setAutoFillBackground(true);
       QPalette palatte;
       QPixmap pixmap(":/img/img/462696091c37a9b6447730996cfb4109_book-backgrounds-illustrations-royalty-free-vector-graphics-_612-612.jpeg");
       palatte.setBrush(backgroundRole(),QBrush(pixmap));
       this->setPalette(palatte);
      //background

    account.cd("..");
    account.cd("Login_MY_FINAL");
    account.cd("RowData");
    QFile AccountsFile (account.path()+"/accounts.json");

      AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

//    QString MemberId = CurrentAccountId;
    // QString MemberId=(QString)GlobalVaribals::CurrentId;
     QString MemberId = QString::number(GlobalVaribals::CurrentId);
     QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
     QJsonObject Account_Obj= Account_ref.toObject();
     QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
     QJsonDocument doc(RentedBooks);
     if(RentedBooks.size()==0){
         QMessageBox::warning(this,"","No books rented");
         this->close();
     }
     else{
     QString jsonString = doc.toJson(QJsonDocument::Indented);



      QStringList list = jsonString.split(QRegExp(","));

       for(int i=0;i<list.size();i++){

           QStringList list_a=list[i].split(QRegExp("\\W+"));
         QString  id_array=list_a[1];

           QString y_array=list_a[2];
           QString M_array=list_a[3];
           QString day_array=list_a[4];
                 QString Cstr=y_array+"-"+M_array+"-"+day_array;
           ui->tableWidget->setItem(  i, 0 , new QTableWidgetItem(id_array));
           ui->tableWidget->setItem(  i, 1 , new QTableWidgetItem(Cstr));

       }
     }
     //=======================================================================
}

Window_RentedBooks::~Window_RentedBooks()
{
    delete ui;
}
