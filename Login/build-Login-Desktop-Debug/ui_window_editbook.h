/********************************************************************************
** Form generated from reading UI file 'window_editbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_EDITBOOK_H
#define UI_WINDOW_EDITBOOK_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_EditBook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_EditBook;
    QLineEdit *lineEdit_BookId;
    QLabel *label;
    QPushButton *pushButton_Search;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Window_EditBook)
    {
        if (Window_EditBook->objectName().isEmpty())
            Window_EditBook->setObjectName(QStringLiteral("Window_EditBook"));
        Window_EditBook->resize(581, 482);
        layoutWidget = new QWidget(Window_EditBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 110, 261, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_EditBook = new QPushButton(layoutWidget);
        pushButton_EditBook->setObjectName(QStringLiteral("pushButton_EditBook"));

        verticalLayout->addWidget(pushButton_EditBook);

        lineEdit_BookId = new QLineEdit(Window_EditBook);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));
        lineEdit_BookId->setGeometry(QRect(222, 30, 151, 25));
        label = new QLabel(Window_EditBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 67, 17));
        pushButton_Search = new QPushButton(Window_EditBook);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));
        pushButton_Search->setGeometry(QRect(400, 30, 89, 25));
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 110, 271, 221));

        retranslateUi(Window_EditBook);

        QMetaObject::connectSlotsByName(Window_EditBook);
    } // setupUi

    void retranslateUi(QDialog *Window_EditBook)
    {
        Window_EditBook->setWindowTitle(QApplication::translate("Window_EditBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_EditBook", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_EditBook", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_EditBook", "Subject", Q_NULLPTR));
        pushButton_EditBook->setText(QApplication::translate("Window_EditBook", "EditBook", Q_NULLPTR));
        label->setText(QApplication::translate("Window_EditBook", "Book ID", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("Window_EditBook", "Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_EditBook", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_EditBook", "BookName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_EditBook", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("Window_EditBook", "Subject", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Window_EditBook: public Ui_Window_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_EDITBOOK_H
