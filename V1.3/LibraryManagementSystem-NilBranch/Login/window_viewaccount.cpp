#include "window_viewaccount.h"
#include "ui_window_viewaccount.h"

Window_ViewAccount::Window_ViewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ViewAccount)
{
    ui->setupUi(this);
}

Window_ViewAccount::~Window_ViewAccount()
{
    delete ui;
}

void Window_ViewAccount::on_pushButton_CancelMembership_clicked()
{
    //make are you sure?? dialog box
}
