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
    QPushButton *pushButton_CacnelMembership;

    void setupUi(QDialog *Window_CancelMembership)
    {
        if (Window_CancelMembership->objectName().isEmpty())
            Window_CancelMembership->setObjectName(QStringLiteral("Window_CancelMembership"));
        Window_CancelMembership->resize(527, 479);
        widget = new QWidget(Window_CancelMembership);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 100, 241, 251));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Name = new QLabel(widget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Family = new QLabel(widget);
        label_Family->setObjectName(QStringLiteral("label_Family"));

        horizontalLayout_2->addWidget(label_Family);

        lineEdit_Family = new QLineEdit(widget);
        lineEdit_Family->setObjectName(QStringLiteral("lineEdit_Family"));

        horizontalLayout_2->addWidget(lineEdit_Family);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_AccountType = new QLabel(widget);
        label_AccountType->setObjectName(QStringLiteral("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        lineEdit_AccountType = new QLineEdit(widget);
        lineEdit_AccountType->setObjectName(QStringLiteral("lineEdit_AccountType"));

        horizontalLayout_3->addWidget(lineEdit_AccountType);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(widget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(widget);
        lineEdit_ExpireDate->setObjectName(QStringLiteral("lineEdit_ExpireDate"));

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_CacnelMembership = new QPushButton(widget);
        pushButton_CacnelMembership->setObjectName(QStringLiteral("pushButton_CacnelMembership"));

        verticalLayout_2->addWidget(pushButton_CacnelMembership);


        retranslateUi(Window_CancelMembership);

        QMetaObject::connectSlotsByName(Window_CancelMembership);
    } // setupUi

    void retranslateUi(QDialog *Window_CancelMembership)
    {
        Window_CancelMembership->setWindowTitle(QApplication::translate("Window_CancelMembership", "Dialog", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Window_CancelMembership", "Name", Q_NULLPTR));
        label_Family->setText(QApplication::translate("Window_CancelMembership", "Family", Q_NULLPTR));
        label_AccountType->setText(QApplication::translate("Window_CancelMembership", "AcountType", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_CancelMembership", "ExpireDate", Q_NULLPTR));
        pushButton_CacnelMembership->setText(QApplication::translate("Window_CancelMembership", "CancelMembership", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_CancelMembership: public Ui_Window_CancelMembership {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CANCELMEMBERSHIP_H
