/********************************************************************************
** Form generated from reading UI file 'window_librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_LIBRARIAN_H
#define UI_WINDOW_LIBRARIAN_H

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

class Ui_Window_Librarian
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_ReturnBook;
    QPushButton *pushButton_RenewBook;
    QPushButton *pushButton_ReserveBook;
    QPushButton *pushButton_Search;
    QSplitter *splitter;
    QLabel *label_RentedBooks;
    QTableWidget *tableWidget_RentedBooks;
    QPushButton *pushButton_IssueBook;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_AddBook;
    QPushButton *pushButton_RemoveBook;
    QPushButton *pushButton_EditBook;
    QPushButton *pushButton_RegisterNewAccount;
    QPushButton *pushButton_CancelMembership;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Logout;
    QPushButton *pushButton_ViewAccount;
    QPushButton *pushButton_UpdateAccount;

    void setupUi(QDialog *Window_Librarian)
    {
        if (Window_Librarian->objectName().isEmpty())
            Window_Librarian->setObjectName(QString::fromUtf8("Window_Librarian"));
        Window_Librarian->resize(723, 514);
        layoutWidget = new QWidget(Window_Librarian);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 160, 147, 170));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_ReturnBook = new QPushButton(layoutWidget);
        pushButton_ReturnBook->setObjectName(QString::fromUtf8("pushButton_ReturnBook"));

        verticalLayout_2->addWidget(pushButton_ReturnBook);

        pushButton_RenewBook = new QPushButton(layoutWidget);
        pushButton_RenewBook->setObjectName(QString::fromUtf8("pushButton_RenewBook"));

        verticalLayout_2->addWidget(pushButton_RenewBook);

        pushButton_ReserveBook = new QPushButton(layoutWidget);
        pushButton_ReserveBook->setObjectName(QString::fromUtf8("pushButton_ReserveBook"));

        verticalLayout_2->addWidget(pushButton_ReserveBook);

        pushButton_Search = new QPushButton(layoutWidget);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));

        verticalLayout_2->addWidget(pushButton_Search);

        splitter = new QSplitter(Window_Librarian);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(210, 100, 281, 291));
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
        pushButton_IssueBook = new QPushButton(Window_Librarian);
        pushButton_IssueBook->setObjectName(QString::fromUtf8("pushButton_IssueBook"));
        pushButton_IssueBook->setGeometry(QRect(300, 410, 93, 28));
        layoutWidget1 = new QWidget(Window_Librarian);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 160, 162, 170));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_AddBook = new QPushButton(layoutWidget1);
        pushButton_AddBook->setObjectName(QString::fromUtf8("pushButton_AddBook"));

        verticalLayout_3->addWidget(pushButton_AddBook);

        pushButton_RemoveBook = new QPushButton(layoutWidget1);
        pushButton_RemoveBook->setObjectName(QString::fromUtf8("pushButton_RemoveBook"));

        verticalLayout_3->addWidget(pushButton_RemoveBook);

        pushButton_EditBook = new QPushButton(layoutWidget1);
        pushButton_EditBook->setObjectName(QString::fromUtf8("pushButton_EditBook"));

        verticalLayout_3->addWidget(pushButton_EditBook);

        pushButton_RegisterNewAccount = new QPushButton(layoutWidget1);
        pushButton_RegisterNewAccount->setObjectName(QString::fromUtf8("pushButton_RegisterNewAccount"));

        verticalLayout_3->addWidget(pushButton_RegisterNewAccount);

        pushButton_CancelMembership = new QPushButton(layoutWidget1);
        pushButton_CancelMembership->setObjectName(QString::fromUtf8("pushButton_CancelMembership"));

        verticalLayout_3->addWidget(pushButton_CancelMembership);

        layoutWidget2 = new QWidget(Window_Librarian);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(620, 0, 116, 102));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_Logout = new QPushButton(layoutWidget2);
        pushButton_Logout->setObjectName(QString::fromUtf8("pushButton_Logout"));

        verticalLayout->addWidget(pushButton_Logout);

        pushButton_ViewAccount = new QPushButton(layoutWidget2);
        pushButton_ViewAccount->setObjectName(QString::fromUtf8("pushButton_ViewAccount"));

        verticalLayout->addWidget(pushButton_ViewAccount);


        verticalLayout_4->addLayout(verticalLayout);

        pushButton_UpdateAccount = new QPushButton(layoutWidget2);
        pushButton_UpdateAccount->setObjectName(QString::fromUtf8("pushButton_UpdateAccount"));

        verticalLayout_4->addWidget(pushButton_UpdateAccount);


        retranslateUi(Window_Librarian);

        QMetaObject::connectSlotsByName(Window_Librarian);
    } // setupUi

    void retranslateUi(QDialog *Window_Librarian)
    {
        Window_Librarian->setWindowTitle(QCoreApplication::translate("Window_Librarian", "Dialog", nullptr));
        pushButton_ReturnBook->setText(QCoreApplication::translate("Window_Librarian", "ReturnBook", nullptr));
        pushButton_RenewBook->setText(QCoreApplication::translate("Window_Librarian", "RenewBook", nullptr));
        pushButton_ReserveBook->setText(QCoreApplication::translate("Window_Librarian", "Rent Book", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("Window_Librarian", "Search", nullptr));
        label_RentedBooks->setText(QCoreApplication::translate("Window_Librarian", "             RentedBooks&ReservedBooks", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RentedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Window_Librarian", "BookName", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RentedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Window_Librarian", "RentedUntil", nullptr));
        pushButton_IssueBook->setText(QCoreApplication::translate("Window_Librarian", "IssueBook", nullptr));
        pushButton_AddBook->setText(QCoreApplication::translate("Window_Librarian", "AddBook", nullptr));
        pushButton_RemoveBook->setText(QCoreApplication::translate("Window_Librarian", "RemoveBook", nullptr));
        pushButton_EditBook->setText(QCoreApplication::translate("Window_Librarian", "EditBook", nullptr));
        pushButton_RegisterNewAccount->setText(QCoreApplication::translate("Window_Librarian", "RegirsterNewAcoount", nullptr));
        pushButton_CancelMembership->setText(QCoreApplication::translate("Window_Librarian", "CancelMembership", nullptr));
        pushButton_Logout->setText(QCoreApplication::translate("Window_Librarian", "Logout", nullptr));
        pushButton_ViewAccount->setText(QCoreApplication::translate("Window_Librarian", "ViewAccount", nullptr));
        pushButton_UpdateAccount->setText(QCoreApplication::translate("Window_Librarian", "UpdateAccount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_Librarian: public Ui_Window_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_LIBRARIAN_H
