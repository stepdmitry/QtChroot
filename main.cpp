#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //QPushButton pushButton("Quit");
    //QObject::connect(&pushButton, SIGNAL(clicked()), &a, SLOT(quit()));
    return a.exec();
}
