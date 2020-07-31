/********************************************************************************
** Form generated from reading UI file 'window_returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RETURNBOOK_H
#define UI_WINDOW_RETURNBOOK_H

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

class Ui_Window_ReturnBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_BookId;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_ReturnBook;
    QLineEdit *lineEdit_MemberId;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Window_ReturnBook)
    {
        if (Window_ReturnBook->objectName().isEmpty())
            Window_ReturnBook->setObjectName(QString::fromUtf8("Window_ReturnBook"));
        Window_ReturnBook->resize(673, 529);
        Window_ReturnBook->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 255, 164);"));
        verticalLayout = new QVBoxLayout(Window_ReturnBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_BookId = new QLineEdit(Window_ReturnBook);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_BookId->setFont(font);
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 71, 71,0.8);\n"
"border-color: rgb(255, 71, 71,0.8);"));

        gridLayout->addWidget(lineEdit_BookId, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton_ReturnBook = new QPushButton(Window_ReturnBook);
        pushButton_ReturnBook->setObjectName(QString::fromUtf8("pushButton_ReturnBook"));
        pushButton_ReturnBook->setMaximumSize(QSize(230, 40));
        pushButton_ReturnBook->setFont(font);
        pushButton_ReturnBook->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 170, 95);\n"
"color: rgb(216, 216, 216);"));

        gridLayout->addWidget(pushButton_ReturnBook, 3, 1, 1, 1);

        lineEdit_MemberId = new QLineEdit(Window_ReturnBook);
        lineEdit_MemberId->setObjectName(QString::fromUtf8("lineEdit_MemberId"));
        lineEdit_MemberId->setMaximumSize(QSize(230, 40));
        lineEdit_MemberId->setFont(font);
        lineEdit_MemberId->setStyleSheet(QString::fromUtf8("background-color: rgb(123, 143, 255);\n"
"border-color: rgb(123, 143, 255);"));

        gridLayout->addWidget(lineEdit_MemberId, 1, 1, 1, 1);

        label = new QLabel(Window_ReturnBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/return2.png")));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(Window_ReturnBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Window_ReturnBook);

        QMetaObject::connectSlotsByName(Window_ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReturnBook)
    {
        Window_ReturnBook->setWindowTitle(QCoreApplication::translate("Window_ReturnBook", "Dialog", nullptr));
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_ReturnBook", " Book ID", nullptr));
        pushButton_ReturnBook->setText(QCoreApplication::translate("Window_ReturnBook", "Return Book", nullptr));
        lineEdit_MemberId->setPlaceholderText(QCoreApplication::translate("Window_ReturnBook", " Member ID", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_ReturnBook: public Ui_Window_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RETURNBOOK_H
