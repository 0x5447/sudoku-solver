#ifndef MAXNUMBER_H
#define MAXNUMBER_H

#include <QDialog>

namespace Ui {
class maxNumber;
}

class maxNumber : public QDialog
{
    Q_OBJECT

public:
    explicit maxNumber(QWidget *parent = nullptr);
    ~maxNumber();

private slots:
    void on_pushButton_clicked();

private:
    Ui::maxNumber *ui;
};

#endif // MAXNUMBER_H
