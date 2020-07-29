#ifndef WINDOW_CANCELMEMBERSHIP_H
#define WINDOW_CANCELMEMBERSHIP_H

#include <QDialog>

namespace Ui {
class Window_CancelMembership;
}

class Window_CancelMembership : public QDialog
{
    Q_OBJECT

public:
    explicit Window_CancelMembership(QWidget *parent = nullptr);
    ~Window_CancelMembership();

private:
    Ui::Window_CancelMembership *ui;
};

#endif // WINDOW_CANCELMEMBERSHIP_H
