#include "window_addbook.h"
#include "ui_window_addbook.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDateTime>
#include <QString>
#define AddedBooks "C:/Users/User/Desktop/project/project data/Books.json"
#define accounts "C:/Users/User/Desktop/project/project data/accounts.json"
Window_AddBook::Window_AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_AddBook)
{
    ui->setupUi(this);
}

Window_AddBook::~Window_AddBook()
{
    delete ui;
}

void Window_AddBook::on_pushButton_AddBook_clicked()
{
     QString BookId = ui->lineEdit_BookId->text();
     QString BookName = ui->lineEdit_BookName->text();
     QString Author = ui->lineEdit_AuthorName->text();
     QString Subject = ui->lineEdit_Subject->text();

    QFile AddedBooksFile(AddedBooks);
    AddedBooksFile.open(QIODevice::ReadWrite);

    QJsonDocument jsonDoc = QJsonDocument::fromJson( AddedBooksFile.readAll() );
//    QJsonArray jArr = jsonDoc.array();
    QJsonObject main=jsonDoc.object();
    AddedBooksFile.close();


    QJsonObject Books = { {"id", BookId},
                                   {"status", "available"},
                                   {"date_added", QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" )},
                                   {"name", BookName},
                                   {"author", Author},
                                   {"subject", Subject}
                                 };
//    QJsonObject ObjID =  {{ BookId, Books }};
    //...................................
//    QJsonObject jobj;
//    jobj[BookId]=Books;
//    jArr.append(jobj);
//    QJsonObject main;
    main[BookId]=Books;
    //................................................
//    QJsonArray jArr = jsonDoc.array();
//    jArr.push_back( jobj);

    QJsonDocument doc( main );

    if( !AddedBooksFile.open( QIODevice::WriteOnly ) ) //write json content to file.
    {
        qDebug()<<"error opening file for write.\n";
    }

    AddedBooksFile.write(doc.toJson());
    AddedBooksFile.close();


}


