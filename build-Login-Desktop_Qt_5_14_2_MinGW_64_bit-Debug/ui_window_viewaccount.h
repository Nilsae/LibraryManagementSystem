/********************************************************************************
** Form generated from reading UI file 'window_viewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_VIEWACCOUNT_H
#define UI_WINDOW_VIEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window_ViewAccount
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_ViewAccount;
    QLineEdit *lineEdit_MemberId;
    QLabel *label_2;

    void setupUi(QDialog *Window_ViewAccount)
    {
        if (Window_ViewAccount->objectName().isEmpty())
            Window_ViewAccount->setObjectName(QString::fromUtf8("Window_ViewAccount"));
        Window_ViewAccount->resize(643, 480);
        Window_ViewAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(124, 124, 124);"));
        verticalLayout = new QVBoxLayout(Window_ViewAccount);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Window_ViewAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Detective_icon-icons.com_54187.png")));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton_ViewAccount = new QPushButton(Window_ViewAccount);
        pushButton_ViewAccount->setObjectName(QString::fromUtf8("pushButton_ViewAccount"));
        pushButton_ViewAccount->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(11);
        pushButton_ViewAccount->setFont(font);
        pushButton_ViewAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 210, 47);"));

        gridLayout->addWidget(pushButton_ViewAccount, 2, 1, 1, 1);

        lineEdit_MemberId = new QLineEdit(Window_ViewAccount);
        lineEdit_MemberId->setObjectName(QString::fromUtf8("lineEdit_MemberId"));
        lineEdit_MemberId->setMaximumSize(QSize(230, 40));
        lineEdit_MemberId->setFont(font);
        lineEdit_MemberId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(64, 130, 96);"));

        gridLayout->addWidget(lineEdit_MemberId, 1, 1, 1, 1);

        label_2 = new QLabel(Window_ViewAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_ViewAccount);

        QMetaObject::connectSlotsByName(Window_ViewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_ViewAccount)
    {
        Window_ViewAccount->setWindowTitle(QCoreApplication::translate("Window_ViewAccount", "Dialog", nullptr));
        label_3->setText(QString());
        pushButton_ViewAccount->setText(QCoreApplication::translate("Window_ViewAccount", "View Account", nullptr));
        lineEdit_MemberId->setPlaceholderText(QCoreApplication::translate("Window_ViewAccount", " Member ID", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_ViewAccount: public Ui_Window_ViewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_VIEWACCOUNT_H
