#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Commidity *w1 = new Commidity;
    w1->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    login *w2 = new login;
    w2->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    Sales *w3 = new Sales;
    w3->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_5_clicked()
{
    users *w4 = new users;
    w4->show();
    this->close();
}
