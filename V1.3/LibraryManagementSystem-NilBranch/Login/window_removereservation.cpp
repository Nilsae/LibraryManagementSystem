#include "window_removereservation.h"
#include "ui_window_removereservation.h"

Window_RemoveReservation::Window_RemoveReservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RemoveReservation)
{
    ui->setupUi(this);
}

Window_RemoveReservation::~Window_RemoveReservation()
{
    delete ui;
}
