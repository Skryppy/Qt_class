#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "my_class.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

//namespace Ui { class My_class; }


QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

//    Ui::My_class *my_class;

//    Ui2::My_class *my_class;

    My_class *my_class;

signals:
    sendData(QString str);

private slots:
    void onButtonSend();

//
//    My_class *my_class = new My_class;
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
