#include "solvedsudoku.h"
#include "ui_solvedsudoku.h"

solvedSudoku::solvedSudoku(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solvedSudoku)
{
    ui->setupUi(this);
}

solvedSudoku::~solvedSudoku()
{
    delete ui;
}
