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
    QPushButton *pushButton_ViewAccount;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_MemberId;

    void setupUi(QDialog *Window_ViewAccount)
    {
        if (Window_ViewAccount->objectName().isEmpty())
            Window_ViewAccount->setObjectName(QStringLiteral("Window_ViewAccount"));
        Window_ViewAccount->resize(643, 480);
        pushButton_ViewAccount = new QPushButton(Window_ViewAccount);
        pushButton_ViewAccount->setObjectName(QStringLiteral("pushButton_ViewAccount"));
        pushButton_ViewAccount->setGeometry(QRect(230, 310, 131, 28));
        layoutWidget = new QWidget(Window_ViewAccount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 80, 215, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(layoutWidget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_MemberId = new QLineEdit(layoutWidget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout_4->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Window_ViewAccount);

        QMetaObject::connectSlotsByName(Window_ViewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_ViewAccount)
    {
        Window_ViewAccount->setWindowTitle(QApplication::translate("Window_ViewAccount", "Dialog", Q_NULLPTR));
        pushButton_ViewAccount->setText(QApplication::translate("Window_ViewAccount", "View Account", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_ViewAccount", "Member ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ViewAccount: public Ui_Window_ViewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_VIEWACCOUNT_H
