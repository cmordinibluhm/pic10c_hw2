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

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->dial_2->setValue(arg1);
}

void MainWindow::on_dial_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    ui->dial_3->setValue(arg1);
}
void MainWindow::on_dial_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    ui->dial_4->setValue(arg1);
}
void MainWindow::on_dial_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
}

void MainWindow::on_dial_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(value);
}
void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    ui->dial_5->setValue(arg1);
}

void MainWindow::on_dial_6_valueChanged(int value)
{
    ui->spinBox_6->setValue(value);
}
void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    ui->dial_6->setValue(arg1);
}

void MainWindow::on_dial_7_valueChanged(int value)
{
    ui->spinBox_7->setValue(value);
}
void MainWindow::on_spinBox_7_valueChanged(int arg1)
{
    ui->dial_7->setValue(arg1);
}

void MainWindow::on_dial_8_valueChanged(int value)
{
    ui->spinBox_8->setValue(value);
}

void MainWindow::on_spinBox_8_valueChanged(int arg1)
{
    ui->dial_8->setValue(arg1);
}

void MainWindow::on_dial_midterm1_valueChanged(int value)
{
    ui->spinBox_midterm1->setValue(value);
}

void MainWindow::on_spinBox_midterm1_valueChanged(int arg1)
{
    ui->dial_midterm1->setValue(arg1);
}

void MainWindow::on_dial_midterm2_valueChanged(int value)
{
    ui->spinBox_midterm2->setValue(value);
}

void MainWindow::on_spinBox_midterm2_valueChanged(int arg1)
{
    ui->dial_midterm2->setValue(arg1);
}

void MainWindow::on_dial_final_valueChanged(int value)
{
    ui->spinBox_final->setValue(value);
}

void MainWindow::on_spinBox_final_valueChanged(int arg1)
{
    ui->dial_final->setValue(arg1);
}
