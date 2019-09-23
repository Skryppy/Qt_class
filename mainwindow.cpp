#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)    
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), mc, SLOT(recieveData(QString)));
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonSend()
{
    emit sendData(ui->lineEdit->text());
    qDebug () << mc->text;
}

void MainWindow::on_pushButton_2_clicked()
{

}




