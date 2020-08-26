#include "mainwindow.h"

#include <QApplication>

#include <QFile>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setStyleSheet("fusion");
    w.show();
    return a.exec();
}
