#include "maxnumber.h"
#include "ui_maxnumber.h"

maxNumber::maxNumber(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maxNumber)
{
    ui->setupUi(this);
}

maxNumber::~maxNumber()
{
    delete ui;
}

void maxNumber::on_pushButton_clicked()
{
    QDialog::reject();
}
