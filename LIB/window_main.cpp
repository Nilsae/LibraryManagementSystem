#include "window_main.h"
#include "ui_window_main.h"

Window_main::Window_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_main)
{
    ui->setupUi(this);
}

Window_main::~Window_main()
{
    delete ui;
}
