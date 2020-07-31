/********************************************************************************
** Form generated from reading UI file 'window_chechoutbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CHECHOUTBOOK_H
#define UI_WINDOW_CHECHOUTBOOK_H

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

class Ui_Window_ChechOutBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_CheckOut;
    QLineEdit *lineEdit_AuthorName;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Subject;
    QLineEdit *lineEdit_BookName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;

    void setupUi(QDialog *Window_ChechOutBook)
    {
        if (Window_ChechOutBook->objectName().isEmpty())
            Window_ChechOutBook->setObjectName(QString::fromUtf8("Window_ChechOutBook"));
        Window_ChechOutBook->resize(479, 429);
        Window_ChechOutBook->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 227, 84);"));
        verticalLayout = new QVBoxLayout(Window_ChechOutBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_CheckOut = new QPushButton(Window_ChechOutBook);
        pushButton_CheckOut->setObjectName(QString::fromUtf8("pushButton_CheckOut"));
        pushButton_CheckOut->setMaximumSize(QSize(230, 40));
        pushButton_CheckOut->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 78, 0);\n"
"color: rgb(253, 205, 9);"));

        gridLayout->addWidget(pushButton_CheckOut, 5, 1, 1, 1);

        lineEdit_AuthorName = new QLineEdit(Window_ChechOutBook);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));
        lineEdit_AuthorName->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_AuthorName->setFont(font);
        lineEdit_AuthorName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 201, 5);\n"
"color: rgb(234, 78, 0);"));

        gridLayout->addWidget(lineEdit_AuthorName, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        label = new QLabel(Window_ChechOutBook);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(Window_ChechOutBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        lineEdit_Subject = new QLineEdit(Window_ChechOutBook);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));
        lineEdit_Subject->setMaximumSize(QSize(230, 40));
        lineEdit_Subject->setFont(font);
        lineEdit_Subject->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 201, 5);\n"
"color: rgb(234, 78, 0);"));

        gridLayout->addWidget(lineEdit_Subject, 4, 1, 1, 1);

        lineEdit_BookName = new QLineEdit(Window_ChechOutBook);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));
        lineEdit_BookName->setMaximumSize(QSize(230, 40));
        lineEdit_BookName->setFont(font);
        lineEdit_BookName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 201, 5);\n"
"color: rgb(234, 78, 0);"));

        gridLayout->addWidget(lineEdit_BookName, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        label_3 = new QLabel(Window_ChechOutBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/checkout.png")));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_ChechOutBook);

        QMetaObject::connectSlotsByName(Window_ChechOutBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ChechOutBook)
    {
        Window_ChechOutBook->setWindowTitle(QCoreApplication::translate("Window_ChechOutBook", "Dialog", nullptr));
        pushButton_CheckOut->setText(QCoreApplication::translate("Window_ChechOutBook", "ChechOut", nullptr));
        lineEdit_AuthorName->setPlaceholderText(QCoreApplication::translate("Window_ChechOutBook", " Author", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        lineEdit_Subject->setPlaceholderText(QCoreApplication::translate("Window_ChechOutBook", " Subject", nullptr));
        lineEdit_BookName->setPlaceholderText(QCoreApplication::translate("Window_ChechOutBook", " Book Name", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_ChechOutBook: public Ui_Window_ChechOutBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CHECHOUTBOOK_H
