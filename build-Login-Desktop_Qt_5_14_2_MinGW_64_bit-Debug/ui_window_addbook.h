/********************************************************************************
** Form generated from reading UI file 'window_addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ADDBOOK_H
#define UI_WINDOW_ADDBOOK_H

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

class Ui_Window_AddBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_AuthorName;
    QLineEdit *lineEdit_BookId;
    QLineEdit *lineEdit_Subject;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_BookName;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_AddBook;

    void setupUi(QDialog *Window_AddBook)
    {
        if (Window_AddBook->objectName().isEmpty())
            Window_AddBook->setObjectName(QString::fromUtf8("Window_AddBook"));
        Window_AddBook->resize(617, 490);
        Window_AddBook->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 187, 255);"));
        verticalLayout = new QVBoxLayout(Window_AddBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_AuthorName = new QLineEdit(Window_AddBook);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));
        lineEdit_AuthorName->setMaximumSize(QSize(230, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_AuthorName->setFont(font);
        lineEdit_AuthorName->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 196, 255);"));

        gridLayout->addWidget(lineEdit_AuthorName, 3, 1, 1, 1);

        lineEdit_BookId = new QLineEdit(Window_AddBook);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(230, 35));
        lineEdit_BookId->setFont(font);
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 129, 255);\n"
"border-color:rgb(255, 199, 250);"));

        gridLayout->addWidget(lineEdit_BookId, 1, 1, 1, 1);

        lineEdit_Subject = new QLineEdit(Window_AddBook);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));
        lineEdit_Subject->setMaximumSize(QSize(230, 35));
        lineEdit_Subject->setFont(font);
        lineEdit_Subject->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 33, 33)"));

        gridLayout->addWidget(lineEdit_Subject, 4, 1, 1, 1);

        label_2 = new QLabel(Window_AddBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        lineEdit_BookName = new QLineEdit(Window_AddBook);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));
        lineEdit_BookName->setMaximumSize(QSize(230, 35));
        lineEdit_BookName->setFont(font);
        lineEdit_BookName->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 199, 38);"));

        gridLayout->addWidget(lineEdit_BookName, 2, 1, 1, 1);

        label = new QLabel(Window_AddBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/addbook.png")));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton_AddBook = new QPushButton(Window_AddBook);
        pushButton_AddBook->setObjectName(QString::fromUtf8("pushButton_AddBook"));
        pushButton_AddBook->setMaximumSize(QSize(230, 35));
        pushButton_AddBook->setFont(font);
        pushButton_AddBook->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 106);\n"
"color: rgb(134, 134, 134);"));

        gridLayout->addWidget(pushButton_AddBook, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_AddBook);

        QMetaObject::connectSlotsByName(Window_AddBook);
    } // setupUi

    void retranslateUi(QDialog *Window_AddBook)
    {
        Window_AddBook->setWindowTitle(QCoreApplication::translate("Window_AddBook", "Dialog", nullptr));
        lineEdit_AuthorName->setPlaceholderText(QCoreApplication::translate("Window_AddBook", " Author", nullptr));
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_AddBook", " Book Id", nullptr));
        lineEdit_Subject->setPlaceholderText(QCoreApplication::translate("Window_AddBook", " Subject", nullptr));
        label_2->setText(QString());
        lineEdit_BookName->setPlaceholderText(QCoreApplication::translate("Window_AddBook", " Book Name", nullptr));
        label->setText(QString());
        pushButton_AddBook->setText(QCoreApplication::translate("Window_AddBook", "Add Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_AddBook: public Ui_Window_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ADDBOOK_H
