#include "window_librarian.h"
#include "ui_window_librarian.h"
#include <QMessageBox>

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

#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"
Window_Librarian::Window_Librarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Librarian)
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

Window_Librarian::~Window_Librarian()
{
    delete ui;
}

void Window_Librarian::on_pushButton_Logout_clicked()
{
    QMessageBox::information(this," ","LogOut Succesful!");
    hide();

 //RETURN TO Login page
}

void Window_Librarian::on_pushButton_ViewAccount_clicked()
{
    ViewAccountObj =new Window_ViewAccount(this);
    ViewAccountObj->show();
}

void Window_Librarian::on_pushButton_ReturnBook_clicked()
{
    ReturnBookObj=new Window_ReturnBook(this);
    ReturnBookObj->show();
}

//void Window_Librarian::on_pushButton_RemoveReservation_clicked()
//{
//    RemoveReservationObj=new Window_RemoveReservation(this);
//    RemoveReservationObj->show();
//}

void Window_Librarian::on_pushButton_RenewBook_clicked()
{
    RenewBookObj=new Window_RenewBook(this);
    RenewBookObj->show();
}

void Window_Librarian::on_pushButton_ReserveBook_clicked()
{
    ReserveBookObj=new Window_ReserveBook(this);
    ReserveBookObj->show();
}

void Window_Librarian::on_pushButton_Search_clicked()
{
    SearchObj=new Window_Search(this);
    SearchObj->show();
}

void Window_Librarian::on_pushButton_UpdateAccount_clicked()
{
    UpdateAccountObj=new Window_UpdateAccount(this);
    UpdateAccountObj->show();
}

void Window_Librarian::on_pushButton_AddBook_clicked()
{
    AddBookObj=new Window_AddBook(this);
    AddBookObj->show();
}

void Window_Librarian::on_pushButton_RemoveBook_clicked()
{
    RemobeBookObj=new Window_RemoveBook(this);
    RemobeBookObj->show();
}

void Window_Librarian::on_pushButton_EditBook_clicked()
{
    EditBookObj=new Window_EditBook(this);
    EditBookObj->show();
}

void Window_Librarian::on_pushButton_RegisterNewAccount_clicked()
{
    RegisterNewAccountObj=new Window_RegisterNewAccount(this);
    RegisterNewAccountObj->show();
}

void Window_Librarian::on_pushButton_CancelMembership_clicked()
{
    CancelMembershipObj=new Window_CancelMembership(this);
    CancelMembershipObj->show();
}

void Window_Librarian::on_pushButton_IssueBook_clicked()
{
    IssueBookObj=new Window_IssueBook(this);
    IssueBookObj->show();
}
