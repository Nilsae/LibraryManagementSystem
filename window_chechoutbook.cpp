#include "window_chechoutbook.h"
#include "ui_window_chechoutbook.h"

Window_ChechOutBook::Window_ChechOutBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ChechOutBook)
{
    ui->setupUi(this);
    ui->lineEdit_BookName->setFocus();
}

Window_ChechOutBook::~Window_ChechOutBook()
{
    delete ui;
}
