/********************************************************************************
** Form generated from reading UI file 'window_registernewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTERNEWACCOUNT_H
#define UI_WINDOW_REGISTERNEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window_RegisterNewAccount
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_ID;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_Family;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton_Register;
    QHBoxLayout *horizontalLayout;
    QLabel *label_AccountType;
    QRadioButton *radioButton_Member;
    QRadioButton *radioButton_Admin;
    QLabel *label_2;
    QLineEdit *lineEdit_ExpireDate;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;

    void setupUi(QDialog *Window_RegisterNewAccount)
    {
        if (Window_RegisterNewAccount->objectName().isEmpty())
            Window_RegisterNewAccount->setObjectName(QString::fromUtf8("Window_RegisterNewAccount"));
        Window_RegisterNewAccount->resize(593, 516);
        Window_RegisterNewAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 187, 255);"));
        verticalLayout_2 = new QVBoxLayout(Window_RegisterNewAccount);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Window_RegisterNewAccount);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lineEdit_ID = new QLineEdit(Window_RegisterNewAccount);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_ID->setFont(font);
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);\n"
"color: rgb(158, 55, 91);"));

        gridLayout->addWidget(lineEdit_ID, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 2, 1, 1);

        lineEdit_Family = new QLineEdit(Window_RegisterNewAccount);
        lineEdit_Family->setObjectName(QString::fromUtf8("lineEdit_Family"));
        lineEdit_Family->setMaximumSize(QSize(230, 40));
        lineEdit_Family->setFont(font);
        lineEdit_Family->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);\n"
"color: rgb(158, 55, 91);"));

        gridLayout->addWidget(lineEdit_Family, 4, 1, 1, 1);

        lineEdit_Password = new QLineEdit(Window_RegisterNewAccount);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setMaximumSize(QSize(230, 40));
        lineEdit_Password->setFont(font);
        lineEdit_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);\n"
"color: rgb(158, 55, 91);"));

        gridLayout->addWidget(lineEdit_Password, 6, 1, 1, 1);

        lineEdit_Name = new QLineEdit(Window_RegisterNewAccount);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);
        lineEdit_Name->setMaximumSize(QSize(230, 40));
        lineEdit_Name->setFont(font);
        lineEdit_Name->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);\n"
"color: rgb(158, 55, 91);"));

        gridLayout->addWidget(lineEdit_Name, 3, 1, 1, 1);

        pushButton_Register = new QPushButton(Window_RegisterNewAccount);
        pushButton_Register->setObjectName(QString::fromUtf8("pushButton_Register"));
        pushButton_Register->setMaximumSize(QSize(230, 40));
        pushButton_Register->setFont(font);
        pushButton_Register->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);\n"
"color: rgb(136, 67, 102);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Addicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Register->setIcon(icon);

        gridLayout->addWidget(pushButton_Register, 8, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_AccountType = new QLabel(Window_RegisterNewAccount);
        label_AccountType->setObjectName(QString::fromUtf8("label_AccountType"));
        label_AccountType->setFont(font);
        label_AccountType->setStyleSheet(QString::fromUtf8("color: rgb(143, 71, 107);"));

        horizontalLayout->addWidget(label_AccountType);

        radioButton_Member = new QRadioButton(Window_RegisterNewAccount);
        radioButton_Member->setObjectName(QString::fromUtf8("radioButton_Member"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        radioButton_Member->setFont(font1);
        radioButton_Member->setStyleSheet(QString::fromUtf8("color: rgb(143, 71, 107);"));

        horizontalLayout->addWidget(radioButton_Member);

        radioButton_Admin = new QRadioButton(Window_RegisterNewAccount);
        radioButton_Admin->setObjectName(QString::fromUtf8("radioButton_Admin"));
        radioButton_Admin->setFont(font1);
        radioButton_Admin->setStyleSheet(QString::fromUtf8("color: rgb(143, 71, 107);"));

        horizontalLayout->addWidget(radioButton_Admin);


        gridLayout->addLayout(horizontalLayout, 7, 1, 1, 1);

        label_2 = new QLabel(Window_RegisterNewAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 9, 1, 1, 1);

        lineEdit_ExpireDate = new QLineEdit(Window_RegisterNewAccount);
        lineEdit_ExpireDate->setObjectName(QString::fromUtf8("lineEdit_ExpireDate"));
        lineEdit_ExpireDate->setMaximumSize(QSize(230, 40));
        lineEdit_ExpireDate->setFont(font);
        lineEdit_ExpireDate->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);\n"
"color: rgb(158, 55, 91);"));

        gridLayout->addWidget(lineEdit_ExpireDate, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        label_3 = new QLabel(Window_RegisterNewAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/newmember.png")));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(Window_RegisterNewAccount);

        QMetaObject::connectSlotsByName(Window_RegisterNewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_RegisterNewAccount)
    {
        Window_RegisterNewAccount->setWindowTitle(QCoreApplication::translate("Window_RegisterNewAccount", "Dialog", nullptr));
        label->setText(QString());
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("Window_RegisterNewAccount", "ID", nullptr));
        lineEdit_Family->setPlaceholderText(QCoreApplication::translate("Window_RegisterNewAccount", "Family", nullptr));
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("Window_RegisterNewAccount", "Password", nullptr));
        lineEdit_Name->setPlaceholderText(QCoreApplication::translate("Window_RegisterNewAccount", "Name", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("Window_RegisterNewAccount", "Register", nullptr));
        label_AccountType->setText(QCoreApplication::translate("Window_RegisterNewAccount", "AcountType", nullptr));
        radioButton_Member->setText(QCoreApplication::translate("Window_RegisterNewAccount", "MEMBER", nullptr));
        radioButton_Admin->setText(QCoreApplication::translate("Window_RegisterNewAccount", "ADMIN", nullptr));
        label_2->setText(QString());
        lineEdit_ExpireDate->setPlaceholderText(QCoreApplication::translate("Window_RegisterNewAccount", "ExpireDate", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_RegisterNewAccount: public Ui_Window_RegisterNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTERNEWACCOUNT_H
