/********************************************************************************
** Form generated from reading UI file 'window_cancelmembership.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CANCELMEMBERSHIP_H
#define UI_WINDOW_CANCELMEMBERSHIP_H

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

class Ui_Window_CancelMembership
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_CacnelMembership;
    QLineEdit *lineEdit_Password;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_MemberId;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Window_CancelMembership)
    {
        if (Window_CancelMembership->objectName().isEmpty())
            Window_CancelMembership->setObjectName(QString::fromUtf8("Window_CancelMembership"));
        Window_CancelMembership->resize(527, 479);
        Window_CancelMembership->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 187, 255);"));
        verticalLayout = new QVBoxLayout(Window_CancelMembership);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        pushButton_CacnelMembership = new QPushButton(Window_CancelMembership);
        pushButton_CacnelMembership->setObjectName(QString::fromUtf8("pushButton_CacnelMembership"));
        pushButton_CacnelMembership->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        pushButton_CacnelMembership->setFont(font);
        pushButton_CacnelMembership->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);\n"
"color: rgb(178, 89, 255);"));

        gridLayout->addWidget(pushButton_CacnelMembership, 3, 1, 1, 1);

        lineEdit_Password = new QLineEdit(Window_CancelMembership);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setMaximumSize(QSize(230, 40));
        lineEdit_Password->setFont(font);
        lineEdit_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);"));

        gridLayout->addWidget(lineEdit_Password, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        lineEdit_MemberId = new QLineEdit(Window_CancelMembership);
        lineEdit_MemberId->setObjectName(QString::fromUtf8("lineEdit_MemberId"));
        lineEdit_MemberId->setMaximumSize(QSize(230, 40));
        lineEdit_MemberId->setFont(font);
        lineEdit_MemberId->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);"));

        gridLayout->addWidget(lineEdit_MemberId, 1, 1, 1, 1);

        label = new QLabel(Window_CancelMembership);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 1, 1, 1);

        label_2 = new QLabel(Window_CancelMembership);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/redel.png")));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_CancelMembership);

        QMetaObject::connectSlotsByName(Window_CancelMembership);
    } // setupUi

    void retranslateUi(QDialog *Window_CancelMembership)
    {
        Window_CancelMembership->setWindowTitle(QCoreApplication::translate("Window_CancelMembership", "Dialog", nullptr));
        pushButton_CacnelMembership->setText(QCoreApplication::translate("Window_CancelMembership", "Cancel Membership", nullptr));
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("Window_CancelMembership", "Password", nullptr));
        lineEdit_MemberId->setPlaceholderText(QCoreApplication::translate("Window_CancelMembership", "Member ID", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_CancelMembership: public Ui_Window_CancelMembership {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CANCELMEMBERSHIP_H
