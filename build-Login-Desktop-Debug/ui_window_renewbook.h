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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_RentedBooks;
    QLabel *label;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit_BookId;
    QLineEdit *lineEdit_renewdDate;
    QLabel *label_2;
    QPushButton *pushButton_Renew;
    QLabel *label_3;
    QLineEdit *lineEdit_MemberId;

    void setupUi(QDialog *Window_RenewBook)
    {
        if (Window_RenewBook->objectName().isEmpty())
            Window_RenewBook->setObjectName(QStringLiteral("Window_RenewBook"));
        Window_RenewBook->resize(747, 538);
        layoutWidget = new QWidget(Window_RenewBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 70, 521, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_RentedBooks = new QTableWidget(layoutWidget);
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
        tableWidget_RentedBooks->setMouseTracking(true);

        verticalLayout->addWidget(tableWidget_RentedBooks);

        label = new QLabel(Window_RenewBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 67, 17));
        pushButton_search = new QPushButton(Window_RenewBook);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(520, 20, 89, 25));
        lineEdit_BookId = new QLineEdit(Window_RenewBook);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));
        lineEdit_BookId->setGeometry(QRect(260, 10, 201, 25));
        lineEdit_renewdDate = new QLineEdit(Window_RenewBook);
        lineEdit_renewdDate->setObjectName(QStringLiteral("lineEdit_renewdDate"));
        lineEdit_renewdDate->setGeometry(QRect(280, 480, 171, 25));
        label_2 = new QLabel(Window_RenewBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 480, 121, 17));
        pushButton_Renew = new QPushButton(Window_RenewBook);
        pushButton_Renew->setObjectName(QStringLiteral("pushButton_Renew"));
        pushButton_Renew->setGeometry(QRect(510, 480, 89, 25));
        label_3 = new QLabel(Window_RenewBook);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 50, 81, 17));
        lineEdit_MemberId = new QLineEdit(Window_RenewBook);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));
        lineEdit_MemberId->setGeometry(QRect(260, 40, 201, 25));

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
        pushButton_search->setText(QApplication::translate("Window_RenewBook", "search", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window_RenewBook", "Renewd Date", Q_NULLPTR));
        pushButton_Renew->setText(QApplication::translate("Window_RenewBook", "Renew", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window_RenewBook", "Member ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_RenewBook: public Ui_Window_RenewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RENEWBOOK_H
