#include "window_reservebook.h"
#include "ui_window_reservebook.h"

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
#define accounts "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/accounts.json"
Window_ReserveBook::Window_ReserveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReserveBook)
{
    ui->setupUi(this);
}

Window_ReserveBook::~Window_ReserveBook()
{
    delete ui;
}

void Window_ReserveBook::on_pushButton_Reserve_clicked()
{



    QString BookId = ui->lineEdit_BookId->text();
    QFile AddedBooksFile(AddedBooks);
   AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
   QByteArray B = AddedBooksFile.readAll();
   QJsonDocument D = QJsonDocument::fromJson(B);
   QJsonObject Obj = D.object();
   QJsonValueRef found_ref = Obj.find(BookId).value();
   QJsonObject found_obj= found_ref.toObject();
   QString BookName= found_obj["name"].toString();
   QString subject= found_obj["subject"].toString();
   QString status= found_obj["status"].toString();
   QString author= found_obj["author"].toString();
   QString date_added= found_obj["date_added"].toString();
   QJsonObject EditedBook = {   {"id", BookId},
                                  {"status", "rented"},
                                  {"date_added", date_added},
                                  {"name", BookName},
                                  {"author", author},
                                  {"subject", subject}
};
   AddedBooksFile.close();
    Obj.remove(BookId);
   Obj[BookId]=EditedBook;


   QJsonDocument doc( Obj );

   if( !AddedBooksFile.open( QIODevice::WriteOnly ) ) //write json content to file.
   {
       qDebug()<<"error opening file for write.\n";
   }

   AddedBooksFile.write(doc.toJson());
   AddedBooksFile.close();



//   QString BookId = ui->lineEdit_BookId->text();
//   QFile AccountsFile(accounts);
//  AccountsFile.open(QIODevice::ReadWrite | QIODevice::Text);
//  QByteArray B = AccountsFile.readAll();
//  QJsonDocument D = QJsonDocument::fromJson(B);
//  QJsonObject Obj = D.object();
//  QJsonValueRef found_ref = Obj.find(memberId).value();
//  QJsonObject found_obj= found_ref.toObject();

}
