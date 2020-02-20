#include "sudokusolver.h"
#include "ui_sudokusolver.h"

#include "ui_solvedsudoku.h"
#include "solvedsudoku.h"

#include "ui_maxnumber.h"
#include "maxnumber.h"

#include <iostream>
#include <string>
#include <QString>
#include <QDialog>

int numSolved = 0;

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void printGrid(int grid[9][9], int num){
    solvedSudoku dialogue;
    dialogue.showGrid(grid, num);
    dialogue.exec();
}

bool possible(int y, int x, int n, int grid[9][9]){

    // Check if number is in column
    for(int i = 0; i < 9; ++i){
        if(grid[y][i] == n){
            return false;
        }
    }

    // Check if number is in row
    for(int i = 0; i < 9; ++i){
        if(grid[i][x] == n){
            return false;
        }
    }

    // Check current 3x3 grid
    int x0 = ((x / 3) * 3);
    int y0 = ((y / 3) * 3);
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(grid[y0+i][x0+j] == n){
                return false;
            }
        }
    }
    return true;
}

bool solve(int grid[9][9]){
    for(int y = 0; y < 9; ++y){
        for(int x = 0; x < 9; ++x){
            if(grid[y][x] == 0){
                for(int n = 1; n < 10; ++n){
                    if(possible(y, x, n, grid)){
                        grid[y][x] = n;
                        solve(grid);
                        grid[y][x] = 0;
                    }
                }
                return false;
            }
        }
    }
    ++numSolved;
    if(numSolved >= 10){
        maxNumber errDialogue;
        errDialogue.setWindowTitle("LIMIT REACHED");
        errDialogue.exec();
        QApplication::closeAllWindows();
        errDialogue.~maxNumber();
        return false;
    }
    else{
        printGrid(grid, numSolved);
        return true;
    }
}


SudokuSolver::SudokuSolver(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuSolver)
{
    ui->setupUi(this);
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}


void SudokuSolver::on_solveButton_clicked()
{
    numSolved = 0;
    int grid[9][9];
    grid[0][0] = ui->spinBox11->value();
    grid[0][1] = ui->spinBox12->value();
    grid[0][2] = ui->spinBox13->value();
    grid[0][3] = ui->spinBox14->value();
    grid[0][4] = ui->spinBox15->value();
    grid[0][5] = ui->spinBox16->value();
    grid[0][6] = ui->spinBox17->value();
    grid[0][7] = ui->spinBox18->value();
    grid[0][8] = ui->spinBox19->value();

    grid[1][0] = ui->spinBox21->value();
    grid[1][1] = ui->spinBox22->value();
    grid[1][2] = ui->spinBox23->value();
    grid[1][3] = ui->spinBox24->value();
    grid[1][4] = ui->spinBox25->value();
    grid[1][5] = ui->spinBox26->value();
    grid[1][6] = ui->spinBox27->value();
    grid[1][7] = ui->spinBox28->value();
    grid[1][8] = ui->spinBox29->value();

    grid[2][0] = ui->spinBox31->value();
    grid[2][1] = ui->spinBox32->value();
    grid[2][2] = ui->spinBox33->value();
    grid[2][3] = ui->spinBox34->value();
    grid[2][4] = ui->spinBox35->value();
    grid[2][5] = ui->spinBox36->value();
    grid[2][6] = ui->spinBox37->value();
    grid[2][7] = ui->spinBox38->value();
    grid[2][8] = ui->spinBox39->value();

    grid[3][0] = ui->spinBox41->value();
    grid[3][1] = ui->spinBox42->value();
    grid[3][2] = ui->spinBox43->value();
    grid[3][3] = ui->spinBox44->value();
    grid[3][4] = ui->spinBox45->value();
    grid[3][5] = ui->spinBox46->value();
    grid[3][6] = ui->spinBox47->value();
    grid[3][7] = ui->spinBox48->value();
    grid[3][8] = ui->spinBox49->value();

    grid[4][0] = ui->spinBox51->value();
    grid[4][1] = ui->spinBox52->value();
    grid[4][2] = ui->spinBox53->value();
    grid[4][3] = ui->spinBox54->value();
    grid[4][4] = ui->spinBox55->value();
    grid[4][5] = ui->spinBox56->value();
    grid[4][6] = ui->spinBox57->value();
    grid[4][7] = ui->spinBox58->value();
    grid[4][8] = ui->spinBox59->value();

    grid[5][0] = ui->spinBox61->value();
    grid[5][1] = ui->spinBox62->value();
    grid[5][2] = ui->spinBox63->value();
    grid[5][3] = ui->spinBox64->value();
    grid[5][4] = ui->spinBox65->value();
    grid[5][5] = ui->spinBox66->value();
    grid[5][6] = ui->spinBox67->value();
    grid[5][7] = ui->spinBox68->value();
    grid[5][8] = ui->spinBox69->value();

    grid[6][0] = ui->spinBox71->value();
    grid[6][1] = ui->spinBox72->value();
    grid[6][2] = ui->spinBox73->value();
    grid[6][3] = ui->spinBox74->value();
    grid[6][4] = ui->spinBox75->value();
    grid[6][5] = ui->spinBox76->value();
    grid[6][6] = ui->spinBox77->value();
    grid[6][7] = ui->spinBox78->value();
    grid[6][8] = ui->spinBox79->value();

    grid[7][0] = ui->spinBox81->value();
    grid[7][1] = ui->spinBox82->value();
    grid[7][2] = ui->spinBox83->value();
    grid[7][3] = ui->spinBox84->value();
    grid[7][4] = ui->spinBox85->value();
    grid[7][5] = ui->spinBox86->value();
    grid[7][6] = ui->spinBox87->value();
    grid[7][7] = ui->spinBox88->value();
    grid[7][8] = ui->spinBox89->value();

    grid[8][0] = ui->spinBox91->value();
    grid[8][1] = ui->spinBox92->value();
    grid[8][2] = ui->spinBox93->value();
    grid[8][3] = ui->spinBox94->value();
    grid[8][4] = ui->spinBox95->value();
    grid[8][5] = ui->spinBox96->value();
    grid[8][6] = ui->spinBox97->value();
    grid[8][7] = ui->spinBox98->value();
    grid[8][8] = ui->spinBox99->value();

    bool solveStatus = solve(grid);
    if(!solveStatus){
        ui->~SudokuSolver();

    }
}
