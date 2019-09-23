#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <QMainWindow>
#include <QObject>

class My_class : public QObject
{
    Q_OBJECT

public:
    My_class();
    QString text;

public slots:
    void recieveData(QString str);

};

#endif // MY_CLASS_H
