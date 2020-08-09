#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QCryptographicHash>
#include<QByteArray>
#include "globalvaribals.h"
#include<QDir>

//==============================================================================================
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAutoFillBackground(true);
       QPalette palatte;
       QPixmap pixmap(":/img/img/back.jpg");
       palatte.setBrush(backgroundRole(),QBrush(pixmap));
       this->setPalette(palatte);
      //background

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QDir account;
    account.cd("..");
    account.cd("Login_MY_FINAL");
    account.cd("RowData");
    QFile UserAndPassFile (account.path()+"/accounts.json");
    int loginflag;
    loginflag=0;
    UserAndPassFile.open(QIODevice::ReadOnly);
    QByteArray UserAndPassByte=UserAndPassFile.readAll();
    QJsonDocument UserAndPassDoc=QJsonDocument::fromJson(UserAndPassByte);
    QJsonObject UserAndPassObj=UserAndPassDoc.object();
    //QString UserName1
    QString UserName1=(UserAndPassObj["admin"].toObject())["Username"].toString();
    foreach(QJsonValue x,UserAndPassObj){

        QString UserName=(x.toObject())["Username"].toString();
        QString Password=(x.toObject())["Password"].toString();
        QString CurrentAccountId=(x.toObject())["id"].toString();
        QString UserName_lineEdit=ui->lineEdit_Username->text();
        QString Password_lineEdit=ui->lineEdit_Password->text();
       // qDebug()<<UserName;
         // qDebug()<<Password;
        char*  ch;
        QByteArray ba = Password_lineEdit.toLatin1();
        ch=ba.data ();

        QString HashedPassword_lineEdit = QString(QCryptographicHash::hash((ch),QCryptographicHash::Keccak_512).toHex());

        int UserLevel=(x.toObject())["AccountType"].toInt();

            if(UserLevel==1&&UserName_lineEdit==UserName&&HashedPassword_lineEdit==Password){
                loginflag=1;
                QMessageBox::information(this," ","Login Succesful!");
                GlobalVaribals::CurrentId=CurrentAccountId.toInt();
                  GlobalVaribals::CurrentAccType=1;;
                //qDebug()<<GlobalVaribals::CurrentId;
                hide();
                Libaririan =new Window_Librarian(this);
                Libaririan->show();
            }
            if(UserLevel==0&&UserName_lineEdit==UserName&&HashedPassword_lineEdit==Password){
                loginflag=1;
                QMessageBox::information(this," ","Login Succesful!");
                GlobalVaribals::CurrentId=CurrentAccountId.toInt();
                   GlobalVaribals::CurrentAccType=0;
               // qDebug()<<GlobalVaribals::CurrentId;
                hide();
                Member=new Window_Member(this);
                Member->show();
            }



    }
    if(loginflag==0){
        loginflag=1;
          QMessageBox::warning(this," ","Incorrect UserName or Password");

    }


UserAndPassFile.close();
//====================================old login codes===================
  //  QString UserName=ui->lineEdit_Username->text();
//    QString Password=ui->lineEdit_Password->text();

    //if(UserName=="ADMIN"&&Password=="ADMINPASS"){
        //QMessageBox::information(this," ","Login Succesful!");
       // hide();
      //  Libaririan =new Window_Librarian(this);
    //    Libaririan->show();
  // }
    //else if(UserName=="MEMBER"&&Password=="MEMBERPASS"){
          //QMessageBox::information(this," ","Login Succesful!");
          //hide();
        //  Member=new Window_Member(this);
      //    Member->show();

  //  }
 //   else{
   //      QMessageBox::warning(this," ","Incorrect UserName or Password");

 //   }
//========================================================================

}
