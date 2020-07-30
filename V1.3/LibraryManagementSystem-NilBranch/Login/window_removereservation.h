#ifndef WINDOW_REMOVERESERVATION_H
#define WINDOW_REMOVERESERVATION_H

#include <QDialog>

namespace Ui {
class Window_RemoveReservation;
}

class Window_RemoveReservation : public QDialog
{
    Q_OBJECT

public:
    explicit Window_RemoveReservation(QWidget *parent = nullptr);
    ~Window_RemoveReservation();

private:
    Ui::Window_RemoveReservation *ui;
};

#endif // WINDOW_REMOVERESERVATION_H
