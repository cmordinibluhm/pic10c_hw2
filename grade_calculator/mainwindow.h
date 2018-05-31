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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H