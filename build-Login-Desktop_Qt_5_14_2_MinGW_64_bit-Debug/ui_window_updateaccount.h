/********************************************************************************
** Form generated from reading UI file 'window_updateaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_UPDATEACCOUNT_H
#define UI_WINDOW_UPDATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_Window_UpdateAccount
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Family;
    QLineEdit *lineEdit_Family;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_AccountType;
    QLineEdit *lineEdit_AccountType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QPushButton *pushButton_UpdateAccount;
    QLabel *label;
    QLineEdit *lineEdit_MemberId;
    QPushButton *pushButton_search;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Window_UpdateAccount)
    {
        if (Window_UpdateAccount->objectName().isEmpty())
            Window_UpdateAccount->setObjectName(QString::fromUtf8("Window_UpdateAccount"));
        Window_UpdateAccount->resize(498, 416);
        layoutWidget = new QWidget(Window_UpdateAccount);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 110, 231, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Name = new QLabel(layoutWidget);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));

        horizontalLayout->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(layoutWidget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Family = new QLabel(layoutWidget);
        label_Family->setObjectName(QString::fromUtf8("label_Family"));

        horizontalLayout_2->addWidget(label_Family);

        lineEdit_Family = new QLineEdit(layoutWidget);
        lineEdit_Family->setObjectName(QString::fromUtf8("lineEdit_Family"));

        horizontalLayout_2->addWidget(lineEdit_Family);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_AccountType = new QLabel(layoutWidget);
        label_AccountType->setObjectName(QString::fromUtf8("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        lineEdit_AccountType = new QLineEdit(layoutWidget);
        lineEdit_AccountType->setObjectName(QString::fromUtf8("lineEdit_AccountType"));

        horizontalLayout_3->addWidget(lineEdit_AccountType);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_ExpireDate = new QLabel(layoutWidget);
        label_ExpireDate->setObjectName(QString::fromUtf8("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(layoutWidget);
        lineEdit_ExpireDate->setObjectName(QString::fromUtf8("lineEdit_ExpireDate"));

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_UpdateAccount = new QPushButton(layoutWidget);
        pushButton_UpdateAccount->setObjectName(QString::fromUtf8("pushButton_UpdateAccount"));

        verticalLayout_2->addWidget(pushButton_UpdateAccount);

        label = new QLabel(Window_UpdateAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 101, 16));
        lineEdit_MemberId = new QLineEdit(Window_UpdateAccount);
        lineEdit_MemberId->setObjectName(QString::fromUtf8("lineEdit_MemberId"));
        lineEdit_MemberId->setGeometry(QRect(200, 20, 191, 25));
        pushButton_search = new QPushButton(Window_UpdateAccount);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(160, 60, 89, 25));
        tableWidget = new QTableWidget(Window_UpdateAccount);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 110, 211, 271));

        retranslateUi(Window_UpdateAccount);

        QMetaObject::connectSlotsByName(Window_UpdateAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_UpdateAccount)
    {
        Window_UpdateAccount->setWindowTitle(QCoreApplication::translate("Window_UpdateAccount", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("Window_UpdateAccount", "Name", nullptr));
        label_Family->setText(QCoreApplication::translate("Window_UpdateAccount", "Family", nullptr));
        label_AccountType->setText(QCoreApplication::translate("Window_UpdateAccount", "AcountType", nullptr));
        label_ExpireDate->setText(QCoreApplication::translate("Window_UpdateAccount", "ExpireDate", nullptr));
        pushButton_UpdateAccount->setText(QCoreApplication::translate("Window_UpdateAccount", "UpdateAccount", nullptr));
        label->setText(QCoreApplication::translate("Window_UpdateAccount", "Member ID", nullptr));
        pushButton_search->setText(QCoreApplication::translate("Window_UpdateAccount", "search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_UpdateAccount: public Ui_Window_UpdateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_UPDATEACCOUNT_H
