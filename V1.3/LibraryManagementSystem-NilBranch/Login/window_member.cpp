#include "window_member.h"
#include "ui_window_member.h"
#include <QMessageBox>

Window_Member::Window_Member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Member)
{
    ui->setupUi(this);
}

Window_Member::~Window_Member()
{
    delete ui;
}

void Window_Member::on_pushButton_ReturnBook_clicked()
{
    ReturnBookObj=new Window_ReturnBook(this);
    ReturnBookObj->show();
}

void Window_Member::on_pushButton_ViewAccount_clicked()
{
    ViewAccountObj =new Window_ViewAccount(this);
    ViewAccountObj->show();
}

void Window_Member::on_pushButton_Logout_clicked()
{
       QMessageBox::information(this," ","LogOut Succesful!");
    hide();

    //RETURN TO Login page
}

void Window_Member::on_pushButton_RemoveReservation_clicked()
{
    RemoveReservationObj=new Window_RemoveReservation(this);
    RemoveReservationObj->show();
}

void Window_Member::on_pushButton_RenewBook_clicked()
{
    RenewBookObj=new Window_RenewBook(this);
    RenewBookObj->show();
}

void Window_Member::on_pushButton_ReserveBook_clicked()
{
    ReserveBookObj=new Window_ReserveBook(this);
    ReserveBookObj->show();
}

void Window_Member::on_pushButton_Search_clicked()
{
    SearchObj=new Window_Search(this);
    SearchObj->show();
}

void Window_Member::on_pushButton_UpdateAccount_clicked()
{
    UpdateAccountObj=new Window_UpdateAccount(this);
    UpdateAccountObj->show();
}

void Window_Member::on_pushButton_ChechOutBook_clicked()
{
    CheckOutBookObj=new Window_ChechOutBook(this);
    CheckOutBookObj->show();
}
