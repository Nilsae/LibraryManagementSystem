/********************************************************************************
** Form generated from reading UI file 'window_viewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_VIEWACCOUNT_H
#define UI_WINDOW_VIEWACCOUNT_H

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

class Ui_Window_ViewAccount
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_AccountType;
    QLineEdit *lineEdit_AccountType;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_DateAdded;
    QLineEdit *lineEdit_DateAdded;
    QHBoxLayout *horizontalLayout;
    QLabel *label_MemberId;
    QLineEdit *lineEdit_MemberId;
    QPushButton *pushButton_ViewAccount;

    void setupUi(QDialog *Window_ViewAccount)
    {
        if (Window_ViewAccount->objectName().isEmpty())
            Window_ViewAccount->setObjectName(QStringLiteral("Window_ViewAccount"));
        Window_ViewAccount->resize(643, 480);
        widget = new QWidget(Window_ViewAccount);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(161, 43, 281, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Name = new QLabel(widget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_2->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Username = new QLabel(widget);
        label_Username->setObjectName(QStringLiteral("label_Username"));

        horizontalLayout_3->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(widget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(widget);
        lineEdit_ExpireDate->setObjectName(QStringLiteral("lineEdit_ExpireDate"));
        lineEdit_ExpireDate->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_AccountType = new QLabel(widget);
        label_AccountType->setObjectName(QStringLiteral("label_AccountType"));

        horizontalLayout_6->addWidget(label_AccountType);

        lineEdit_AccountType = new QLineEdit(widget);
        lineEdit_AccountType->setObjectName(QStringLiteral("lineEdit_AccountType"));

        horizontalLayout_6->addWidget(lineEdit_AccountType);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_DateAdded = new QLabel(widget);
        label_DateAdded->setObjectName(QStringLiteral("label_DateAdded"));

        horizontalLayout_5->addWidget(label_DateAdded);

        lineEdit_DateAdded = new QLineEdit(widget);
        lineEdit_DateAdded->setObjectName(QStringLiteral("lineEdit_DateAdded"));
        lineEdit_DateAdded->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_DateAdded);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_MemberId = new QLabel(widget);
        label_MemberId->setObjectName(QStringLiteral("label_MemberId"));

        horizontalLayout->addWidget(label_MemberId);

        lineEdit_MemberId = new QLineEdit(widget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_ViewAccount = new QPushButton(widget);
        pushButton_ViewAccount->setObjectName(QStringLiteral("pushButton_ViewAccount"));

        verticalLayout->addWidget(pushButton_ViewAccount);


        retranslateUi(Window_ViewAccount);

        QMetaObject::connectSlotsByName(Window_ViewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_ViewAccount)
    {
        Window_ViewAccount->setWindowTitle(QApplication::translate("Window_ViewAccount", "Dialog", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Window_ViewAccount", "Name       ", Q_NULLPTR));
        label_Username->setText(QApplication::translate("Window_ViewAccount", "Username", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_ViewAccount", "ExpireDate", Q_NULLPTR));
        label_AccountType->setText(QApplication::translate("Window_ViewAccount", "AccountType", Q_NULLPTR));
        label_DateAdded->setText(QApplication::translate("Window_ViewAccount", "DateAdded", Q_NULLPTR));
        label_MemberId->setText(QApplication::translate("Window_ViewAccount", "Member ID", Q_NULLPTR));
        pushButton_ViewAccount->setText(QApplication::translate("Window_ViewAccount", "View Account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ViewAccount: public Ui_Window_ViewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_VIEWACCOUNT_H
