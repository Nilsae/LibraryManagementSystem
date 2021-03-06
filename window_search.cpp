#include "window_search.h"
#include "ui_window_search.h"
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
//==============================================================================================
Window_Search::Window_Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Search)
{
    ui->setupUi(this);
    ui->lineEdit_BookId->setFocus();
    ui->tableWidget->insertColumn ( ui->tableWidget->columnCount() );
    ui->tableWidget->hide();
}

Window_Search::~Window_Search()
{
    delete ui;
}


void Window_Search::on_pushButton_ID_clicked()
{

    QString BookId = ui->lineEdit_BookId->text();
    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();

   AddedBooksFile.close();
   if(Obj.find(BookId)==Obj.end()){
        QMessageBox::warning(this," ","Book not found!");
        return;
   }
//   QJsonObject empty ={};
   QJsonValueRef found_ref = Obj.find(BookId).value();
   QJsonObject found_obj= found_ref.toObject();
   QString BookName= found_obj["name"].toString();
   QString subject= found_obj["subject"].toString();
   QString date_added= found_obj["date_added"].toString();
   QString status= found_obj["status"].toString();
   QString author= found_obj["author"].toString();
    ui->tableWidget->show();
   ui-> tableWidget->setItem   (  0, 0 , new QTableWidgetItem(BookName));
    ui-> tableWidget->setItem   (  1, 0 , new QTableWidgetItem(author));
    ui-> tableWidget->setItem   ( 2, 0 , new QTableWidgetItem(subject));
    ui-> tableWidget->setItem   (  3, 0 , new QTableWidgetItem(status));
     ui-> tableWidget->setItem   ( 4, 0 , new QTableWidgetItem(BookId));



}



void Window_Search::on_pushButton_name_clicked()
{

    QString BookName_lineEdit = ui->lineEdit_BookName->text();
    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();
    int found_flag=0;
   foreach(QJsonValue x,Obj){

       QString BookName=(x.toObject())["name"].toString();

       if(BookName_lineEdit==BookName){
           QString subject= (x.toObject())["subject"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString author= (x.toObject())["author"].toString();
           QString BookId= (x.toObject())["id"].toString();
            found_flag=1;
             ui->tableWidget->show();
           ui-> tableWidget->setItem   (  0, 0 , new QTableWidgetItem(BookName));
            ui-> tableWidget->setItem   (  1, 0 , new QTableWidgetItem(author));
            ui-> tableWidget->setItem   ( 2, 0 , new QTableWidgetItem(subject));
            ui-> tableWidget->setItem   (  3, 0 , new QTableWidgetItem(status));
             ui-> tableWidget->setItem   ( 4, 0 , new QTableWidgetItem(BookId));



           break;
           }

}
   if(found_flag==0){
        QMessageBox::warning(this," ","Book not found!");
        return;
   }

}


void Window_Search::on_pushButton_author_clicked()
{

    QString Author_lineEdit = ui->lineEdit_AuthorName->text();
    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();
    int found_flag=0;

   foreach(QJsonValue x,Obj){

       QString author=(x.toObject())["author"].toString();

       if(Author_lineEdit==author){

           QString subject= (x.toObject())["subject"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString BookName=(x.toObject())["name"].toString();
           QString BookId= (x.toObject())["id"].toString();
            found_flag=1;
             ui->tableWidget->show();
           ui-> tableWidget->setItem   (  0, 0 , new QTableWidgetItem(BookName));
            ui-> tableWidget->setItem   (  1, 0 , new QTableWidgetItem(author));
            ui-> tableWidget->setItem   ( 2, 0 , new QTableWidgetItem(subject));
            ui-> tableWidget->setItem   (  3, 0 , new QTableWidgetItem(status));
             ui-> tableWidget->setItem   ( 4, 0 , new QTableWidgetItem(BookId));


           //MR.MOUSAVI : GET ALL THE STUFF TO PRINT IN THIS BLOCK
           //IF YOU TRY TO USE THESE STRINGS OUT OF THE IF BLOCK YOU WILL FACE BUGS!!!!
           break;
           }

}
   if(found_flag==0){
        QMessageBox::warning(this," ","Book not found!");
        return;
   }
}

void Window_Search::on_pushButton_subject_clicked()
{

    QString Subject_lineEdit = ui->lineEdit_Subject->text();
    QDir AddedBook;
    AddedBook.cd("..");
    AddedBook.cd("Login_MY_FINAL");
    AddedBook.cd("RowData");
    QFile  AddedBooksFile(AddedBook.path()+"/AddedBooks.json");
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();
        int found_flag=0;
   foreach(QJsonValue x,Obj){

       QString subject=(x.toObject())["subject"].toString();

       if(Subject_lineEdit==subject){
           QString author= (x.toObject())["author"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString BookName=(x.toObject())["name"].toString();
           QString BookId= (x.toObject())["id"].toString();
           found_flag=1;
            ui->tableWidget->show();
           ui-> tableWidget->setItem   (  0, 0 , new QTableWidgetItem(BookName));
            ui-> tableWidget->setItem   (  1, 0 , new QTableWidgetItem(author));
            ui-> tableWidget->setItem   ( 2, 0 , new QTableWidgetItem(subject));
            ui-> tableWidget->setItem   (  3, 0 , new QTableWidgetItem(status));
             ui-> tableWidget->setItem   ( 4, 0 , new QTableWidgetItem(BookId));


           break;
           }
}
   if(found_flag==0){
        QMessageBox::warning(this," ","Book not found!");
        return;
   }
}
