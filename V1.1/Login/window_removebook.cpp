#include "window_removebook.h"
#include "ui_window_removebook.h"

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
    QString BookId = ui->lineEdit_BookId->text();
}
