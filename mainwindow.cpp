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
int MainWindow::Writer(QFile *input, QFile* output, int count){
     try{
            for(int i=0;i<count;i++){
                QString data = input->readLine();
                output->write(data.toUtf8());
            }
            return 1;
        }catch(std::exception& e){return 0;}


return 1;}
void MainWindow::on_OK_button_clicked()
{
        QFile file("cr.sh");
        QFile pattern("chroot.sh");
        if (!file.open(QIODevice::WriteOnly ))  return;
        if (!pattern.open(QIODevice::ReadOnly)) return;
        //pattern.write("gffdgfgdg");
        Writer(&pattern,&file,2);

        QString tmp="mount "+ui->lineEdit->text()+" "+ui->lineEdit_2->text()+"\n";
        file.write(tmp.toUtf8());

        Writer(&pattern,&file,2);

        tmp="mount --bind /${I} \""+ui->lineEdit_2->text()+"${I}\" \n done\n";
        file.write(tmp.toUtf8());

        tmp="chroot "+ui->lineEdit->text()+" /bin/bash\n";
        file.write(tmp.toUtf8());

        pattern.close();
        file.close();
        /*QProcess* myProcess = new QProcess(this);
        myProcess->start("kate");//попробуйте так, затем kate
        myProcess->waitForFinished(-1);*/
}
