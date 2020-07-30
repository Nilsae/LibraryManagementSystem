/********************************************************************************
** Form generated from reading UI file 'window_updateaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_UPDATEACCOUNT_H
#define UI_WINDOW_UPDATEACCOUNT_H

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

class Ui_Window_UpdateAccount
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_Family;
    QLineEdit *lineEdit_Family;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_DateAdded;
    QLineEdit *lineEdit_DateAdded;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_MemberId;
    QLineEdit *lineEdit_MemberId;
    QPushButton *pushButton_search;
    QPushButton *pushButton_UpdateAccount;

    void setupUi(QDialog *Window_UpdateAccount)
    {
        if (Window_UpdateAccount->objectName().isEmpty())
            Window_UpdateAccount->setObjectName(QStringLiteral("Window_UpdateAccount"));
        Window_UpdateAccount->resize(498, 416);
        layoutWidget = new QWidget(Window_UpdateAccount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 60, 261, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_Name = new QLabel(layoutWidget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_5->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(layoutWidget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_Family = new QLabel(layoutWidget);
        label_Family->setObjectName(QStringLiteral("label_Family"));

        horizontalLayout_6->addWidget(label_Family);

        lineEdit_Family = new QLineEdit(layoutWidget);
        lineEdit_Family->setObjectName(QStringLiteral("lineEdit_Family"));
        lineEdit_Family->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_Family);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_ExpireDate = new QLabel(layoutWidget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_7->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(layoutWidget);
        lineEdit_ExpireDate->setObjectName(QStringLiteral("lineEdit_ExpireDate"));
        lineEdit_ExpireDate->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_DateAdded = new QLabel(layoutWidget);
        label_DateAdded->setObjectName(QStringLiteral("label_DateAdded"));

        horizontalLayout_8->addWidget(label_DateAdded);

        lineEdit_DateAdded = new QLineEdit(layoutWidget);
        lineEdit_DateAdded->setObjectName(QStringLiteral("lineEdit_DateAdded"));
        lineEdit_DateAdded->setReadOnly(false);

        horizontalLayout_8->addWidget(lineEdit_DateAdded);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_MemberId = new QLabel(layoutWidget);
        label_MemberId->setObjectName(QStringLiteral("label_MemberId"));

        horizontalLayout_9->addWidget(label_MemberId);

        lineEdit_MemberId = new QLineEdit(layoutWidget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));
        lineEdit_MemberId->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout_9);

        pushButton_search = new QPushButton(layoutWidget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        verticalLayout->addWidget(pushButton_search);

        pushButton_UpdateAccount = new QPushButton(layoutWidget);
        pushButton_UpdateAccount->setObjectName(QStringLiteral("pushButton_UpdateAccount"));

        verticalLayout->addWidget(pushButton_UpdateAccount);


        retranslateUi(Window_UpdateAccount);

        QMetaObject::connectSlotsByName(Window_UpdateAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_UpdateAccount)
    {
        Window_UpdateAccount->setWindowTitle(QApplication::translate("Window_UpdateAccount", "Dialog", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Window_UpdateAccount", "Name       ", Q_NULLPTR));
        label_Family->setText(QApplication::translate("Window_UpdateAccount", "Family      ", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_UpdateAccount", "ExpireDate", Q_NULLPTR));
        label_DateAdded->setText(QApplication::translate("Window_UpdateAccount", "DateAdded", Q_NULLPTR));
        label_MemberId->setText(QApplication::translate("Window_UpdateAccount", "Member ID", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("Window_UpdateAccount", "search", Q_NULLPTR));
        pushButton_UpdateAccount->setText(QApplication::translate("Window_UpdateAccount", "Update Account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_UpdateAccount: public Ui_Window_UpdateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_UPDATEACCOUNT_H
