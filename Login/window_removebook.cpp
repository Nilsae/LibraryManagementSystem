#include "window_removebook.h"
#include "ui_window_removebook.h"
#include <QJsonObject>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QJsonParseError>
#include<QJsonArray>
#include<QJsonValueRef>
#include <QJsonDocument>
//#define AddedBooks ":/Data/RowData/AddedBooks.json"
//<<<<<<< HEAD
//<<<<<<< HEAD
#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"

//=======
////#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
//#define AddedBooks ":/AddBooks/RowData/AddedBooks.json"
//>>>>>>> 5faffb79ed62ac4619190044e5907d48751b4ee1
//=======
//#define AddedBooks "/home/nilsa/Documents/AP/LibraryManagementSystem/Login/RowData/AddedBooks.json"
//#define AddedBooks ":/AddBooks/RowData/AddedBooks.json"
//>>>>>>> 5faffb79ed62ac4619190044e5907d48751b4ee1
Window_RemoveBook::Window_RemoveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RemoveBook)
{
    ui->setupUi(this);
}

Window_RemoveBook::~Window_RemoveBook()
{
    delete ui;
}

void Window_RemoveBook::on_pushButton_RemoveBook_clicked()
{
    const QString & BookId = ui->lineEdit_BookId->text();
//    QFile file("/home/nilsa/Documents/AP/LibraryManagementSystem/Login/AddedBooks.json"); // json file
//    if( !file.open( QIODevice::ReadWrite ) ) //write json content to file.
//    {
//        qDebug()<<"error opening file for removing the book.\n";
//    }
//     QJsonDocument jsonDoc = QJsonDocument::fromJson( file.readAll() );
////    char book_id[30];
////    strcpy(book_id,BookId);
////      jsonDoc.remove(BookId);
//      QJsonArray jArr = jsonDoc.array();
////      remove(jArr.find(BookId));
//      QJsonObject element [jArr.count];
//      for(int i=0;i<jArr.count();i++) {
//      element[i] = jArr.at(i).toObject();
//      }
////      qDebug() << element.value("number").toInt();
//      QJsonDocument doc( jArr );

//      file.write(doc.toJson());
//      file.close();
////    file.write(doc.toJson());
//    file.close();


     QFile AddedBooksFile(AddedBooks);
    AddedBooksFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QByteArray B = AddedBooksFile.readAll();
    QJsonDocument D = QJsonDocument::fromJson(B);
    QJsonObject Obj = D.object();
    AddedBooksFile.close();
    QJsonObject empty ={};
    Obj.remove(BookId);
    QJsonDocument FinalD(Obj);
    if( !AddedBooksFile.open( QIODevice::WriteOnly ) ) //write json content to file.
    {
        qDebug()<<"error opening file for write.\n";
    }

    AddedBooksFile.write(FinalD.toJson());
    AddedBooksFile.close();

//    QJsonParseError JsonParseError;
//    QJsonDocument JsonDocument = QJsonDocument::fromJson(AddedBooksFile.readAll(), &JsonParseError);

//    AddedBooksFile.close();

//    QJsonObject RootObject = JsonDocument.object();
//    QJsonValueRef ArrayRef = RootObject.find(BookId).value();
//    QJsonArray Array = ArrayRef.toArray();
//    qDebug()<<Array[0];
//    QJsonArray::iterator ArrayIterator = Array.begin();
//    QJsonValueRef ElementOneValueRef = ArrayIterator[0];

//    QJsonObject ElementOneObject = ElementOneValueRef.toObject();

//    // Make modifications to ElementOneObject
//    ElementOneObject=QJsonObject();

//    ElementOneValueRef = ElementOneObject;
//    ArrayRef = Array;
//    JsonDocument.setObject(RootObject);

//    AddedBooksFile.open(QFile::WriteOnly | QFile::Text | QFile::Truncate);
//    AddedBooksFile.write(JsonDocument.toJson());
//    AddedBooksFile.close();
}
