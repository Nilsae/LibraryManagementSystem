/********************************************************************************
** Form generated from reading UI file 'window_reservebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RESERVEBOOK_H
#define UI_WINDOW_RESERVEBOOK_H

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

class Ui_Window_ReserveBook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Author;
    QLineEdit *lineEdit_MemberId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Subject;
    QLineEdit *lineEdit_BookId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_ExpireRentDate;
    QPushButton *pushButton_Reserve;

    void setupUi(QDialog *Window_ReserveBook)
    {
        if (Window_ReserveBook->objectName().isEmpty())
            Window_ReserveBook->setObjectName(QStringLiteral("Window_ReserveBook"));
        Window_ReserveBook->resize(708, 516);
        layoutWidget = new QWidget(Window_ReserveBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 100, 271, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Author = new QLabel(layoutWidget);
        label_Author->setObjectName(QStringLiteral("label_Author"));

        horizontalLayout->addWidget(label_Author);

        lineEdit_MemberId = new QLineEdit(layoutWidget);
        lineEdit_MemberId->setObjectName(QStringLiteral("lineEdit_MemberId"));

        horizontalLayout->addWidget(lineEdit_MemberId);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_2->addWidget(label_Subject);

        lineEdit_BookId = new QLineEdit(layoutWidget);
        lineEdit_BookId->setObjectName(QStringLiteral("lineEdit_BookId"));

        horizontalLayout_2->addWidget(lineEdit_BookId);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_ExpireRentDate = new QLineEdit(layoutWidget);
        lineEdit_ExpireRentDate->setObjectName(QStringLiteral("lineEdit_ExpireRentDate"));

        horizontalLayout_3->addWidget(lineEdit_ExpireRentDate);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_Reserve = new QPushButton(layoutWidget);
        pushButton_Reserve->setObjectName(QStringLiteral("pushButton_Reserve"));

        verticalLayout->addWidget(pushButton_Reserve);


        retranslateUi(Window_ReserveBook);

        QMetaObject::connectSlotsByName(Window_ReserveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReserveBook)
    {
        Window_ReserveBook->setWindowTitle(QApplication::translate("Window_ReserveBook", "Dialog", Q_NULLPTR));
        label_Author->setText(QApplication::translate("Window_ReserveBook", "Memeber ID", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_ReserveBook", "Book ID", Q_NULLPTR));
        label->setText(QApplication::translate("Window_ReserveBook", "ExpireRentDate", Q_NULLPTR));
        pushButton_Reserve->setText(QApplication::translate("Window_ReserveBook", "Reserve", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ReserveBook: public Ui_Window_ReserveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RESERVEBOOK_H
