#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
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

void MainWindow::on_close_button_clicked()
{
    this->close();
}

void MainWindow::on_OK_button_clicked()
{
        QProcess* myProcess = new QProcess(this);
        myProcess->start("kate");//попробуйте так, затем kate
        myProcess->waitForFinished(-1);
}
