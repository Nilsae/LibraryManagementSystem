#include "window_changepassword.h"
#include "ui_window_changepassword.h"
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
#include<QCryptographicHash>
#include<globalvaribals.h>
#include<QByteArray>
#define accounts "C:/Users/User/Desktop/project/nilou code/V1.9/Login_/RowData/accounts.json"
#define AddedBooks "C:/Users/User/Desktop/project/nilou code/V1.9/Login_/RowData/AddedBooks.json"
Window_ChangePassword::Window_ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ChangePassword)
{
    ui->setupUi(this);
}

Window_ChangePassword::~Window_ChangePassword()
{
    delete ui;
}

void Window_ChangePassword::on_pushButton_ChangePassword_clicked()
{

    QFile AccountsFile(accounts);
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();

    QString MemberId = QString::number(GlobalVaribals::CurrentId);

    if(Accounts_Obj.find(MemberId)==Accounts_Obj.end()){
        QMessageBox::warning(this," ","Member Account not found!");
        this->close();
        return;
    }
    QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
    QJsonObject Account_Obj= Account_ref.toObject();

    QString RealHashedPassword= Account_Obj["Password"].toString();
    QString EnteredPassword = ui->lineEdit_OldPassword->text();
    QString EnteredConfirmPassword =ui->lineEdit_ConfirmNewPassword->text();
    if(EnteredConfirmPassword!=EnteredPassword){
        QMessageBox::warning(this,"","New Password and confirmed password did not match");
        this->close();
    }
    char*  ch;
    QByteArray ba = EnteredPassword.toLatin1();
    ch=ba.data ();
    QString HashedEnteredPassword = QString(QCryptographicHash::hash((ch),QCryptographicHash::Keccak_512).toHex());
    if(RealHashedPassword==HashedEnteredPassword){
        QString newPassword= ui->lineEdit_NewPassword->text();
        QString MemberName= Account_Obj["Name"].toString();
         QString Username= Account_Obj["Username"].toString();
        QString ExpireDate= Account_Obj["ExpireDate"].toString();
        QString date_added= Account_Obj["date_added"].toString();
        QString AccountType= Account_Obj["AccountType"].toString();
        QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
        QJsonObject EditedAccount = { {"Name", MemberName},
                                       {"Username", Username},
                                   {"id", MemberId},
                                       {"date_added", date_added},
                               {"ExpireDate", ExpireDate},
                                       {"AccountType", AccountType},
                                       {"Password", newPassword},
                                   {"RentedBooks",RentedBooks}
                                     };
        Accounts_Obj.remove(MemberId);
       Accounts_Obj[MemberId]=EditedAccount;


       QJsonDocument doc( Accounts_Obj );

       if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
       {
           qDebug()<<"error opening file for write.\n";
       }

       AccountsFile.write(doc.toJson());
       AccountsFile.close();


           QMessageBox::information(this,"","Password updated successfully");

    }
    else{
        QMessageBox::warning(this,"","Incorrect old password");
        this->close();
    }




}
