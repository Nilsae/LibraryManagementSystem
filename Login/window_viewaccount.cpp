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
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"

Window_ViewAccount::Window_ViewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ViewAccount)
{
    ui->setupUi(this);
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

   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
   QJsonObject Account_Obj= Account_ref.toObject();

   QString MemberName= Account_Obj["Name"].toString();
    QString Family= Account_Obj["Family"].toString();
   QString ExpireDate= Account_Obj["ExpireDate"].toString();
   QString date_added= Account_Obj["date_added"].toString();
   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
   int RentedBooksCount=RentedBooks.size();

}
