#ifndef WINDOW_RENEWBOOK_H
#define WINDOW_RENEWBOOK_H

#include <QDialog>

namespace Ui {
class Window_RenewBook;
}

class Window_RenewBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_RenewBook(QWidget *parent = nullptr);
    int userflag;
    ~Window_RenewBook();

private slots:
    void on_pushButton_search_clicked();

    void on_pushButton_Renew_clicked();

private:
    Ui::Window_RenewBook *ui;
};

#endif // WINDOW_RENEWBOOK_H
