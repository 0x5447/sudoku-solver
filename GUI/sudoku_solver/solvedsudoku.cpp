#include "solvedsudoku.h"
#include "ui_solvedsudoku.h"

#include <QString>

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

void solvedSudoku::on_doneButton_clicked()
{
    QDialog::reject();
}

void solvedSudoku::showGrid(int grid[9][9], int num){
    std::string currentTitle = "Solution ";
    QString finalTitle = QString::fromStdString(currentTitle + std::to_string(num));
    this->setWindowTitle(finalTitle);
    std::string stringGrid[9][9];
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            stringGrid[i][j] = std::to_string(grid[i][j]);
        }
    }

    ui->label11->setText(QString::fromStdString(stringGrid[0][0]));
    ui->label12->setText(QString::fromStdString(stringGrid[0][1]));
    ui->label13->setText(QString::fromStdString(stringGrid[0][2]));
    ui->label14->setText(QString::fromStdString(stringGrid[0][3]));
    ui->label15->setText(QString::fromStdString(stringGrid[0][4]));
    ui->label16->setText(QString::fromStdString(stringGrid[0][5]));
    ui->label17->setText(QString::fromStdString(stringGrid[0][6]));
    ui->label18->setText(QString::fromStdString(stringGrid[0][7]));
    ui->label19->setText(QString::fromStdString(stringGrid[0][8]));

    ui->label21->setText(QString::fromStdString(stringGrid[1][0]));
    ui->label22->setText(QString::fromStdString(stringGrid[1][1]));
    ui->label23->setText(QString::fromStdString(stringGrid[1][2]));
    ui->label24->setText(QString::fromStdString(stringGrid[1][3]));
    ui->label25->setText(QString::fromStdString(stringGrid[1][4]));
    ui->label26->setText(QString::fromStdString(stringGrid[1][5]));
    ui->label27->setText(QString::fromStdString(stringGrid[1][6]));
    ui->label28->setText(QString::fromStdString(stringGrid[1][7]));
    ui->label29->setText(QString::fromStdString(stringGrid[1][8]));

    ui->label31->setText(QString::fromStdString(stringGrid[2][0]));
    ui->label32->setText(QString::fromStdString(stringGrid[2][1]));
    ui->label33->setText(QString::fromStdString(stringGrid[2][2]));
    ui->label34->setText(QString::fromStdString(stringGrid[2][3]));
    ui->label35->setText(QString::fromStdString(stringGrid[2][4]));
    ui->label36->setText(QString::fromStdString(stringGrid[2][5]));
    ui->label37->setText(QString::fromStdString(stringGrid[2][6]));
    ui->label38->setText(QString::fromStdString(stringGrid[2][7]));
    ui->label39->setText(QString::fromStdString(stringGrid[2][8]));

    ui->label41->setText(QString::fromStdString(stringGrid[3][0]));
    ui->label42->setText(QString::fromStdString(stringGrid[3][1]));
    ui->label43->setText(QString::fromStdString(stringGrid[3][2]));
    ui->label44->setText(QString::fromStdString(stringGrid[3][3]));
    ui->label45->setText(QString::fromStdString(stringGrid[3][4]));
    ui->label46->setText(QString::fromStdString(stringGrid[3][5]));
    ui->label47->setText(QString::fromStdString(stringGrid[3][6]));
    ui->label48->setText(QString::fromStdString(stringGrid[3][7]));
    ui->label49->setText(QString::fromStdString(stringGrid[3][8]));

    ui->label51->setText(QString::fromStdString(stringGrid[4][0]));
    ui->label52->setText(QString::fromStdString(stringGrid[4][1]));
    ui->label53->setText(QString::fromStdString(stringGrid[4][2]));
    ui->label54->setText(QString::fromStdString(stringGrid[4][3]));
    ui->label55->setText(QString::fromStdString(stringGrid[4][4]));
    ui->label56->setText(QString::fromStdString(stringGrid[4][5]));
    ui->label57->setText(QString::fromStdString(stringGrid[4][6]));
    ui->label58->setText(QString::fromStdString(stringGrid[4][7]));
    ui->label59->setText(QString::fromStdString(stringGrid[4][8]));

    ui->label61->setText(QString::fromStdString(stringGrid[5][0]));
    ui->label62->setText(QString::fromStdString(stringGrid[5][1]));
    ui->label63->setText(QString::fromStdString(stringGrid[5][2]));
    ui->label64->setText(QString::fromStdString(stringGrid[5][3]));
    ui->label65->setText(QString::fromStdString(stringGrid[5][4]));
    ui->label66->setText(QString::fromStdString(stringGrid[5][5]));
    ui->label67->setText(QString::fromStdString(stringGrid[5][6]));
    ui->label68->setText(QString::fromStdString(stringGrid[5][7]));
    ui->label69->setText(QString::fromStdString(stringGrid[5][8]));

    ui->label71->setText(QString::fromStdString(stringGrid[6][0]));
    ui->label72->setText(QString::fromStdString(stringGrid[6][1]));
    ui->label73->setText(QString::fromStdString(stringGrid[6][2]));
    ui->label74->setText(QString::fromStdString(stringGrid[6][3]));
    ui->label75->setText(QString::fromStdString(stringGrid[6][4]));
    ui->label76->setText(QString::fromStdString(stringGrid[6][5]));
    ui->label77->setText(QString::fromStdString(stringGrid[6][6]));
    ui->label78->setText(QString::fromStdString(stringGrid[6][7]));
    ui->label79->setText(QString::fromStdString(stringGrid[6][8]));

    ui->label81->setText(QString::fromStdString(stringGrid[7][0]));
    ui->label82->setText(QString::fromStdString(stringGrid[7][1]));
    ui->label83->setText(QString::fromStdString(stringGrid[7][2]));
    ui->label84->setText(QString::fromStdString(stringGrid[7][3]));
    ui->label85->setText(QString::fromStdString(stringGrid[7][4]));
    ui->label86->setText(QString::fromStdString(stringGrid[7][5]));
    ui->label87->setText(QString::fromStdString(stringGrid[7][6]));
    ui->label88->setText(QString::fromStdString(stringGrid[7][7]));
    ui->label89->setText(QString::fromStdString(stringGrid[7][8]));

    ui->label91->setText(QString::fromStdString(stringGrid[8][0]));
    ui->label92->setText(QString::fromStdString(stringGrid[8][1]));
    ui->label93->setText(QString::fromStdString(stringGrid[8][2]));
    ui->label94->setText(QString::fromStdString(stringGrid[8][3]));
    ui->label95->setText(QString::fromStdString(stringGrid[8][4]));
    ui->label96->setText(QString::fromStdString(stringGrid[8][5]));
    ui->label97->setText(QString::fromStdString(stringGrid[8][6]));
    ui->label98->setText(QString::fromStdString(stringGrid[8][7]));
    ui->label99->setText(QString::fromStdString(stringGrid[8][8]));
}
