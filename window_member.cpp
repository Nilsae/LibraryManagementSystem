#include "window_member.h"
#include "ui_window_member.h"
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
#include<QDir>
#include<QSystemTrayIcon>
//==============================================================================================
Window_Member::Window_Member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Member)
{
     ui->setupUi(this);
     mSystemTrayIcon= new QSystemTrayIcon(this);
     mSystemTrayIcon->setIcon(QIcon(":/myappico.png"));
    mSystemTrayIcon->setVisible(true);

   setAutoFillBackground(true);
      QPalette palatte;
       QPixmap pixmap(":/img/img/700.jpg");
        palatte.setBrush(backgroundRole(),QBrush(pixmap));
        this->setPalette(palatte);
       //background
    QDir account;
        account.cd("..");
        account.cd("Login_MY_FINAL");
        account.cd("RowData");
        QFile AccountsFile (account.path()+"/accounts.json");
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

//    QString MemberId = CurrentAccountId;

//   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
//   QJsonObject Account_Obj= Account_ref.toObject();
//   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
//   int RentedBooksCount=RentedBooks.size();




}

Window_Member::~Window_Member()
{
    delete ui;
}

void Window_Member::on_pushButton_ReturnBook_clicked()
{
    ReturnBookObj=new Window_ReturnBook(this);
    ReturnBookObj->show();
}

void Window_Member::on_pushButton_ViewAccount_clicked()
{
    ViewAccountObj =new Window_ViewAccount(this);
    ViewAccountObj->show();
}

void Window_Member::on_pushButton_Logout_clicked()
{
       QMessageBox::information(this," ","LogOut Succesful!");
    hide();

    //RETURN TO Login page
}

//void Window_Member::on_pushButton_RemoveReservation_clicked()
//{
//    RemoveReservationObj=new Window_RemoveReservation(this);
//    RemoveReservationObj->show();
//}

void Window_Member::on_pushButton_RenewBook_clicked()
{
    RenewBookObj=new Window_RenewBook(this);
    RenewBookObj->show();
}

void Window_Member::on_pushButton_ReserveBook_clicked()
{
    ReserveBookObj=new Window_ReserveBook(this);
    ReserveBookObj->show();
}

void Window_Member::on_pushButton_Search_clicked()
{
    SearchObj=new Window_Search(this);
    SearchObj->show();
}




void Window_Member::on_pushButton_ChangePassword_clicked()
{
    ChangePasswordObj=new Window_ChangePassword(this);
    ChangePasswordObj->show();
}



void Window_Member::on_pushButton_clicked()
{
    RentedBooksObj=new Window_RentedBooks(this);
    RentedBooksObj->show();
}

void Window_Member::on_showMessageBtn_clicked()
{
    mSystemTrayIcon->showMessage(tr("notification"),tr("Hi:)"));
}
