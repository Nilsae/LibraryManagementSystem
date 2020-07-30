/********************************************************************************
** Form generated from reading UI file 'window_renewbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RENEWBOOK_H
#define UI_WINDOW_RENEWBOOK_H

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

class Ui_Window_RenewBook
{
public:
    QTableWidget *tableWidget_RentedBooks;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_BookId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_MemberId;
    QPushButton *pushButton_search;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_renewdDate;
    QPushButton *pushButton_Renew;

    void setupUi(QDialog *Window_RenewBook)
    {
        if (Window_RenewBook->objectName().isEmpty())
            Window_RenewBook->setObjectName(QStringLiteral("Window_RenewBook"));
        Window_RenewBook->resize(747, 538);
        tableWidget_RentedBooks = new QTableWidget(Window_RenewBook);
        if (tableWidget_RentedBooks->columnCount() < 4)
            tableWidget_RentedBooks->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_RentedBooks->setObjectName(QStringLiteral("tableWidget_RentedBooks"));
        tableWidget_RentedBooks->setGeometry(QRect(20, 100, 401, 341));
        tableWidget_RentedBooks->setMouseTracking(true);
        widget = new QWidget(Window_RenewBook);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(440, 110, 251, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_BookId = new QLineEdit(widget);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));

        horizontalLayout->addWidget(lineEdit_BookId);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_MemberId = new QLineEdit(widget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout_2->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_search = new QPushButton(widget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        verticalLayout->addWidget(pushButton_search);

        widget1 = new QWidget(Window_RenewBook);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(440, 350, 244, 60));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_renewdDate = new QLineEdit(widget1);
        lineEdit_renewdDate->setObjectName(QStringLiteral("lineEdit_renewdDate"));

        horizontalLayout_3->addWidget(lineEdit_renewdDate);


        verticalLayout_2->addLayout(horizontalLayout_3);

        pushButton_Renew = new QPushButton(widget1);
        pushButton_Renew->setObjectName(QStringLiteral("pushButton_Renew"));

        verticalLayout_2->addWidget(pushButton_Renew);


        retranslateUi(Window_RenewBook);

        QMetaObject::connectSlotsByName(Window_RenewBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RenewBook)
    {
        Window_RenewBook->setWindowTitle(QApplication::translate("Window_RenewBook", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RentedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_RenewBook", "BookName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RentedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_RenewBook", "Subject", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_RentedBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_RenewBook", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_RentedBooks->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Window_RenewBook", "RentedUntil", Q_NULLPTR));
        label->setText(QApplication::translate("Window_RenewBook", "Book ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window_RenewBook", "Member ID", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("Window_RenewBook", "search", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window_RenewBook", "Renewd Date", Q_NULLPTR));
        pushButton_Renew->setText(QApplication::translate("Window_RenewBook", "Renew", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_RenewBook: public Ui_Window_RenewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RENEWBOOK_H
