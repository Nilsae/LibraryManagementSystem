#include "window_search.h"
#include "ui_window_search.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDateTime>
#include <QString>
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
Window_Search::Window_Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Search)
{
    ui->setupUi(this);
}

Window_Search::~Window_Search()
{
    delete ui;
}

//void Window_Search::on_pushButton_SearchBook_clicked()
//{
//    QString BookId = ui->lineEdit_BookId->text();
//    QString BookName = ui->lineEdit_BookName->text();
//    QString Author = ui->lineEdit_AuthorName->text();
//    QString Subject = ui->lineEdit_Subject->text();

//    QFile AddedBooksFile(AddedBooks);
//   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
//   QByteArray B = AddedBooksFile.readAll();
//   QJsonDocument D = QJsonDocument::fromJson(B);
//   QJsonObject Obj = D.object();
//   AddedBooksFile.close();
////   QJsonObject empty ={};
//   QJsonValueRef found_ref = Obj.find(BookId).value();

//}

void Window_Search::on_pushButton_ID_clicked()
{
    QString BookId = ui->lineEdit_BookId->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();

   AddedBooksFile.close();
//   QJsonObject empty ={};
   QJsonValueRef found_ref = Obj.find(BookId).value();
   QJsonObject found_obj= found_ref.toObject();
   QString BookName= found_obj["name"].toString();
   QString subject= found_obj["subject"].toString();
   QString date_added= found_obj["date_added"].toString();
   QString status= found_obj["status"].toString();
   QString author= found_obj["author"].toString();



}



void Window_Search::on_pushButton_name_clicked()
{
    QString BookName_lineEdit = ui->lineEdit_BookName->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();

   foreach(QJsonValue x,Obj){

       QString BookName=(x.toObject())["name"].toString();

       if(BookName_lineEdit==BookName){
           QString subject= (x.toObject())["subject"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString author= (x.toObject())["author"].toString();
           QString BookId= (x.toObject())["id"].toString();



           break;
           }

}
}


void Window_Search::on_pushButton_author_clicked()
{
    QString Author_lineEdit = ui->lineEdit_AuthorName->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();


   foreach(QJsonValue x,Obj){

       QString author=(x.toObject())["author"].toString();

       if(Author_lineEdit==author){

           QString subject= (x.toObject())["subject"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString BookName=(x.toObject())["name"].toString();
           QString BookId= (x.toObject())["id"].toString();

           //MR.MOUSAVI : GET ALL THE STUFF TO PRINT IN THIS BLOCK
           //IF YOU TRY TO USE THESE STRINGS OUT OF THE IF BLOCK YOU WILL FACE BUGS!!!!
           break;
           }

}

}

void Window_Search::on_pushButton_subject_clicked()
{
    QString Subject_lineEdit = ui->lineEdit_Subject->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();

   foreach(QJsonValue x,Obj){

       QString subject=(x.toObject())["subject"].toString();

       if(Subject_lineEdit==subject){
           QString author= (x.toObject())["author"].toString();
           QString date_added= (x.toObject())["date_added"].toString();
           QString status= (x.toObject())["status"].toString();
           QString BookName=(x.toObject())["name"].toString();
           QString BookId= (x.toObject())["id"].toString();
           break;
           }
}
}
