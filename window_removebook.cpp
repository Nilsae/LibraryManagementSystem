#include "window_removebook.h"
#include "ui_window_removebook.h"
#include <QJsonObject>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QJsonParseError>
#include<QJsonArray>
#include<QJsonValueRef>
#include <QJsonDocument>
#include <QMessageBox>
#include<QDir>
//==============================================================================================
Window_RemoveBook::Window_RemoveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RemoveBook)
{
    ui->setupUi(this);
    ui->lineEdit_BookId->setFocus();
}

Window_RemoveBook::~Window_RemoveBook()
{
    delete ui;
}

void Window_RemoveBook::on_pushButton_RemoveBook_clicked()
{
    const QString & BookId = ui->lineEdit_BookId->text();

    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
    AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QByteArray B = AddedBooksFile.readAll();
    QJsonDocument D = QJsonDocument::fromJson(B);
    QJsonObject Obj = D.object();

    if(Obj.find(BookId)==Obj.end()){
        QMessageBox::warning(this," ","Book not found!");
        return;
    }
    AddedBooksFile.close();
    QJsonObject empty ={};
    QDir account;
        account.cd("..");
        account.cd("Login_MY_FINAL");
        account.cd("RowData");
        QFile AccountsFile (account.path()+"/accounts.json");
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    foreach(QJsonValue x,Accounts_Obj){

        QJsonObject RentedBook=(x.toObject())["RentedBooks"].toObject();

        if(RentedBook.find(BookId)!=RentedBook.end()){
            QString MemberName= (x.toObject())["Name"].toString();

            QString Username= (x.toObject())["Username"].toString();
            QString date_added_account= (x.toObject())["date_added"].toString();
            QString ExpireDate= (x.toObject())["ExpireDate"].toString();
            int AccountType= (x.toObject())["AccountType"].toInt();
            QString Password=(x.toObject())["Password"].toString();
            QString MemberId = (x.toObject()["id"]).toString();


            RentedBook.remove(BookId);
            QJsonObject newAccount = { {"Name", MemberName},
                                           {"Username", Username},
                                       {"id", MemberId},
                                           {"date_added", date_added_account},
                                   {"ExpireDate", ExpireDate},
                                           {"AccountType", AccountType},
                                           {"Password", Password},
                                       {"RentedBooks",RentedBook}
                                         };

            Accounts_Obj.remove(MemberId);
           Accounts_Obj[MemberId]=newAccount;

            QMessageBox::information(this, "", "Book was rented,also removed from the account.");
            QJsonDocument FinalAccounts(Accounts_Obj);
            if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
            {
                qDebug()<<"error opening file for write.\n";
            }

            AccountsFile.write(FinalAccounts.toJson());
            AccountsFile.close();
            break;
        }

    }
    Obj.remove(BookId);
    QJsonDocument FinalD(Obj);
    if( !AddedBooksFile.open( QIODevice::WriteOnly ) ) //write json content to file.
    {
        qDebug()<<"error opening file for write.\n";
    }

    AddedBooksFile.write(FinalD.toJson());
    AddedBooksFile.close();

        QMessageBox::information(this," ","Book removed successfully!");


}
