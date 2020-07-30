/********************************************************************************
** Form generated from reading UI file 'window_registernewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTERNEWACCOUNT_H
#define UI_WINDOW_REGISTERNEWACCOUNT_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_RegisterNewAccount
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_ID;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Family;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_AccountType;
    QRadioButton *radioButton_Admin;
    QRadioButton *radioButton_Member;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Register;

    void setupUi(QDialog *Window_RegisterNewAccount)
    {
        if (Window_RegisterNewAccount->objectName().isEmpty())
            Window_RegisterNewAccount->setObjectName(QStringLiteral("Window_RegisterNewAccount"));
        Window_RegisterNewAccount->resize(596, 370);
        label = new QLabel(Window_RegisterNewAccount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 200, 181, 16));
        layoutWidget = new QWidget(Window_RegisterNewAccount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(81, 31, 311, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_ID = new QLineEdit(layoutWidget);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));

        horizontalLayout_6->addWidget(lineEdit_ID);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Family = new QLabel(layoutWidget);
        label_Family->setObjectName(QStringLiteral("label_Family"));

        horizontalLayout->addWidget(label_Family);

        lineEdit_Username = new QLineEdit(layoutWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Name = new QLabel(layoutWidget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_2->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(layoutWidget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_AccountType = new QLabel(layoutWidget);
        label_AccountType->setObjectName(QStringLiteral("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        radioButton_Admin = new QRadioButton(layoutWidget);
        radioButton_Admin->setObjectName(QStringLiteral("radioButton_Admin"));

        horizontalLayout_3->addWidget(radioButton_Admin);

        radioButton_Member = new QRadioButton(layoutWidget);
        radioButton_Member->setObjectName(QStringLiteral("radioButton_Member"));

        horizontalLayout_3->addWidget(radioButton_Member);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(layoutWidget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(layoutWidget);
        lineEdit_ExpireDate->setObjectName(QStringLiteral("lineEdit_ExpireDate"));

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_Password = new QLabel(layoutWidget);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        horizontalLayout_5->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(layoutWidget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));

        horizontalLayout_5->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton_Register = new QPushButton(layoutWidget);
        pushButton_Register->setObjectName(QStringLiteral("pushButton_Register"));

        verticalLayout->addWidget(pushButton_Register);


        retranslateUi(Window_RegisterNewAccount);

        QMetaObject::connectSlotsByName(Window_RegisterNewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_RegisterNewAccount)
    {
        Window_RegisterNewAccount->setWindowTitle(QApplication::translate("Window_RegisterNewAccount", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Window_RegisterNewAccount", "format : yyyy-MM-dd hh:mm:ss", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window_RegisterNewAccount", "ID            ", Q_NULLPTR));
        label_Family->setText(QApplication::translate("Window_RegisterNewAccount", "Username", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Window_RegisterNewAccount", "Name      ", Q_NULLPTR));
        label_AccountType->setText(QApplication::translate("Window_RegisterNewAccount", "AcountType", Q_NULLPTR));
        radioButton_Admin->setText(QApplication::translate("Window_RegisterNewAccount", "ADMIN", Q_NULLPTR));
        radioButton_Member->setText(QApplication::translate("Window_RegisterNewAccount", "MEMBER", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_RegisterNewAccount", "ExpireDate", Q_NULLPTR));
        label_Password->setText(QApplication::translate("Window_RegisterNewAccount", "Password ", Q_NULLPTR));
        pushButton_Register->setText(QApplication::translate("Window_RegisterNewAccount", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_RegisterNewAccount: public Ui_Window_RegisterNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTERNEWACCOUNT_H
