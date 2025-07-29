#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "l1.h"

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

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    L1 l1;
    l1.setModal(true);
    l1.exec();
}

