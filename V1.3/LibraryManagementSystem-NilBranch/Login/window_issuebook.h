#ifndef WINDOW_ISSUEBOOK_H
#define WINDOW_ISSUEBOOK_H

#include <QDialog>

namespace Ui {
class Window_IssueBook;
}

class Window_IssueBook : public QDialog
{
    Q_OBJECT

public:
    explicit Window_IssueBook(QWidget *parent = nullptr);
    ~Window_IssueBook();

private:
    Ui::Window_IssueBook *ui;
};

#endif // WINDOW_ISSUEBOOK_H
