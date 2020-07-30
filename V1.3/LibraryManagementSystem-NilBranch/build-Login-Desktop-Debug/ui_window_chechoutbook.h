/********************************************************************************
** Form generated from reading UI file 'window_chechoutbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_CHECHOUTBOOK_H
#define UI_WINDOW_CHECHOUTBOOK_H

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

class Ui_Window_ChechOutBook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_CheckOut;

    void setupUi(QDialog *Window_ChechOutBook)
    {
        if (Window_ChechOutBook->objectName().isEmpty())
            Window_ChechOutBook->setObjectName(QStringLiteral("Window_ChechOutBook"));
        Window_ChechOutBook->resize(479, 429);
        layoutWidget = new QWidget(Window_ChechOutBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 100, 271, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout_5->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout_5->addWidget(lineEdit_BookName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_6->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_6->addWidget(lineEdit_AuthorName);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_7->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_7->addWidget(lineEdit_Subject);


        verticalLayout_2->addLayout(horizontalLayout_7);

        pushButton_CheckOut = new QPushButton(layoutWidget);
        pushButton_CheckOut->setObjectName(QStringLiteral("pushButton_CheckOut"));

        verticalLayout_2->addWidget(pushButton_CheckOut);


        retranslateUi(Window_ChechOutBook);

        QMetaObject::connectSlotsByName(Window_ChechOutBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ChechOutBook)
    {
        Window_ChechOutBook->setWindowTitle(QApplication::translate("Window_ChechOutBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_ChechOutBook", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_ChechOutBook", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_ChechOutBook", "Subject", Q_NULLPTR));
        pushButton_CheckOut->setText(QApplication::translate("Window_ChechOutBook", "ChechOut", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ChechOutBook: public Ui_Window_ChechOutBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_CHECHOUTBOOK_H
