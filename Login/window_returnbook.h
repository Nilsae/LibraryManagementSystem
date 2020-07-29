#ifndef WINDOW_RETURNBOOK_H
#define WINDOW_RETURNBOOK_H

#include <QDialog>

namespace Ui {
class Window_ReturnBook;
}

class Window_ReturnBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ReturnBook(QWidget *parent = nullptr);
    ~Window_ReturnBook();

private slots:
    void on_pushButton_ReturnBook_clicked();

private:
    Ui::Window_ReturnBook *ui;
};

#endif // WINDOW_RETURNBOOK_H
