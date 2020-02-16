#ifndef SOLVEDSUDOKU_H
#define SOLVEDSUDOKU_H

#include <QDialog>

namespace Ui {
class solvedSudoku;
}

class solvedSudoku : public QDialog
{
    Q_OBJECT

public:
    explicit solvedSudoku(QWidget *parent = nullptr);
    ~solvedSudoku();
    void showGrid(int grid[9][9], int num);

private slots:
    void on_doneButton_clicked();

private:
    Ui::solvedSudoku *ui;
};

#endif // SOLVEDSUDOKU_H
