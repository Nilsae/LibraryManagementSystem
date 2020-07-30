#ifndef WINDOW_EDITBOOK_H
#define WINDOW_EDITBOOK_H

#include <QDialog>

namespace Ui {
class Window_EditBook;
}

class Window_EditBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_EditBook(QWidget *parent = nullptr);
    ~Window_EditBook();

private slots:
    void on_pushButton_Search_clicked();

    void on_pushButton_EditBook_clicked();

private:
    Ui::Window_EditBook *ui;
};

#endif // WINDOW_EDITBOOK_H
