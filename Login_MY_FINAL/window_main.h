#ifndef WINDOW_MAIN_H
#define WINDOW_MAIN_H

#include <QDialog>

namespace Ui {
class Window_main;
}

class Window_main : public QDialog
{
    Q_OBJECT

public:
    explicit Window_main(QWidget *parent = nullptr);
    ~Window_main();

private:
    Ui::Window_main *ui;
};

#endif // WINDOW_MAIN_H
