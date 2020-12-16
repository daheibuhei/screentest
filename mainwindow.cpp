#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug()<<QApplication::desktop()->screenGeometry();
    ui->pushButton->setGeometry(0,0,QApplication::desktop()->screenGeometry().width(),QApplication::desktop()->screenGeometry().height());
    ui->pushButton->setStyleSheet("background-color:red");
}

MainWindow::~MainWindow()
{
    delete ui;
}

int a=0;
void MainWindow::on_pushButton_clicked()
{
    if(a==0)
    {
        ui->pushButton->setStyleSheet("background-color:green");
        a=1;
    }
    else if(a==1)
    {
        ui->pushButton->setStyleSheet("background-color:blue");
        a=2;
    }
    else
    {
        exit(0);
    }
}
