#ifndef WINDOW_REGISTERNEWACCOUNT_H
#define WINDOW_REGISTERNEWACCOUNT_H

#include <QDialog>

namespace Ui {
class Window_RegisterNewAccount;
}

class Window_RegisterNewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit Window_RegisterNewAccount(QWidget *parent = nullptr);
    ~Window_RegisterNewAccount();

private slots:
    void on_pushButton_Register_clicked();

    void on_radioButton_Admin_clicked();

    void on_lineEdit_ConfirmPassword_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Window_RegisterNewAccount *ui;
};

#endif // WINDOW_REGISTERNEWACCOUNT_H
