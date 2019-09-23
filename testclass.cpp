#include "testclass.h"

TestClass::TestClass(QObject *parent): QObject(parent)
{

}



void TestClass::slotRecieveData()
{
    qDebug() << "Get signal from other object";
}
