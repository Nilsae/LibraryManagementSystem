/********************************************************************************
** Form generated from reading UI file 'window_issuebook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ISSUEBOOK_H
#define UI_WINDOW_ISSUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window_IssueBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Subject;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QPushButton *pushButton_IssueBook;
    QLineEdit *lineEdit_BookName;
    QLineEdit *lineEdit_AuthorName;
    QLabel *label_3;

    void setupUi(QDialog *Window_IssueBook)
    {
        if (Window_IssueBook->objectName().isEmpty())
            Window_IssueBook->setObjectName(QString::fromUtf8("Window_IssueBook"));
        Window_IssueBook->resize(493, 432);
        Window_IssueBook->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 65);"));
        verticalLayout = new QVBoxLayout(Window_IssueBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Window_IssueBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        lineEdit_Subject = new QLineEdit(Window_IssueBook);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));
        lineEdit_Subject->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(11);
        lineEdit_Subject->setFont(font);
        lineEdit_Subject->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 38);"));

        gridLayout->addWidget(lineEdit_Subject, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        label = new QLabel(Window_IssueBook);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton_IssueBook = new QPushButton(Window_IssueBook);
        pushButton_IssueBook->setObjectName(QString::fromUtf8("pushButton_IssueBook"));
        pushButton_IssueBook->setMaximumSize(QSize(230, 40));
        pushButton_IssueBook->setFont(font);
        pushButton_IssueBook->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);\n"
"color: rgb(85, 170, 127);"));

        gridLayout->addWidget(pushButton_IssueBook, 5, 1, 1, 1);

        lineEdit_BookName = new QLineEdit(Window_IssueBook);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));
        lineEdit_BookName->setMaximumSize(QSize(230, 40));
        lineEdit_BookName->setFont(font);
        lineEdit_BookName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 215, 11);"));

        gridLayout->addWidget(lineEdit_BookName, 2, 1, 1, 1);

        lineEdit_AuthorName = new QLineEdit(Window_IssueBook);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));
        lineEdit_AuthorName->setMaximumSize(QSize(230, 40));
        lineEdit_AuthorName->setFont(font);
        lineEdit_AuthorName->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));

        gridLayout->addWidget(lineEdit_AuthorName, 3, 1, 1, 1);

        label_3 = new QLabel(Window_IssueBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/issue.png")));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_IssueBook);

        QMetaObject::connectSlotsByName(Window_IssueBook);
    } // setupUi

    void retranslateUi(QDialog *Window_IssueBook)
    {
        Window_IssueBook->setWindowTitle(QCoreApplication::translate("Window_IssueBook", "Dialog", nullptr));
        label_2->setText(QString());
        lineEdit_Subject->setPlaceholderText(QCoreApplication::translate("Window_IssueBook", "Subject", nullptr));
        label->setText(QString());
        pushButton_IssueBook->setText(QCoreApplication::translate("Window_IssueBook", "Issue Book", nullptr));
        lineEdit_BookName->setPlaceholderText(QCoreApplication::translate("Window_IssueBook", "Book Name", nullptr));
        lineEdit_AuthorName->setPlaceholderText(QCoreApplication::translate("Window_IssueBook", "Author", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_IssueBook: public Ui_Window_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ISSUEBOOK_H
