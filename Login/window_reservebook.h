#ifndef WINDOW_RESERVEBOOK_H
#define WINDOW_RESERVEBOOK_H

#include <QDialog>

namespace Ui {
class Window_ReserveBook;
}

class Window_ReserveBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_ReserveBook(QWidget *parent = nullptr);
    ~Window_ReserveBook();

private slots:
    void on_pushButton_Reserve_clicked();

private:
    Ui::Window_ReserveBook *ui;
};

#endif // WINDOW_RESERVEBOOK_H
