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

    void on_pushButton_clicked();

    void on_pushButton_ID_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_name_clicked();

    void on_pushButton_author_clicked();

    void on_pushButton_subject_clicked();

private:
    Ui::Window_Search *ui;
};

#endif // WINDOW_SEARCH_H
