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
#include<QByteArray>
#include<globalvaribals.h>
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
    ChangePassMemberObj=new Window_ChangePassMember(this);
    ChangePassMemberObj->show();

    //ChangePasswordObj=new Window_ChangePassword(this);
    //ChangePasswordObj->show();
}



void Window_Member::on_pushButton_clicked()
{
    RentedBooksObj=new Window_RentedBooks(this);
    RentedBooksObj->show();
}

void Window_Member::on_showMessageBtn_clicked()
{
    QString MemberId = QString::number(GlobalVaribals::CurrentId);

    QDir account;
        account.cd("..");
        account.cd("Login_MY_FINAL");
        account.cd("RowData");
        QFile AccountsFile (account.path()+"/accounts.json");
    AccountsFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDocAcc = QJsonDocument::fromJson( AccountsFile.readAll() );

    QJsonObject Accounts_Obj=jsonDocAcc.object();
    AccountsFile.close();
    QJsonValueRef Account_ref = Accounts_Obj.find(MemberId).value();
    QJsonObject Account_Obj= Account_ref.toObject();
    QJsonObject RentedBooks= Account_Obj["RentedBooks"].toObject();

    if(RentedBooks.size()==0){
        QMessageBox::warning(this,"","No book rented");
//        this->close();
        return;
    }
    QJsonDocument doc(RentedBooks);
    QString jsonString = doc.toJson(QJsonDocument::Indented);



     QStringList list = jsonString.split(QRegExp(","));
      for(int i=0;i<list.size();i++){

          QStringList list_a=list[i].split(QRegExp("\\W+"));
        QString  id_array=list_a[1];

          QString y_array=list_a[2];
          QString M_array=list_a[3];
          QString day_array=list_a[4];

          QString expire_date=y_array+"-"+M_array+"-"+day_array;

          QDate expireDate=QDate::fromString(expire_date,"yyyy-MM-dd");
          QDate CurrentDate =QDate::currentDate();
          int difference_days= CurrentDate.daysTo(expireDate);
          QString differenceDays = QString::number(difference_days);
          if(difference_days>0){

             QString notif = "You have to return book with ID = "+id_array+" in "+ differenceDays +" days.";
            QByteArray ba = notif.toLatin1();
             char * ch=ba.data();
//              const QIcon & qicon = .... ;
              mSystemTrayIcon->showMessage(tr("notification"),tr(ch)/*,qicon, */);
          }
          else if(difference_days<0){
              differenceDays==QString::number( difference_days*(-1));
              QString notif = "book with ID = "+id_array+" MUST be returned!!!.\n You have "+ differenceDays +" days dalay!!";
              QByteArray ba = notif.toLatin1();
               char * ch=ba.data();
//              const QIcon & qicon = .... ;
              mSystemTrayIcon->showMessage(tr("notification"),tr(ch)/*,qicon, */);
          }
          else{
              QString notif = "book with ID = "+id_array+" MUST be returned today!";
//              const QIcon & qicon = .... ;
              QByteArray ba = notif.toLatin1();
               char * ch=ba.data();
              mSystemTrayIcon->showMessage(tr("notification"),tr(ch)/*,qicon,*/);
          }

}


}
