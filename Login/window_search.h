#ifndef WINDOW_SEARCH_H
#define WINDOW_SEARCH_H

#include <QDialog>

namespace Ui {
class Window_Search;
}

class Window_Search : public QDialog
{
    Q_OBJECT

public:
    explicit Window_Search(QWidget *parent = nullptr);
    ~Window_Search();

private slots:
    void on_pushButton_SearchBook_clicked();

private:
    Ui::Window_Search *ui;
};

#endif // WINDOW_SEARCH_H
