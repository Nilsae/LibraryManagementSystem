/********************************************************************************
** Form generated from reading UI file 'window_member.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_MEMBER_H
#define UI_WINDOW_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_Member
{
public:
    QSplitter *splitter;
    QLabel *label_RentedBooks;
    QTableWidget *tableWidget_RentedBooks;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Logout;
    QPushButton *pushButton_ViewAccount;
    QPushButton *pushButton_UpdateAccount;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ReturnBook;
    QPushButton *pushButton_RemoveReservation;
    QPushButton *pushButton_RenewBook;
    QPushButton *pushButton_ReserveBook;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_ChechOutBook;

    void setupUi(QDialog *Window_Member)
    {
        if (Window_Member->objectName().isEmpty())
            Window_Member->setObjectName(QString::fromUtf8("Window_Member"));
        Window_Member->resize(995, 595);
        splitter = new QSplitter(Window_Member);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(300, 150, 281, 291));
        splitter->setOrientation(Qt::Vertical);
        label_RentedBooks = new QLabel(splitter);
        label_RentedBooks->setObjectName(QString::fromUtf8("label_RentedBooks"));
        splitter->addWidget(label_RentedBooks);
        tableWidget_RentedBooks = new QTableWidget(splitter);
        if (tableWidget_RentedBooks->columnCount() < 2)
            tableWidget_RentedBooks->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_RentedBooks->setObjectName(QString::fromUtf8("tableWidget_RentedBooks"));
        splitter->addWidget(tableWidget_RentedBooks);
        layoutWidget = new QWidget(Window_Member);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(900, 0, 96, 100));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Logout = new QPushButton(layoutWidget);
        pushButton_Logout->setObjectName(QString::fromUtf8("pushButton_Logout"));

        verticalLayout_2->addWidget(pushButton_Logout);

        pushButton_ViewAccount = new QPushButton(layoutWidget);
        pushButton_ViewAccount->setObjectName(QString::fromUtf8("pushButton_ViewAccount"));

        verticalLayout_2->addWidget(pushButton_ViewAccount);

        pushButton_UpdateAccount = new QPushButton(layoutWidget);
        pushButton_UpdateAccount->setObjectName(QString::fromUtf8("pushButton_UpdateAccount"));

        verticalLayout_2->addWidget(pushButton_UpdateAccount);

        layoutWidget1 = new QWidget(Window_Member);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 210, 126, 207));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_ReturnBook = new QPushButton(layoutWidget1);
        pushButton_ReturnBook->setObjectName(QString::fromUtf8("pushButton_ReturnBook"));

        verticalLayout->addWidget(pushButton_ReturnBook);

        pushButton_RemoveReservation = new QPushButton(layoutWidget1);
        pushButton_RemoveReservation->setObjectName(QString::fromUtf8("pushButton_RemoveReservation"));

        verticalLayout->addWidget(pushButton_RemoveReservation);

        pushButton_RenewBook = new QPushButton(layoutWidget1);
        pushButton_RenewBook->setObjectName(QString::fromUtf8("pushButton_RenewBook"));

        verticalLayout->addWidget(pushButton_RenewBook);

        pushButton_ReserveBook = new QPushButton(layoutWidget1);
        pushButton_ReserveBook->setObjectName(QString::fromUtf8("pushButton_ReserveBook"));

        verticalLayout->addWidget(pushButton_ReserveBook);

        pushButton_Search = new QPushButton(layoutWidget1);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));

        verticalLayout->addWidget(pushButton_Search);


        verticalLayout_3->addLayout(verticalLayout);

        pushButton_ChechOutBook = new QPushButton(layoutWidget1);
        pushButton_ChechOutBook->setObjectName(QString::fromUtf8("pushButton_ChechOutBook"));

        verticalLayout_3->addWidget(pushButton_ChechOutBook);


        retranslateUi(Window_Member);

        QMetaObject::connectSlotsByName(Window_Member);
    } // setupUi

    void retranslateUi(QDialog *Window_Member)
    {
        Window_Member->setWindowTitle(QCoreApplication::translate("Window_Member", "Dialog", nullptr));
        label_RentedBooks->setText(QCoreApplication::translate("Window_Member", "             RentedBooks&ReservedBooks", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RentedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Window_Member", "BookName", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RentedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Window_Member", "RentedUntil", nullptr));
        pushButton_Logout->setText(QCoreApplication::translate("Window_Member", "Logout", nullptr));
        pushButton_ViewAccount->setText(QCoreApplication::translate("Window_Member", "ViewAccount", nullptr));
        pushButton_UpdateAccount->setText(QCoreApplication::translate("Window_Member", "UpdateAccount", nullptr));
        pushButton_ReturnBook->setText(QCoreApplication::translate("Window_Member", "ReturnBook", nullptr));
        pushButton_RemoveReservation->setText(QCoreApplication::translate("Window_Member", "RemoveReservation", nullptr));
        pushButton_RenewBook->setText(QCoreApplication::translate("Window_Member", "RenewBook", nullptr));
        pushButton_ReserveBook->setText(QCoreApplication::translate("Window_Member", "ReserveBook", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("Window_Member", "Search", nullptr));
        pushButton_ChechOutBook->setText(QCoreApplication::translate("Window_Member", "CheckOutBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_Member: public Ui_Window_Member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MEMBER_H
