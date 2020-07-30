#include "window_issuebook.h"
#include "ui_window_issuebook.h"

Window_IssueBook::Window_IssueBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_IssueBook)
{
    ui->setupUi(this);
}

Window_IssueBook::~Window_IssueBook()
{
    delete ui;
}
