/********************************************************************************
** Form generated from reading UI file 'window_removebook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REMOVEBOOK_H
#define UI_WINDOW_REMOVEBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window_RemoveBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_RemoveBook;
    QLabel *label;

    void setupUi(QDialog *Window_RemoveBook)
    {
        if (Window_RemoveBook->objectName().isEmpty())
            Window_RemoveBook->setObjectName(QString::fromUtf8("Window_RemoveBook"));
        Window_RemoveBook->resize(541, 465);
        Window_RemoveBook->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 187, 255);"));
        verticalLayout = new QVBoxLayout(Window_RemoveBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_3 = new QLabel(Window_RemoveBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/delete.png")));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_2 = new QLabel(Window_RemoveBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        lineEdit_BookId = new QLineEdit(Window_RemoveBook);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_BookId->setFont(font);
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 162, 255);"));

        gridLayout->addWidget(lineEdit_BookId, 2, 1, 1, 1);

        pushButton_RemoveBook = new QPushButton(Window_RemoveBook);
        pushButton_RemoveBook->setObjectName(QString::fromUtf8("pushButton_RemoveBook"));
        pushButton_RemoveBook->setMaximumSize(QSize(230, 40));
        pushButton_RemoveBook->setFont(font);
        pushButton_RemoveBook->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);\n"
"color: rgb(150, 58, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/retrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_RemoveBook->setIcon(icon);

        gridLayout->addWidget(pushButton_RemoveBook, 3, 1, 1, 1);

        label = new QLabel(Window_RemoveBook);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_RemoveBook);

        QMetaObject::connectSlotsByName(Window_RemoveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RemoveBook)
    {
        Window_RemoveBook->setWindowTitle(QCoreApplication::translate("Window_RemoveBook", "Dialog", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_RemoveBook", "book ID", nullptr));
        pushButton_RemoveBook->setText(QCoreApplication::translate("Window_RemoveBook", "Remove", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_RemoveBook: public Ui_Window_RemoveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REMOVEBOOK_H
