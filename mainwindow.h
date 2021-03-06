#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
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
    void on_pushButton_clicked();

    void on_close_button_clicked();

    void on_OK_button_clicked();
    int  Writer(QFile* input, QFile* output,int count);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
