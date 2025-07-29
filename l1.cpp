#include "l1.h"
#include "ui_l1.h"

L1::L1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::L1)
{
    ui->setupUi(this);
}

L1::~L1()
{
    delete ui;
}
