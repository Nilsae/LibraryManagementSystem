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
   QString name= found_obj["name"].toString();
   QString subject= found_obj["subject"].toString();
   QString date_added= found_obj["date_added"].toString();
   QString status= found_obj["status"].toString();


}



void Window_Search::on_pushButton_name_clicked()
{
    QString BookName = ui->lineEdit_BookName->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   AddedBooksFile.close();
//   QJsonObject empty ={};
//   QJsonValueRef found_ref = Obj.find(BookName).value();
//   QJsonObject found_obj= found_ref.toObject();
//   QString name= found_obj["name"].toString();
//   QString subject= found_obj["subject"].toString();
//   QString date_added= found_obj["date_added"].toString();
//   QString status= found_obj["status"].toString();
}


