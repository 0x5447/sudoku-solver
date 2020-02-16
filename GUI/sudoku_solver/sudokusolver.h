#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SudokuSolver; }
QT_END_NAMESPACE

class SudokuSolver : public QMainWindow
{
    Q_OBJECT

public:
    SudokuSolver(QWidget *parent = nullptr);
    ~SudokuSolver();

private slots:
    void on_solveButton_clicked();

private:
    Ui::SudokuSolver *ui;
};
#endif // SUDOKUSOLVER_H
