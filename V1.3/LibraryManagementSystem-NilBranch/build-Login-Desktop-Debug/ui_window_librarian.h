/********************************************************************************
** Form generated from reading UI file 'window_librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_LIBRARIAN_H
#define UI_WINDOW_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QPushButton *pushButton_RemoveReservation;
    QPushButton *pushButton_RenewBook;
    QPushButton *pushButton_ReserveBook;
    QPushButton *pushButton_Search;
    QSplitter *splitter;
    QLabel *label_RentedBooks;
    QTableWidget *tableWidget_RentedBooks;
    QPushButton *pushButton_IssueBook;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_AddBook;
    QPushButton *pushButton_RemoveBook;
    QPushButton *pushButton_EditBook;
    QPushButton *pushButton_RegisterNewAccount;
    QPushButton *pushButton_CancelMembership;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Logout;
    QPushButton *pushButton_ViewAccount;
    QPushButton *pushButton_UpdateAccount;

    void setupUi(QDialog *Window_Librarian)
    {
        if (Window_Librarian->objectName().isEmpty())
            Window_Librarian->setObjectName(QStringLiteral("Window_Librarian"));
        Window_Librarian->resize(723, 514);
        layoutWidget = new QWidget(Window_Librarian);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 160, 124, 170));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_ReturnBook = new QPushButton(layoutWidget);
        pushButton_ReturnBook->setObjectName(QStringLiteral("pushButton_ReturnBook"));

        verticalLayout_2->addWidget(pushButton_ReturnBook);

        pushButton_RemoveReservation = new QPushButton(layoutWidget);
        pushButton_RemoveReservation->setObjectName(QStringLiteral("pushButton_RemoveReservation"));

        verticalLayout_2->addWidget(pushButton_RemoveReservation);

        pushButton_RenewBook = new QPushButton(layoutWidget);
        pushButton_RenewBook->setObjectName(QStringLiteral("pushButton_RenewBook"));

        verticalLayout_2->addWidget(pushButton_RenewBook);

        pushButton_ReserveBook = new QPushButton(layoutWidget);
        pushButton_ReserveBook->setObjectName(QStringLiteral("pushButton_ReserveBook"));

        verticalLayout_2->addWidget(pushButton_ReserveBook);

        pushButton_Search = new QPushButton(layoutWidget);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));

        verticalLayout_2->addWidget(pushButton_Search);

        splitter = new QSplitter(Window_Librarian);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(210, 110, 281, 291));
        splitter->setOrientation(Qt::Vertical);
        label_RentedBooks = new QLabel(splitter);
        label_RentedBooks->setObjectName(QStringLiteral("label_RentedBooks"));
        splitter->addWidget(label_RentedBooks);
        tableWidget_RentedBooks = new QTableWidget(splitter);
        if (tableWidget_RentedBooks->columnCount() < 2)
            tableWidget_RentedBooks->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_RentedBooks->setObjectName(QStringLiteral("tableWidget_RentedBooks"));
        splitter->addWidget(tableWidget_RentedBooks);
        pushButton_IssueBook = new QPushButton(Window_Librarian);
        pushButton_IssueBook->setObjectName(QStringLiteral("pushButton_IssueBook"));
        pushButton_IssueBook->setGeometry(QRect(300, 410, 93, 28));
        widget = new QWidget(Window_Librarian);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 160, 134, 170));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_AddBook = new QPushButton(widget);
        pushButton_AddBook->setObjectName(QStringLiteral("pushButton_AddBook"));

        verticalLayout_3->addWidget(pushButton_AddBook);

        pushButton_RemoveBook = new QPushButton(widget);
        pushButton_RemoveBook->setObjectName(QStringLiteral("pushButton_RemoveBook"));

        verticalLayout_3->addWidget(pushButton_RemoveBook);

        pushButton_EditBook = new QPushButton(widget);
        pushButton_EditBook->setObjectName(QStringLiteral("pushButton_EditBook"));

        verticalLayout_3->addWidget(pushButton_EditBook);

        pushButton_RegisterNewAccount = new QPushButton(widget);
        pushButton_RegisterNewAccount->setObjectName(QStringLiteral("pushButton_RegisterNewAccount"));

        verticalLayout_3->addWidget(pushButton_RegisterNewAccount);

        pushButton_CancelMembership = new QPushButton(widget);
        pushButton_CancelMembership->setObjectName(QStringLiteral("pushButton_CancelMembership"));

        verticalLayout_3->addWidget(pushButton_CancelMembership);

        widget1 = new QWidget(Window_Librarian);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(620, 0, 97, 102));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Logout = new QPushButton(widget1);
        pushButton_Logout->setObjectName(QStringLiteral("pushButton_Logout"));

        verticalLayout->addWidget(pushButton_Logout);

        pushButton_ViewAccount = new QPushButton(widget1);
        pushButton_ViewAccount->setObjectName(QStringLiteral("pushButton_ViewAccount"));

        verticalLayout->addWidget(pushButton_ViewAccount);


        verticalLayout_4->addLayout(verticalLayout);

        pushButton_UpdateAccount = new QPushButton(widget1);
        pushButton_UpdateAccount->setObjectName(QStringLiteral("pushButton_UpdateAccount"));

        verticalLayout_4->addWidget(pushButton_UpdateAccount);


        retranslateUi(Window_Librarian);

        QMetaObject::connectSlotsByName(Window_Librarian);
    } // setupUi

    void retranslateUi(QDialog *Window_Librarian)
    {
        Window_Librarian->setWindowTitle(QApplication::translate("Window_Librarian", "Dialog", Q_NULLPTR));
        pushButton_ReturnBook->setText(QApplication::translate("Window_Librarian", "ReturnBook", Q_NULLPTR));
        pushButton_RemoveReservation->setText(QApplication::translate("Window_Librarian", "RemoveReservation", Q_NULLPTR));
        pushButton_RenewBook->setText(QApplication::translate("Window_Librarian", "RenewBook", Q_NULLPTR));
        pushButton_ReserveBook->setText(QApplication::translate("Window_Librarian", "ReserveBook", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("Window_Librarian", "Search", Q_NULLPTR));
        label_RentedBooks->setText(QApplication::translate("Window_Librarian", "             RentedBooks&ReservedBooks", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RentedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_Librarian", "BookName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RentedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_Librarian", "RentedUntil", Q_NULLPTR));
        pushButton_IssueBook->setText(QApplication::translate("Window_Librarian", "IssueBook", Q_NULLPTR));
        pushButton_AddBook->setText(QApplication::translate("Window_Librarian", "AddBook", Q_NULLPTR));
        pushButton_RemoveBook->setText(QApplication::translate("Window_Librarian", "RemoveBook", Q_NULLPTR));
        pushButton_EditBook->setText(QApplication::translate("Window_Librarian", "EditBook", Q_NULLPTR));
        pushButton_RegisterNewAccount->setText(QApplication::translate("Window_Librarian", "RegirsterNewAcoount", Q_NULLPTR));
        pushButton_CancelMembership->setText(QApplication::translate("Window_Librarian", "CancelMembership", Q_NULLPTR));
        pushButton_Logout->setText(QApplication::translate("Window_Librarian", "Logout", Q_NULLPTR));
        pushButton_ViewAccount->setText(QApplication::translate("Window_Librarian", "ViewAccount", Q_NULLPTR));
        pushButton_UpdateAccount->setText(QApplication::translate("Window_Librarian", "UpdateAccount", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_Librarian: public Ui_Window_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_LIBRARIAN_H
