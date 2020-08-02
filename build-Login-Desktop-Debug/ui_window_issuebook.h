/********************************************************************************
** Form generated from reading UI file 'window_issuebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ISSUEBOOK_H
#define UI_WINDOW_ISSUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_IssueBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookId;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_search;
    QPushButton *pushButton_IssueBook;

    void setupUi(QDialog *Window_IssueBook)
    {
        if (Window_IssueBook->objectName().isEmpty())
            Window_IssueBook->setObjectName(QStringLiteral("Window_IssueBook"));
        Window_IssueBook->resize(493, 432);
        widget = new QWidget(Window_IssueBook);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(111, 82, 191, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_BookName = new QLabel(widget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookId = new QLineEdit(widget);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));

        horizontalLayout->addWidget(lineEdit_BookId);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_search = new QPushButton(widget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        verticalLayout->addWidget(pushButton_search);

        pushButton_IssueBook = new QPushButton(widget);
        pushButton_IssueBook->setObjectName(QStringLiteral("pushButton_IssueBook"));

        verticalLayout->addWidget(pushButton_IssueBook);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Window_IssueBook);

        QMetaObject::connectSlotsByName(Window_IssueBook);
    } // setupUi

    void retranslateUi(QDialog *Window_IssueBook)
    {
        Window_IssueBook->setWindowTitle(QApplication::translate("Window_IssueBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_IssueBook", "Book ID", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("Window_IssueBook", "Search", Q_NULLPTR));
        pushButton_IssueBook->setText(QApplication::translate("Window_IssueBook", "IssueBook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_IssueBook: public Ui_Window_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ISSUEBOOK_H
