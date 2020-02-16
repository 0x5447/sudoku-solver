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

private:
    Ui::solvedSudoku *ui;
};

#endif // SOLVEDSUDOKU_H
