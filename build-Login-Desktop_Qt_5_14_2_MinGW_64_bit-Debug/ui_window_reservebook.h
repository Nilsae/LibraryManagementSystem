/********************************************************************************
** Form generated from reading UI file 'window_reservebook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RESERVEBOOK_H
#define UI_WINDOW_RESERVEBOOK_H

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

class Ui_Window_ReserveBook
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_Reserve;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_MemberId;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_ExpireRentDate;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Window_ReserveBook)
    {
        if (Window_ReserveBook->objectName().isEmpty())
            Window_ReserveBook->setObjectName(QString::fromUtf8("Window_ReserveBook"));
        Window_ReserveBook->resize(708, 516);
        Window_ReserveBook->setStyleSheet(QString::fromUtf8("background-color: rgb(158, 217, 255);"));
        verticalLayout = new QVBoxLayout(Window_ReserveBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_BookId = new QLineEdit(Window_ReserveBook);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));
        lineEdit_BookId->setMaximumSize(QSize(230, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        lineEdit_BookId->setFont(font);
        lineEdit_BookId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 216, 125);\n"
"color: rgb(53, 151, 255);"));

        gridLayout_2->addWidget(lineEdit_BookId, 2, 1, 1, 1);

        pushButton_Reserve = new QPushButton(Window_ReserveBook);
        pushButton_Reserve->setObjectName(QString::fromUtf8("pushButton_Reserve"));
        pushButton_Reserve->setMaximumSize(QSize(230, 40));
        pushButton_Reserve->setFont(font);
        pushButton_Reserve->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 151, 255);\n"
"color: rgb(255, 216, 125);"));

        gridLayout_2->addWidget(pushButton_Reserve, 5, 1, 1, 1);

        label_2 = new QLabel(Window_ReserveBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 6, 1, 1, 1);

        label_3 = new QLabel(Window_ReserveBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/rent.png")));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        lineEdit_MemberId = new QLineEdit(Window_ReserveBook);
        lineEdit_MemberId->setObjectName(QString::fromUtf8("lineEdit_MemberId"));
        lineEdit_MemberId->setMaximumSize(QSize(230, 40));
        lineEdit_MemberId->setFont(font);
        lineEdit_MemberId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 216, 125);\n"
"color: rgb(53, 151, 255);"));

        gridLayout_2->addWidget(lineEdit_MemberId, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        lineEdit_ExpireRentDate = new QLineEdit(Window_ReserveBook);
        lineEdit_ExpireRentDate->setObjectName(QString::fromUtf8("lineEdit_ExpireRentDate"));
        lineEdit_ExpireRentDate->setMaximumSize(QSize(230, 40));
        lineEdit_ExpireRentDate->setFont(font);
        lineEdit_ExpireRentDate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 216, 125);\n"
"color: rgb(53, 151, 255);"));

        gridLayout_2->addWidget(lineEdit_ExpireRentDate, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Window_ReserveBook);

        QMetaObject::connectSlotsByName(Window_ReserveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReserveBook)
    {
        Window_ReserveBook->setWindowTitle(QCoreApplication::translate("Window_ReserveBook", "Dialog", nullptr));
        lineEdit_BookId->setPlaceholderText(QCoreApplication::translate("Window_ReserveBook", "Book ID", nullptr));
        pushButton_Reserve->setText(QCoreApplication::translate("Window_ReserveBook", "Reserve", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        lineEdit_MemberId->setPlaceholderText(QCoreApplication::translate("Window_ReserveBook", "Memeber ID", nullptr));
        lineEdit_ExpireRentDate->setPlaceholderText(QCoreApplication::translate("Window_ReserveBook", "ExpireRentDate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_ReserveBook: public Ui_Window_ReserveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RESERVEBOOK_H
