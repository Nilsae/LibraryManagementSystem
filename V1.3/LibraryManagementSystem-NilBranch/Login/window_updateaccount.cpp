#include "window_updateaccount.h"
#include "ui_window_updateaccount.h"

Window_UpdateAccount::Window_UpdateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_UpdateAccount)
{
    ui->setupUi(this);
}

Window_UpdateAccount::~Window_UpdateAccount()
{
    delete ui;
}
