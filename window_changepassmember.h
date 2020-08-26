#ifndef WINDOW_CHANGEPASSMEMBER_H
#define WINDOW_CHANGEPASSMEMBER_H

#include <QDialog>

namespace Ui {
class Window_ChangePassMember;
}

class Window_ChangePassMember : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ChangePassMember(QWidget *parent = nullptr);
    ~Window_ChangePassMember();

private slots:
    void on_pushButton_ChangePass_clicked();

private:
    Ui::Window_ChangePassMember *ui;
};

#endif // WINDOW_CHANGEPASSMEMBER_H
