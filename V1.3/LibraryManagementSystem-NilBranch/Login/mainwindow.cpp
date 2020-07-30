#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#define UserAndPass ":/Data/RowData/User&Pass.json"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{

    int loginflag;
    loginflag=0;
    QFile UserAndPassFile(UserAndPass);
    UserAndPassFile.open(QIODevice::ReadOnly);
    QByteArray UserAndPassByte=UserAndPassFile.readAll();
    QJsonDocument UserAndPassDoc=QJsonDocument::fromJson(UserAndPassByte);
    QJsonObject UserAndPassObj=UserAndPassDoc.object();
    //QString UserName1
    QString UserName1=(UserAndPassObj["admin"].toObject())["username"].toString();
    foreach(QJsonValue x,UserAndPassObj){

        QString UserName=(x.toObject())["username"].toString();
        QString Password=(x.toObject())["password"].toString();
        QString UserName_lineEdit=ui->lineEdit_Username->text();
        QString Password_lineEdit=ui->lineEdit_Password->text();
        int UserLevel=(x.toObject())["type"].toInt();
        if(UserName_lineEdit==UserName&&Password_lineEdit==Password){
            if(UserLevel==1){
                loginflag=1;
                QMessageBox::information(this," ","Login Succesful!");
                hide();
                Libaririan =new Window_Librarian(this);
                Libaririan->show();
            }
            if(UserLevel==0){
                loginflag=1;
                QMessageBox::information(this," ","Login Succesful!");
                hide();
                Member=new Window_Member(this);
                Member->show();
            }

        }

    }
    if(loginflag==0){
        loginflag=1;
          QMessageBox::warning(this," ","Incorrect UserName or Password");

    }



//====================================
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
    UserAndPassFile.close();
}
