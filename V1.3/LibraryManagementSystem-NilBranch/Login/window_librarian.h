#ifndef WINDOW_LIBRARIAN_H
#define WINDOW_LIBRARIAN_H

#include <QDialog>
#include <QMainWindow>
#include "window_removereservation.h"
#include "window_renewbook.h"
#include "window_reservebook.h"
#include "window_returnbook.h"
#include "window_search.h"
#include "window_viewaccount.h"
#include "window_updateaccount.h"
#include "window_addbook.h"
#include "window_removebook.h"
#include "window_editbook.h"
#include "window_issuebook.h"
#include "window_registernewaccount.h"
#include "window_cancelmembership.h"
namespace Ui {
class Window_Librarian;
}

class Window_Librarian : public QDialog
{
    Q_OBJECT

public:
    explicit Window_Librarian(QWidget *parent = nullptr);
    ~Window_Librarian();

private slots:
    void on_pushButton_Logout_clicked();

    void on_pushButton_ViewAccount_clicked();

    void on_pushButton_ReturnBook_clicked();

    void on_pushButton_RemoveReservation_clicked();

    void on_pushButton_RenewBook_clicked();

    void on_pushButton_ReserveBook_clicked();

    void on_pushButton_Search_clicked();

    void on_pushButton_UpdateAccount_clicked();

    void on_pushButton_AddBook_clicked();

    void on_pushButton_RemoveBook_clicked();

    void on_pushButton_EditBook_clicked();

    void on_pushButton_RegisterNewAccount_clicked();

    void on_pushButton_CancelMembership_clicked();

    void on_pushButton_IssueBook_clicked();

private:
    Ui::Window_Librarian *ui;
    Window_Search * SearchObj;
    Window_RenewBook * RenewBookObj;
    Window_ReturnBook * ReturnBookObj;
    Window_ReserveBook * ReserveBookObj;
    Window_ViewAccount * ViewAccountObj;
    Window_RemoveReservation *RemoveReservationObj;
    Window_UpdateAccount *UpdateAccountObj;
    Window_AddBook * AddBookObj;
    Window_RemoveBook * RemobeBookObj;
    Window_EditBook * EditBookObj;
    Window_RegisterNewAccount * RegisterNewAccountObj;
    Window_CancelMembership * CancelMembershipObj;
    Window_IssueBook * IssueBookObj;
};

#endif // WINDOW_LIBRARIAN_H
