#ifndef WINDOW_CHECHOUTBOOK_H
#define WINDOW_CHECHOUTBOOK_H

#include <QDialog>

namespace Ui {
class Window_ChechOutBook;
}

class Window_ChechOutBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ChechOutBook(QWidget *parent = nullptr);
    ~Window_ChechOutBook();

private:
    Ui::Window_ChechOutBook *ui;
};

#endif // WINDOW_CHECHOUTBOOK_H
