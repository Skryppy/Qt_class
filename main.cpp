//#include "mainwindow.h"

#include <QApplication>

#include <QObject>
#include <QtWidgets>

#include "testclass.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MainWindow w;
//    w.show();
//

    QPushButton btn("Click Me");
    TestClass test;
    QObject::connect(&btn, SIGNAL(clicked(bool)), &test, SLOT(slotRecieveData()));

    btn.show();

    return a.exec();
}
