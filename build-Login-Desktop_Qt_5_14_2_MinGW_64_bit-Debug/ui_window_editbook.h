/********************************************************************************
** Form generated from reading UI file 'window_editbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_EDITBOOK_H
#define UI_WINDOW_EDITBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_EditBook
{
public:
    QTableWidget *tableWidget;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_EditBook;
    QLineEdit *lineEdit_BookName;
    QLineEdit *lineEdit_Subject;
    QLineEdit *lineEdit_AuthorName;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_Search;

    void setupUi(QDialog *Window_EditBook)
    {
        if (Window_EditBook->objectName().isEmpty())
            Window_EditBook->setObjectName(QString::fromUtf8("Window_EditBook"));
        Window_EditBook->resize(581, 482);
        tableWidget = new QTableWidget(Window_EditBook);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 320, 261, 121));
        gridLayoutWidget_3 = new QWidget(Window_EditBook);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(240, 50, 321, 261));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_EditBook = new QPushButton(gridLayoutWidget_3);
        pushButton_EditBook->setObjectName(QString::fromUtf8("pushButton_EditBook"));
        pushButton_EditBook->setMaximumSize(QSize(220, 40));
        pushButton_EditBook->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 195, 55);"));

        gridLayout->addWidget(pushButton_EditBook, 4, 0, 1, 1);

        lineEdit_BookName = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));
        lineEdit_BookName->setMaximumSize(QSize(220, 40));
        lineEdit_BookName->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 184);"));

        gridLayout->addWidget(lineEdit_BookName, 1, 0, 1, 1);

        lineEdit_Subject = new QLineEdit(gridLayoutWidget_3);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));
        lineEdit_Subject->setMaximumSize(QSize(220, 40));
        lineEdit_Subject->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 184);"));

        gridLayout->addWidget(lineEdit_Subject, 3, 0, 1, 1);

        lineEdit_AuthorName = new QLineEdit(gridLayoutWidget_3);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));
        lineEdit_AuthorName->setMaximumSize(QSize(220, 40));
        lineEdit_AuthorName->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 184);\n"
""));

        gridLayout->addWidget(lineEdit_AuthorName, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Window_EditBook);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(-10, 80, 317, 73));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_BookId = new QLineEdit(gridLayoutWidget_2);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(220, 40));
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));

        gridLayout_2->addWidget(lineEdit_BookId, 0, 0, 1, 1);

        pushButton_Search = new QPushButton(gridLayoutWidget_2);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));
        pushButton_Search->setMaximumSize(QSize(110, 30));
        pushButton_Search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 195, 55);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/icons8-search-24 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Search->setIcon(icon);

        gridLayout_2->addWidget(pushButton_Search, 0, 1, 1, 1);


        retranslateUi(Window_EditBook);

        QMetaObject::connectSlotsByName(Window_EditBook);
    } // setupUi

    void retranslateUi(QDialog *Window_EditBook)
    {
        Window_EditBook->setWindowTitle(QCoreApplication::translate("Window_EditBook", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Window_EditBook", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Window_EditBook", "BookName", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Window_EditBook", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Window_EditBook", "Subject", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_EditBook->setText(QCoreApplication::translate("Window_EditBook", "EditBook", nullptr));
        lineEdit_BookName->setPlaceholderText(QCoreApplication::translate("Window_EditBook", "BookName", nullptr));
        lineEdit_Subject->setPlaceholderText(QCoreApplication::translate("Window_EditBook", "Subject", nullptr));
        lineEdit_AuthorName->setPlaceholderText(QCoreApplication::translate("Window_EditBook", "Author", nullptr));
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_EditBook", "Book ID", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("Window_EditBook", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_EditBook: public Ui_Window_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_EDITBOOK_H
