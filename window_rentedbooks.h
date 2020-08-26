#ifndef WINDOW_RENTEDBOOKS_H
#define WINDOW_RENTEDBOOKS_H

#include <QDialog>

namespace Ui {
class Window_RentedBooks;
}

class Window_RentedBooks : public QDialog
{
    Q_OBJECT

public:
    explicit Window_RentedBooks(QWidget *parent = nullptr);
    ~Window_RentedBooks();

private:
    Ui::Window_RentedBooks *ui;
};

#endif // WINDOW_RENTEDBOOKS_H
