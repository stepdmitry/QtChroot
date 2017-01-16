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
/*int MainWindow::Writer(QFile *input, QFile* output, int count)
{   /*try{*//*char* data;
        for(int i=0;i<count;i++){

            //input->readLine(data);
            //file->output(data);
        }
        return 1;
    //}catch(Exception e){return 0;}
}*/

void MainWindow::on_OK_button_clicked()
{
    /*QFile file("cr.sh");
    QFile pattern("chroot.sh");
    if (!file.open(QIODevice::ReadOnly ))    return;
    if (!pattern.open(QIODevice::WriteOnly)) return;
    Writer(&pattern,&file,2);
    pattern.close();
    file.close();*/
        /*QProcess* myProcess = new QProcess(this);
        myProcess->start("kate");//попробуйте так, затем kate
        myProcess->waitForFinished(-1);*/
}
