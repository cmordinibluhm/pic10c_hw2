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

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space) {
        ui->pushButton_calculate->click();
    }
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

void MainWindow::on_pushButton_calculate_clicked()
{
    double hw_total = 0;
    hw_total = ui->spinBox->value() + ui->spinBox_2->value() + ui->spinBox_3->value() + ui->spinBox_4->value() +
            ui->spinBox_5->value() + ui->spinBox_6->value() + ui->spinBox_7->value() + ui->spinBox_8->value();
    hw_total /= 8; //average the homeworks
    double hw_percent = hw_total * .25;

    //grading scheme A

    double midterm1_percent = ui->spinBox_midterm1->value() * .2;
    double midterm2_percent = ui->spinBox_midterm2->value() * .2;
    double final_percent = ui->spinBox_final->value() * .35;
    double total_a = hw_percent + midterm1_percent + midterm2_percent + final_percent;

    ui->lcdnumber_A->display(total_a);

    //grading scheme B

    double better_midterm = 0;

    if (ui->spinBox_midterm1->value() > ui->spinBox_midterm2->value()) {
        better_midterm = ui->spinBox_midterm1->value();
    } else {
        better_midterm = ui->spinBox_midterm2->value();
    }

    double midterm_percent = better_midterm * .3;
    double final_percent_b = ui->spinBox_final->value() * .44;

    double total_b = hw_percent + midterm_percent + final_percent_b;

    ui->lcdNumber_B->display(total_b);

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{

}

void MainWindow::on_actionPIC_10A_triggered()
{

}
