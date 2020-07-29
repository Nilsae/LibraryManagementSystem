#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "window_librarian.h"
#include "window_member.h"
#include "window_removereservation.h"
#include "window_renewbook.h"
#include "window_reservebook.h"
#include "window_returnbook.h"
#include "window_search.h"
#include "window_viewaccount.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::MainWindow *ui;
    Window_Member * Member;
    Window_Librarian * Libaririan;
    Window_Search * SearchObj;
    Window_RenewBook * RenewBookObj;
    Window_ReturnBook * ReturnBookObj;
    Window_ReserveBook * ReserveBookObj;
    Window_ViewAccount * ViewAccountObj;
    Window_RemoveReservation *RemoveReservationObj;
};
#endif // MAINWINDOW_H
