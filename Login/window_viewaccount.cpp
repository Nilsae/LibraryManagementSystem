#include "window_viewaccount.h"
#include "ui_window_viewaccount.h"

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
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"

Window_ViewAccount::Window_ViewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ViewAccount)
{
    ui->setupUi(this);
    ui->label_Name->hide();
    ui->label_Family->hide();
    ui->label_ExpireDate->hide();
    ui->label_DateAdded->hide();
    ui->lineEdit_Name->hide();
    ui->lineEdit_Family->hide();
    ui->lineEdit_ExpireDate->hide();
    ui->lineEdit_DateAdded->hide();
}

Window_ViewAccount::~Window_ViewAccount()
{
    delete ui;
}


void Window_ViewAccount::on_pushButton_ViewAccount_clicked()
{
    //=======================================
    //put this codes in if(id==found)!!!!!!
    ui->label_Name->show();
    ui->label_Family->show();
    ui->label_ExpireDate->show();
    ui->label_DateAdded->show();
    ui->lineEdit_Name->show();
    ui->lineEdit_Family->show();
    ui->lineEdit_ExpireDate->show();
    ui->lineEdit_DateAdded->show();

    //============================================
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
   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();

   QString MemberName= Account_Obj["Name"].toString();
    QString Family= Account_Obj["Family"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   ui->lineEdit_Name->setText(MemberName);
   ui->lineEdit_Family->setText(Family);
   ui->lineEdit_ExpireDate->setText(ExpireDate);
   ui->lineEdit_DateAdded->setText(date_added);
   int RentedBooksCount=RentedBooks.size();

}
