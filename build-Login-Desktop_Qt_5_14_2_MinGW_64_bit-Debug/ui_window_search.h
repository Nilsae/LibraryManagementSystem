/********************************************************************************
** Form generated from reading UI file 'window_search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_SEARCH_H
#define UI_WINDOW_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window_Search
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_author;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_name;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_subject;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_BookId;
    QLineEdit *lineEdit_AuthorName;
    QLabel *label;
    QPushButton *pushButton_ID;
    QLineEdit *lineEdit_BookName;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Window_Search)
    {
        if (Window_Search->objectName().isEmpty())
            Window_Search->setObjectName(QString::fromUtf8("Window_Search"));
        Window_Search->resize(624, 508);
        Window_Search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);"));
        verticalLayout = new QVBoxLayout(Window_Search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_author = new QPushButton(Window_Search);
        pushButton_author->setObjectName(QString::fromUtf8("pushButton_author"));
        pushButton_author->setMaximumSize(QSize(120, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        pushButton_author->setFont(font);
        pushButton_author->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 180);\n"
"color: rgb(255, 122, 99);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/icons8-search-24 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_author->setIcon(icon);

        gridLayout->addWidget(pushButton_author, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        pushButton_name = new QPushButton(Window_Search);
        pushButton_name->setObjectName(QString::fromUtf8("pushButton_name"));
        pushButton_name->setMaximumSize(QSize(120, 35));
        pushButton_name->setFont(font);
        pushButton_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 180);\n"
"color: rgb(255, 122, 99);"));
        pushButton_name->setIcon(icon);

        gridLayout->addWidget(pushButton_name, 2, 2, 1, 1);

        lineEdit_Subject = new QLineEdit(Window_Search);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));
        lineEdit_Subject->setMaximumSize(QSize(200, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font1.setPointSize(11);
        lineEdit_Subject->setFont(font1);
        lineEdit_Subject->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        gridLayout->addWidget(lineEdit_Subject, 4, 1, 1, 1);

        pushButton_subject = new QPushButton(Window_Search);
        pushButton_subject->setObjectName(QString::fromUtf8("pushButton_subject"));
        pushButton_subject->setMaximumSize(QSize(120, 35));
        pushButton_subject->setFont(font);
        pushButton_subject->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 180);\n"
"color: rgb(255, 122, 99);\n"
""));
        pushButton_subject->setIcon(icon);

        gridLayout->addWidget(pushButton_subject, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        lineEdit_BookId = new QLineEdit(Window_Search);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(200, 35));
        lineEdit_BookId->setFont(font1);
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 122, 96);\n"
"image: url(:/img/img/checkout.png);"));

        gridLayout->addWidget(lineEdit_BookId, 1, 1, 1, 1);

        lineEdit_AuthorName = new QLineEdit(Window_Search);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));
        lineEdit_AuthorName->setMaximumSize(QSize(200, 35));
        lineEdit_AuthorName->setFont(font1);
        lineEdit_AuthorName->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 76, 90);\n"
"color: rgb(216, 216, 216);"));

        gridLayout->addWidget(lineEdit_AuthorName, 3, 1, 1, 1);

        label = new QLabel(Window_Search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/searchpic.png")));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton_ID = new QPushButton(Window_Search);
        pushButton_ID->setObjectName(QString::fromUtf8("pushButton_ID"));
        pushButton_ID->setMaximumSize(QSize(120, 35));
        pushButton_ID->setFont(font);
        pushButton_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 180);\n"
"color: rgb(255, 122, 99);"));
        pushButton_ID->setIcon(icon);

        gridLayout->addWidget(pushButton_ID, 1, 2, 1, 1);

        lineEdit_BookName = new QLineEdit(Window_Search);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));
        lineEdit_BookName->setMaximumSize(QSize(200, 35));
        lineEdit_BookName->setFont(font1);
        lineEdit_BookName->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 255, 160);"));

        gridLayout->addWidget(lineEdit_BookName, 2, 1, 1, 1);

        label_2 = new QLabel(Window_Search);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        label_3 = new QLabel(Window_Search);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(Window_Search);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_Search);

        QMetaObject::connectSlotsByName(Window_Search);
    } // setupUi

    void retranslateUi(QDialog *Window_Search)
    {
        Window_Search->setWindowTitle(QCoreApplication::translate("Window_Search", "Dialog", nullptr));
        pushButton_author->setText(QCoreApplication::translate("Window_Search", "Search By Author", nullptr));
        pushButton_name->setText(QCoreApplication::translate("Window_Search", "Search By Name", nullptr));
        lineEdit_Subject->setPlaceholderText(QCoreApplication::translate("Window_Search", " Subject", nullptr));
        pushButton_subject->setText(QCoreApplication::translate("Window_Search", "Search By Subject", nullptr));
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_Search", " Book ID ", nullptr));
        lineEdit_AuthorName->setPlaceholderText(QCoreApplication::translate("Window_Search", " Author", nullptr));
        label->setText(QString());
        pushButton_ID->setText(QCoreApplication::translate("Window_Search", "Search By ID", nullptr));
        lineEdit_BookName->setPlaceholderText(QCoreApplication::translate("Window_Search", " Book Name", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_Search: public Ui_Window_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_SEARCH_H
