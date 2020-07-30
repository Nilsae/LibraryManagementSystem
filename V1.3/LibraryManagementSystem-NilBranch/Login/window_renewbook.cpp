#include "window_renewbook.h"
#include "ui_window_renewbook.h"

Window_RenewBook::Window_RenewBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RenewBook)
{
    ui->setupUi(this);
}

Window_RenewBook::~Window_RenewBook()
{
    delete ui;
}
