#ifndef WINDOW_REMOVEBOOK_H
#define WINDOW_REMOVEBOOK_H

#include <QDialog>

namespace Ui {
class Window_RemoveBook;
}

class Window_RemoveBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_RemoveBook(QWidget *parent = nullptr);
    ~Window_RemoveBook();

private slots:
    void on_pushButton_RemoveBook_clicked();

private:
    Ui::Window_RemoveBook *ui;
};

#endif // WINDOW_REMOVEBOOK_H
