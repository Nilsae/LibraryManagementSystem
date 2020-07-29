#include "window_cancelmembership.h"
#include "ui_window_cancelmembership.h"

Window_CancelMembership::Window_CancelMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_CancelMembership)
{
    ui->setupUi(this);
}

Window_CancelMembership::~Window_CancelMembership()
{
    delete ui;
}
