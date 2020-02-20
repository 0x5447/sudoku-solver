/********************************************************************************
** Form generated from reading UI file 'maxnumber.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAXNUMBER_H
#define UI_MAXNUMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_maxNumber
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *maxNumber)
    {
        if (maxNumber->objectName().isEmpty())
            maxNumber->setObjectName(QString::fromUtf8("maxNumber"));
        maxNumber->resize(400, 140);
        label = new QLabel(maxNumber);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 8, 371, 91));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        pushButton = new QPushButton(maxNumber);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 100, 88, 27));

        retranslateUi(maxNumber);

        QMetaObject::connectSlotsByName(maxNumber);
    } // setupUi

    void retranslateUi(QDialog *maxNumber)
    {
        maxNumber->setWindowTitle(QCoreApplication::translate("maxNumber", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("maxNumber", "You have reached the limit to the number of solutions (limited at 10)", nullptr));
        pushButton->setText(QCoreApplication::translate("maxNumber", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maxNumber: public Ui_maxNumber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAXNUMBER_H
