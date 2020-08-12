#ifndef WINDOW_MEMBER_H
#define WINDOW_MEMBER_H

#include <QDialog>
#include "window_librarian.h"
#include <QMainWindow>
#include<QMessageBox>
#include<QWidget>
#include "window_renewbook.h"
#include "window_reservebook.h"
#include "window_returnbook.h"
#include "window_search.h"
#include "window_viewaccount.h"
#include "window_updateaccount.h"
#include "window_chechoutbook.h"
#include "window_changepassword.h"
#include "window_rentedbooks.h"

namespace Ui {
class Window_Member;
}
class QSystemTrayIcon;
class Window_Member : public QDialog
{
    Q_OBJECT

public:
    explicit Window_Member(QWidget *parent = nullptr);
    ~Window_Member();

private slots:
    void on_pushButton_ReturnBook_clicked();

    void on_pushButton_ViewAccount_clicked();

    void on_pushButton_Logout_clicked();

    //void on_pushButton_RemoveReservation_clicked();

    void on_pushButton_RenewBook_clicked();

    void on_pushButton_ReserveBook_clicked();

    void on_pushButton_Search_clicked();

   // void on_pushButton_UpdateAccount_clicked();

   // void on_pushButton_ChechOutBook_clicked();

    void on_pushButton_ChangePassword_clicked();

    //void on_pushButton_RentedBooks_clicked();

    void on_pushButton_clicked();

    void on_showMessageBtn_clicked();

private:
    Ui::Window_Member *ui;
    Window_Search * SearchObj;
    Window_RenewBook * RenewBookObj;
    Window_ReturnBook * ReturnBookObj;
    Window_ReserveBook * ReserveBookObj;
    Window_ViewAccount * ViewAccountObj;

     Window_UpdateAccount *UpdateAccountObj;
    Window_ChechOutBook *CheckOutBookObj;
   Window_ChangePassword *ChangePasswordObj;
    Window_RentedBooks *RentedBooksObj;
    QSystemTrayIcon *mSystemTrayIcon;
};

#endif // WINDOW_MEMBER_H
