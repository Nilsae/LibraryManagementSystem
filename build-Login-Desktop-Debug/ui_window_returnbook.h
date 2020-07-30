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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_ReturnBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_MemberId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_ReturnBook;

    void setupUi(QDialog *Window_ReturnBook)
    {
        if (Window_ReturnBook->objectName().isEmpty())
            Window_ReturnBook->setObjectName(QStringLiteral("Window_ReturnBook"));
        Window_ReturnBook->resize(673, 529);
        widget = new QWidget(Window_ReturnBook);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 111, 301, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_MemberId = new QLineEdit(widget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_BookId = new QLineEdit(widget);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));

        horizontalLayout_2->addWidget(lineEdit_BookId);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_ReturnBook = new QPushButton(widget);
        pushButton_ReturnBook->setObjectName(QStringLiteral("pushButton_ReturnBook"));

        verticalLayout->addWidget(pushButton_ReturnBook);


        retranslateUi(Window_ReturnBook);

        QMetaObject::connectSlotsByName(Window_ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReturnBook)
    {
        Window_ReturnBook->setWindowTitle(QApplication::translate("Window_ReturnBook", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Window_ReturnBook", "Member ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window_ReturnBook", "Book ID     ", Q_NULLPTR));
        pushButton_ReturnBook->setText(QApplication::translate("Window_ReturnBook", "Return Book", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ReturnBook: public Ui_Window_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RETURNBOOK_H
