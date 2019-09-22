#include "mainwindow.h"
#include "ui_mainwindow.h"

My_class My_class;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)    
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonSend()));

    my_class = new My_class();

    // соединение сигнала от первого окна со слотом второго окна
    connect(this, SIGNAL(sendData(QString)), my_class, SLOT(recieveData(QString)));
//    connect(this, SIGNAL(sendData(QString)), SLOT(recieveData2(QString))); // нет вызова функции, но форма запускается
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonSend()
{
    emit sendData(ui->lineEdit->text());
}

void MainWindow::on_pushButton_2_clicked()
{
//    QString text = "";
//    My_class my_class;
//    my_class.recieveData(text);
}




