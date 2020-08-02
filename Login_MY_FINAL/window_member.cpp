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
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login_MY_FINAL/RowData/accounts.json"
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login_MY_FINAL/RowData/AddedBooks.json"
//==============================================================================================
Window_Member::Window_Member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Member)
{

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

//    QString MemberId = CurrentAccountId;

//   QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
//   QJsonObject Account_Obj= Account_ref.toObject();
//   QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
//   int RentedBooksCount=RentedBooks.size();



    ui->setupUi(this);
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

void Window_Member::on_pushButton_UpdateAccount_clicked()
{
    UpdateAccountObj=new Window_UpdateAccount(this);
    UpdateAccountObj->show();
}

void Window_Member::on_pushButton_ChechOutBook_clicked()
{
//    CheckOutBookObj=new Window_ChechOutBook(this);
//    CheckOutBookObj->show();
    SearchObj=new Window_Search(this);
    SearchObj->show();
}

void Window_Member::on_pushButton_ChangePassword_clicked()
{
    ChangePasswordObj=new Window_ChangePassword(this);
    ChangePasswordObj->show();
}
