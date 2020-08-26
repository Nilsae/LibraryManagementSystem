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
#include<QDir>
#include "globalvaribals.h"

Window_ChangePassword::Window_ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ChangePassword)
{
    ui->setupUi(this);
    ui->lineEdit_MemberId->setFocus();

}

Window_ChangePassword::~Window_ChangePassword()
{
    delete ui;
}

void Window_ChangePassword::on_pushButton_ChangePassword_clicked()
{  QDir account;
    account.cd("..");
    account.cd("Login_MY_FINAL");
    account.cd("RowData");
    QFile AccountsFile (account.path()+"/accounts.json");
    AccountsFile.open(QIODevice::ReadWrite);
    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );
    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();



    QString MemberId = ui->lineEdit_MemberId->text();
    if(Accounts_Obj.find(MemberId)==Accounts_Obj.end()){
        QMessageBox::warning(this," ","Member Account not found!");
        this->close();
        return;
    }
    QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
    QJsonObject Account_Obj= Account_ref.toObject();

    QString RealHashedPassword= Account_Obj["Password"].toString();
    QString EnteredOLDPassword = ui->lineEdit_OldPassword->text();
    QString EnteredNEWPassword = ui->lineEdit_NewPassword->text();
    if(EnteredNEWPassword.size()<8){
        QMessageBox::warning(this,"","Password can not be less than 8 characters.");
        this->close();
        return;

    }
    QString EnteredConfirmPassword =ui->lineEdit_ConfirmNewPassword->text();
    if(EnteredNEWPassword==""||EnteredConfirmPassword==""){
        QMessageBox::warning(this,"","All sections haven't filled out");
        this->close();
    }
    else{
    if(EnteredConfirmPassword!=EnteredNEWPassword){
        QMessageBox::warning(this,"","New Password and confirmed password did not match");
        this->close();
           return;
    }

    char*  ch;
    QByteArray ba = EnteredOLDPassword.toLatin1();
    ch=ba.data ();
    QString HashedOLDEnteredPassword = QString(QCryptographicHash::hash((ch),QCryptographicHash::Keccak_512).toHex());
     ba = EnteredNEWPassword.toLatin1();
    ch=ba.data ();
    QString HashedNEWEnteredPassword = QString(QCryptographicHash::hash((ch),QCryptographicHash::Keccak_512).toHex());
    if(RealHashedPassword==HashedNEWEnteredPassword){

        QMessageBox::warning(this,"","Entered Password is equal to the previous one");
        this->close();
           return;

    }
    if(RealHashedPassword==HashedOLDEnteredPassword&&EnteredConfirmPassword==EnteredNEWPassword){
        QString newPassword= ui->lineEdit_NewPassword->text();
        QString MemberName= Account_Obj["Name"].toString();
         QString Username= Account_Obj["Username"].toString();
        QString ExpireDate= Account_Obj["ExpireDate"].toString();
        QString date_added= Account_Obj["date_added"].toString();
        int AccountType= Account_Obj["AccountType"].toInt();
        QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();
        QJsonObject EditedAccount = { {"Name", MemberName},
                                       {"Username", Username},
                                   {"id", MemberId},
                                       {"date_added", date_added},
                               {"ExpireDate", ExpireDate},
                                       {"AccountType", AccountType},
                                       {"Password", HashedNEWEnteredPassword},
                                   {"RentedBooks",RentedBooks}
                                     };
        Accounts_Obj.remove(MemberId);
       Accounts_Obj[MemberId]=EditedAccount;


       QJsonDocument doc( Accounts_Obj );

       if( !AccountsFile.open( QIODevice::WriteOnly ) ) //write json content to file.
       {
           qDebug()<<"error opening file for write.\n";
              return;
       }

       AccountsFile.write(doc.toJson());
       AccountsFile.close();


           QMessageBox::information(this,"","Password updated successfully");
            return;
    }
    if(RealHashedPassword!=HashedOLDEnteredPassword){
        QMessageBox::warning(this,"","Incorrect old password");
        this->close();
           return;
    }

}


}
