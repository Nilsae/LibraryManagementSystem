/********************************************************************************
** Form generated from reading UI file 'window_returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RETURNBOOK_H
#define UI_WINDOW_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Window_ReturnBook
{
public:
    QLineEdit *lineEdit_MemberId;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_ReturnBook;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Window_ReturnBook)
    {
        if (Window_ReturnBook->objectName().isEmpty())
            Window_ReturnBook->setObjectName(QStringLiteral("Window_ReturnBook"));
        Window_ReturnBook->resize(673, 529);
        lineEdit_MemberId = new QLineEdit(Window_ReturnBook);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));
        lineEdit_MemberId->setGeometry(QRect(280, 200, 221, 25));
        lineEdit_BookId = new QLineEdit(Window_ReturnBook);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));
        lineEdit_BookId->setGeometry(QRect(242, 260, 261, 25));
        pushButton_ReturnBook = new QPushButton(Window_ReturnBook);
        pushButton_ReturnBook->setObjectName(QStringLiteral("pushButton_ReturnBook"));
        pushButton_ReturnBook->setGeometry(QRect(120, 310, 391, 25));
        label = new QLabel(Window_ReturnBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 200, 121, 20));
        label_2 = new QLabel(Window_ReturnBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 260, 67, 17));

        retranslateUi(Window_ReturnBook);

        QMetaObject::connectSlotsByName(Window_ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReturnBook)
    {
        Window_ReturnBook->setWindowTitle(QApplication::translate("Window_ReturnBook", "Dialog", Q_NULLPTR));
        pushButton_ReturnBook->setText(QApplication::translate("Window_ReturnBook", "Return Book", Q_NULLPTR));
        label->setText(QApplication::translate("Window_ReturnBook", "Member ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window_ReturnBook", "Book ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ReturnBook: public Ui_Window_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RETURNBOOK_H
