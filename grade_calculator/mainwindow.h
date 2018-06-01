#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_spinBox_valueChanged(int arg1);

    void on_dial_7_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_spinBox_2_valueChanged(int arg1);

    void on_dial_2_valueChanged(int value);

    void on_spinBox_3_valueChanged(int arg1);

    void on_dial_5_valueChanged(int value);

    void on_spinBox_5_valueChanged(int arg1);

    void on_dial_3_valueChanged(int value);

    void on_spinBox_4_valueChanged(int arg1);

    void on_dial_4_valueChanged(int value);

    void on_dial_6_valueChanged(int value);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_dial_8_valueChanged(int value);

    void on_spinBox_8_valueChanged(int arg1);

    void on_dial_midterm1_valueChanged(int value);

    void on_spinBox_midterm1_valueChanged(int arg1);

    void on_dial_midterm2_valueChanged(int value);

    void on_spinBox_midterm2_valueChanged(int arg1);

    void on_dial_final_valueChanged(int value);

    void on_spinBox_final_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
