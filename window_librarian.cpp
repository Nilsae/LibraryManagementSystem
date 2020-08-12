#include "window_librarian.h"
#include "ui_window_librarian.h"
#include <QMessageBox>
#include <QWidget>
#include "globalvaribals.h"
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
#include "globalvaribals.h"
#include<QDir>
#include<QSystemTrayIcon>
//==============================================================================================
Window_Librarian::Window_Librarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Librarian)
{ QDir account;
     ui->setupUi(this);
     mSystemTrayIcon= new QSystemTrayIcon(this);
     mSystemTrayIcon->setIcon(QIcon(":/myappico.png"));
    mSystemTrayIcon->setVisible(true);
     setAutoFillBackground(true);
        QPalette palatte;
        QPixmap pixmap(":/img/img/back2.jpg");
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
       qDebug()<<MemberId;
     QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
     QJsonObject Account_Obj= Account_ref.toObject();
     QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
     QJsonDocument doc(RentedBooks);

     QString jsonString = doc.toJson(QJsonDocument::Indented);

     foreach(QJsonValue x,Account_Obj){
      //  QString UserName=x.toString();
        //QString UserName=(x.toObject())[MemberId].toString();
        //   QString UserName=(x.toObject())["Username"].toString();
   //QString UserName=(x.toObject()).begin();
     //  QString UserName=x.toObject().toString();
        QString UserName=x.toString();
           qDebug()<<UserName;
     }
    // QString RentedBooks;
     // QString aa=RentedBooks.
   //  ui-> tableWidget->setItem   (  0, 0 , new QTableWidgetItem(BookName));
   //   ui-> tableWidget->setItem   (  1, 0 , new QTableWidgetItem(author));
   //   ui-> tableWidget->setItem   ( 2, 0 , new QTableWidgetItem(subject));
   //   ui-> tableWidget->setItem   (  3, 0 , new QTableWidgetItem(status));
    //   ui-> tableWidget->setItem   ( 4, 0 , new QTableWidgetItem(BookId));
    //

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

void Window_Librarian::on_pushButton_ChangePassword_clicked()
{
      //new Window_ChangePassword(this);
    ChangePasswordObj=new Window_ChangePassword(this);
    ChangePasswordObj->show();
}

void Window_Librarian::on_pushButton_RentedBooks_clicked()
{
//    int accID =GlobalVaribals::CurrentId;

    RentedBooksObj=new Window_RentedBooks(this);
    RentedBooksObj->show();

}

void Window_Librarian::on_notification_btn_clicked()
{
    mSystemTrayIcon->showMessage(tr("notification"),tr("Hi:)"));
}
