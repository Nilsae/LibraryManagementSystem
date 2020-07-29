#ifndef WINDOW_VIEWACCOUNT_H
#define WINDOW_VIEWACCOUNT_H

#include <QDialog>

namespace Ui {
class Window_ViewAccount;
}

class Window_ViewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ViewAccount(QWidget *parent = nullptr);
    ~Window_ViewAccount();

private slots:
    void on_pushButton_CancelMembership_clicked();

private:
    Ui::Window_ViewAccount *ui;
};

#endif // WINDOW_VIEWACCOUNT_H
