/********************************************************************************
** Form generated from reading UI file 'window_cancelmembership.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CANCELMEMBERSHIP_H
#define UI_WINDOW_CANCELMEMBERSHIP_H

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

class Ui_Window_CancelMembership
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_AccountType;
    QLineEdit *lineEdit_MemberId;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_CacnelMembership;

    void setupUi(QDialog *Window_CancelMembership)
    {
        if (Window_CancelMembership->objectName().isEmpty())
            Window_CancelMembership->setObjectName(QStringLiteral("Window_CancelMembership"));
        Window_CancelMembership->resize(527, 479);
        widget = new QWidget(Window_CancelMembership);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(141, 120, 231, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_AccountType = new QLabel(widget);
        label_AccountType->setObjectName(QStringLiteral("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        lineEdit_MemberId = new QLineEdit(widget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout_3->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(widget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));

        horizontalLayout_4->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_CacnelMembership = new QPushButton(widget);
        pushButton_CacnelMembership->setObjectName(QStringLiteral("pushButton_CacnelMembership"));

        verticalLayout->addWidget(pushButton_CacnelMembership);


        retranslateUi(Window_CancelMembership);

        QMetaObject::connectSlotsByName(Window_CancelMembership);
    } // setupUi

    void retranslateUi(QDialog *Window_CancelMembership)
    {
        Window_CancelMembership->setWindowTitle(QApplication::translate("Window_CancelMembership", "Dialog", Q_NULLPTR));
        label_AccountType->setText(QApplication::translate("Window_CancelMembership", "Member ID", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_CancelMembership", "Password  ", Q_NULLPTR));
        pushButton_CacnelMembership->setText(QApplication::translate("Window_CancelMembership", "CancelMembership", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_CancelMembership: public Ui_Window_CancelMembership {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CANCELMEMBERSHIP_H
