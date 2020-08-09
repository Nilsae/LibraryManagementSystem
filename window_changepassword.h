#ifndef WINDOW_CHANGEPASSWORD_H
#define WINDOW_CHANGEPASSWORD_H

#include <QDialog>

namespace Ui {
class Window_ChangePassword;
}

class Window_ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ChangePassword(QWidget *parent = nullptr);
    ~Window_ChangePassword();

private slots:
    void on_pushButton_ChangePassword_clicked();

private:
    Ui::Window_ChangePassword *ui;
};

#endif // WINDOW_CHANGEPASSWORD_H
