#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->dial->setValue(arg1);
}
void MainWindow::on_dial_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void MainWindow::on_dial_7_valueChanged(int value)
{
    ui->spinBox_7->setValue(value);
}



void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->dial_2->setValue(arg1);
}

void MainWindow::on_dial_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}
