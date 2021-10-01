#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbAdd_clicked(bool checked)
{
    ui->pbAdd->setChecked(true);
}


void MainWindow::on_pbCancel_clicked(bool checked)
{
    ui->pbCancel->setChecked(true);
}
void MainWindow::on_pbCancel_clicked()
{
    close();
    qApp->quit();
}


void MainWindow::on_pbAdd_clicked()
{
    ui->pbAdd->setText("Welcome To Yoobee");
}
