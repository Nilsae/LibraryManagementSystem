/********************************************************************************
** Form generated from reading UI file 'window_changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CHANGEPASSWORD_H
#define UI_WINDOW_CHANGEPASSWORD_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_ChangePassword
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_MemberId;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_OldPassword;
    QLineEdit *lineEdit_OldPassword;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_OldPassword2;
    QLineEdit *lineEdit_NewPassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_NewPassword;
    QLineEdit *lineEdit_ConfirmNewPassword;
    QPushButton *pushButton_ChangePassword;

    void setupUi(QDialog *Window_ChangePassword)
    {
        if (Window_ChangePassword->objectName().isEmpty())
            Window_ChangePassword->setObjectName(QStringLiteral("Window_ChangePassword"));
        Window_ChangePassword->resize(497, 371);
        widget = new QWidget(Window_ChangePassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 120, 331, 171));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit_MemberId = new QLineEdit(widget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout_4->addWidget(lineEdit_MemberId);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_OldPassword = new QLabel(widget);
        label_OldPassword->setObjectName(QStringLiteral("label_OldPassword"));

        horizontalLayout->addWidget(label_OldPassword);

        lineEdit_OldPassword = new QLineEdit(widget);
        lineEdit_OldPassword->setObjectName(QStringLiteral("lineEdit_OldPassword"));

        horizontalLayout->addWidget(lineEdit_OldPassword);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_OldPassword2 = new QLabel(widget);
        label_OldPassword2->setObjectName(QStringLiteral("label_OldPassword2"));

        horizontalLayout_2->addWidget(label_OldPassword2);

        lineEdit_NewPassword = new QLineEdit(widget);
        lineEdit_NewPassword->setObjectName(QStringLiteral("lineEdit_NewPassword"));

        horizontalLayout_2->addWidget(lineEdit_NewPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_NewPassword = new QLabel(widget);
        label_NewPassword->setObjectName(QStringLiteral("label_NewPassword"));

        horizontalLayout_3->addWidget(label_NewPassword);

        lineEdit_ConfirmNewPassword = new QLineEdit(widget);
        lineEdit_ConfirmNewPassword->setObjectName(QStringLiteral("lineEdit_ConfirmNewPassword"));

        horizontalLayout_3->addWidget(lineEdit_ConfirmNewPassword);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_ChangePassword = new QPushButton(widget);
        pushButton_ChangePassword->setObjectName(QStringLiteral("pushButton_ChangePassword"));

        verticalLayout->addWidget(pushButton_ChangePassword);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Window_ChangePassword);

        QMetaObject::connectSlotsByName(Window_ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *Window_ChangePassword)
    {
        Window_ChangePassword->setWindowTitle(QApplication::translate("Window_ChangePassword", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Window_ChangePassword", "ID", Q_NULLPTR));
        label_OldPassword->setText(QApplication::translate("Window_ChangePassword", "Old Password             ", Q_NULLPTR));
        label_OldPassword2->setText(QApplication::translate("Window_ChangePassword", "New Pssword             ", Q_NULLPTR));
        label_NewPassword->setText(QApplication::translate("Window_ChangePassword", "Confirm New Password", Q_NULLPTR));
        pushButton_ChangePassword->setText(QApplication::translate("Window_ChangePassword", "Change Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ChangePassword: public Ui_Window_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CHANGEPASSWORD_H
