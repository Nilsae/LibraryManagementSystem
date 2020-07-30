/********************************************************************************
** Form generated from reading UI file 'window_search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_SEARCH_H
#define UI_WINDOW_SEARCH_H

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

class Ui_Window_Search
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QLabel *label;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_ID;
    QPushButton *pushButton_name;
    QPushButton *pushButton_author;
    QPushButton *pushButton_subject;

    void setupUi(QDialog *Window_Search)
    {
        if (Window_Search->objectName().isEmpty())
            Window_Search->setObjectName(QStringLiteral("Window_Search"));
        Window_Search->resize(624, 508);
        layoutWidget = new QWidget(Window_Search);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 271, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(Window_Search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 67, 17));
        lineEdit_BookId = new QLineEdit(Window_Search);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));
        lineEdit_BookId->setGeometry(QRect(100, 50, 181, 25));
        pushButton_ID = new QPushButton(Window_Search);
        pushButton_ID->setObjectName(QStringLiteral("pushButton_ID"));
        pushButton_ID->setGeometry(QRect(320, 50, 89, 25));
        pushButton_name = new QPushButton(Window_Search);
        pushButton_name->setObjectName(QStringLiteral("pushButton_name"));
        pushButton_name->setGeometry(QRect(320, 130, 131, 25));
        pushButton_author = new QPushButton(Window_Search);
        pushButton_author->setObjectName(QStringLiteral("pushButton_author"));
        pushButton_author->setGeometry(QRect(320, 220, 131, 25));
        pushButton_subject = new QPushButton(Window_Search);
        pushButton_subject->setObjectName(QStringLiteral("pushButton_subject"));
        pushButton_subject->setGeometry(QRect(320, 310, 131, 25));

        retranslateUi(Window_Search);

        QMetaObject::connectSlotsByName(Window_Search);
    } // setupUi

    void retranslateUi(QDialog *Window_Search)
    {
        Window_Search->setWindowTitle(QApplication::translate("Window_Search", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_Search", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_Search", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_Search", "Subject", Q_NULLPTR));
        label->setText(QApplication::translate("Window_Search", "Book ID ", Q_NULLPTR));
        pushButton_ID->setText(QApplication::translate("Window_Search", "Search By ID", Q_NULLPTR));
        pushButton_name->setText(QApplication::translate("Window_Search", "Search By Name", Q_NULLPTR));
        pushButton_author->setText(QApplication::translate("Window_Search", "Search By Author", Q_NULLPTR));
        pushButton_subject->setText(QApplication::translate("Window_Search", "Search By Subject", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_Search: public Ui_Window_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_SEARCH_H
