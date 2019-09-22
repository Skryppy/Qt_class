#include "mainwindow.h"
#include "my_class.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    My_class my_class;
//    connect(this, SIGNAL(sendData(QString)), my_class, SLOT(recieveData(QString)));



    return a.exec();




}
