/********************************************************************************
** Form generated from reading UI file 'window_search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_SEARCH_H
#define UI_WINDOW_SEARCH_H

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

class Ui_Window_Search
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_ID;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QPushButton *pushButton_name;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QPushButton *pushButton_author;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_subject;

    void setupUi(QDialog *Window_Search)
    {
        if (Window_Search->objectName().isEmpty())
            Window_Search->setObjectName(QStringLiteral("Window_Search"));
        Window_Search->resize(710, 387);
        tableWidget = new QTableWidget(Window_Search);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(400, 60, 261, 251));
        tableWidget->setColumnCount(0);
        layoutWidget = new QWidget(Window_Search);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 341, 301));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_BookId = new QLineEdit(layoutWidget);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));

        horizontalLayout_5->addWidget(lineEdit_BookId);

        pushButton_ID = new QPushButton(layoutWidget);
        pushButton_ID->setObjectName(QStringLiteral("pushButton_ID"));

        horizontalLayout_5->addWidget(pushButton_ID);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout_6->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout_6->addWidget(lineEdit_BookName);

        pushButton_name = new QPushButton(layoutWidget);
        pushButton_name->setObjectName(QStringLiteral("pushButton_name"));

        horizontalLayout_6->addWidget(pushButton_name);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_7->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_7->addWidget(lineEdit_AuthorName);

        pushButton_author = new QPushButton(layoutWidget);
        pushButton_author->setObjectName(QStringLiteral("pushButton_author"));

        horizontalLayout_7->addWidget(pushButton_author);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_8->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_8->addWidget(lineEdit_Subject);

        pushButton_subject = new QPushButton(layoutWidget);
        pushButton_subject->setObjectName(QStringLiteral("pushButton_subject"));

        horizontalLayout_8->addWidget(pushButton_subject);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(Window_Search);

        QMetaObject::connectSlotsByName(Window_Search);
    } // setupUi

    void retranslateUi(QDialog *Window_Search)
    {
        Window_Search->setWindowTitle(QApplication::translate("Window_Search", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_Search", "BookName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_Search", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_Search", "Subject", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Window_Search", "Statue", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Window_Search", "Id", Q_NULLPTR));
        label->setText(QApplication::translate("Window_Search", "Book ID ", Q_NULLPTR));
        pushButton_ID->setText(QApplication::translate("Window_Search", "Search By ID", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_Search", "BookName", Q_NULLPTR));
        pushButton_name->setText(QApplication::translate("Window_Search", "Search By Name", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_Search", "Author", Q_NULLPTR));
        pushButton_author->setText(QApplication::translate("Window_Search", "Search By Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_Search", "Subject", Q_NULLPTR));
        pushButton_subject->setText(QApplication::translate("Window_Search", "Search By Subject", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_Search: public Ui_Window_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_SEARCH_H
