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
    ~Window_RenewBook();

private:
    Ui::Window_RenewBook *ui;
};

#endif // WINDOW_RENEWBOOK_H
