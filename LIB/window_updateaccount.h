#ifndef WINDOW_UPDATEACCOUNT_H
#define WINDOW_UPDATEACCOUNT_H

#include <QDialog>

namespace Ui {
class Window_UpdateAccount;
}

class Window_UpdateAccount : public QDialog
{
    Q_OBJECT

public:
    explicit Window_UpdateAccount(QWidget *parent = nullptr);
    ~Window_UpdateAccount();

private slots:
    void on_pushButton_search_clicked();

    void on_pushButton_UpdateAccount_clicked();

private:
    Ui::Window_UpdateAccount *ui;
};

#endif // WINDOW_UPDATEACCOUNT_H
