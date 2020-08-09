#ifndef WINDOW_ADDBOOK_H
#define WINDOW_ADDBOOK_H

#include <QDialog>

namespace Ui {
class Window_AddBook;
}

class Window_AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_AddBook(QWidget *parent = nullptr);
    ~Window_AddBook();

private slots:
    void on_pushButton_AddBook_clicked();

    void on_lineEdit_BookName_editingFinished();

private:
    Ui::Window_AddBook *ui;
};

#endif // WINDOW_ADDBOOK_H
