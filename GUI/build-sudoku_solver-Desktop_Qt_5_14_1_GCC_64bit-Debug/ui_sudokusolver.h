/********************************************************************************
** Form generated from reading UI file 'sudokusolver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUSOLVER_H
#define UI_SUDOKUSOLVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuSolver
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *grid11;
    QSpinBox *spinBox31;
    QSpinBox *spinBox32;
    QSpinBox *spinBox12;
    QSpinBox *spinBox13;
    QSpinBox *spinBox21;
    QSpinBox *spinBox22;
    QSpinBox *spinBox23;
    QSpinBox *spinBox11;
    QSpinBox *spinBox33;
    QWidget *gridLayoutWidget_2;
    QGridLayout *grid12;
    QSpinBox *spinBox34;
    QSpinBox *spinBox35;
    QSpinBox *spinBox15;
    QSpinBox *spinBox16;
    QSpinBox *spinBox24;
    QSpinBox *spinBox25;
    QSpinBox *spinBox26;
    QSpinBox *spinBox14;
    QSpinBox *spinBox36;
    QWidget *gridLayoutWidget_3;
    QGridLayout *grid13;
    QSpinBox *spinBox29;
    QSpinBox *spinBox37;
    QSpinBox *spinBox17;
    QSpinBox *spinBox38;
    QSpinBox *spinBox27;
    QSpinBox *spinBox19;
    QSpinBox *spinBox28;
    QSpinBox *spinBox39;
    QSpinBox *spinBox18;
    QWidget *gridLayoutWidget_4;
    QGridLayout *grid21;
    QSpinBox *spinBox61;
    QSpinBox *spinBox62;
    QSpinBox *spinBox42;
    QSpinBox *spinBox43;
    QSpinBox *spinBox51;
    QSpinBox *spinBox52;
    QSpinBox *spinBox53;
    QSpinBox *spinBox41;
    QSpinBox *spinBox63;
    QWidget *gridLayoutWidget_5;
    QGridLayout *grid22;
    QSpinBox *spinBox64;
    QSpinBox *spinBox65;
    QSpinBox *spinBox45;
    QSpinBox *spinBox46;
    QSpinBox *spinBox54;
    QSpinBox *spinBox55;
    QSpinBox *spinBox56;
    QSpinBox *spinBox44;
    QSpinBox *spinBox66;
    QWidget *gridLayoutWidget_6;
    QGridLayout *grid23;
    QSpinBox *spinBox67;
    QSpinBox *spinBox68;
    QSpinBox *spinBox48;
    QSpinBox *spinBox49;
    QSpinBox *spinBox57;
    QSpinBox *spinBox58;
    QSpinBox *spinBox59;
    QSpinBox *spinBox47;
    QSpinBox *spinBox69;
    QWidget *gridLayoutWidget_7;
    QGridLayout *grid31;
    QSpinBox *spinBox91;
    QSpinBox *spinBox92;
    QSpinBox *spinBox72;
    QSpinBox *spinBox73;
    QSpinBox *spinBox81;
    QSpinBox *spinBox82;
    QSpinBox *spinBox83;
    QSpinBox *spinBox71;
    QSpinBox *spinBox93;
    QWidget *gridLayoutWidget_8;
    QGridLayout *grid32;
    QSpinBox *spinBox94;
    QSpinBox *spinBox95;
    QSpinBox *spinBox75;
    QSpinBox *spinBox76;
    QSpinBox *spinBox84;
    QSpinBox *spinBox85;
    QSpinBox *spinBox86;
    QSpinBox *spinBox74;
    QSpinBox *spinBox96;
    QWidget *gridLayoutWidget_9;
    QGridLayout *grid33;
    QSpinBox *spinBox97;
    QSpinBox *spinBox79;
    QSpinBox *spinBox99;
    QSpinBox *spinBox98;
    QSpinBox *spinBox88;
    QSpinBox *spinBox89;
    QSpinBox *spinBox87;
    QSpinBox *spinBox77;
    QSpinBox *spinBox78;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *solveButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SudokuSolver)
    {
        if (SudokuSolver->objectName().isEmpty())
            SudokuSolver->setObjectName(QString::fromUtf8("SudokuSolver"));
        SudokuSolver->resize(456, 471);
        centralwidget = new QWidget(SudokuSolver);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 131, 101));
        grid11 = new QGridLayout(gridLayoutWidget);
        grid11->setObjectName(QString::fromUtf8("grid11"));
        grid11->setSizeConstraint(QLayout::SetFixedSize);
        grid11->setContentsMargins(0, 0, 0, 0);
        spinBox31 = new QSpinBox(gridLayoutWidget);
        spinBox31->setObjectName(QString::fromUtf8("spinBox31"));
        spinBox31->setAccelerated(true);
        spinBox31->setMaximum(9);

        grid11->addWidget(spinBox31, 2, 0, 1, 1);

        spinBox32 = new QSpinBox(gridLayoutWidget);
        spinBox32->setObjectName(QString::fromUtf8("spinBox32"));
        spinBox32->setAccelerated(true);
        spinBox32->setMaximum(9);

        grid11->addWidget(spinBox32, 2, 1, 1, 1);

        spinBox12 = new QSpinBox(gridLayoutWidget);
        spinBox12->setObjectName(QString::fromUtf8("spinBox12"));
        spinBox12->setAccelerated(true);
        spinBox12->setMaximum(9);

        grid11->addWidget(spinBox12, 0, 1, 1, 1);

        spinBox13 = new QSpinBox(gridLayoutWidget);
        spinBox13->setObjectName(QString::fromUtf8("spinBox13"));
        spinBox13->setAccelerated(true);
        spinBox13->setMaximum(9);

        grid11->addWidget(spinBox13, 0, 2, 1, 1);

        spinBox21 = new QSpinBox(gridLayoutWidget);
        spinBox21->setObjectName(QString::fromUtf8("spinBox21"));
        spinBox21->setAccelerated(true);
        spinBox21->setMaximum(9);

        grid11->addWidget(spinBox21, 1, 0, 1, 1);

        spinBox22 = new QSpinBox(gridLayoutWidget);
        spinBox22->setObjectName(QString::fromUtf8("spinBox22"));
        spinBox22->setAccelerated(true);
        spinBox22->setMaximum(9);

        grid11->addWidget(spinBox22, 1, 1, 1, 1);

        spinBox23 = new QSpinBox(gridLayoutWidget);
        spinBox23->setObjectName(QString::fromUtf8("spinBox23"));
        spinBox23->setAccelerated(true);
        spinBox23->setMaximum(9);

        grid11->addWidget(spinBox23, 1, 2, 1, 1);

        spinBox11 = new QSpinBox(gridLayoutWidget);
        spinBox11->setObjectName(QString::fromUtf8("spinBox11"));
        spinBox11->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox11->setAccelerated(true);
        spinBox11->setMaximum(9);

        grid11->addWidget(spinBox11, 0, 0, 1, 1);

        spinBox33 = new QSpinBox(gridLayoutWidget);
        spinBox33->setObjectName(QString::fromUtf8("spinBox33"));
        spinBox33->setAccelerated(true);
        spinBox33->setMaximum(9);

        grid11->addWidget(spinBox33, 2, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(160, 10, 131, 101));
        grid12 = new QGridLayout(gridLayoutWidget_2);
        grid12->setObjectName(QString::fromUtf8("grid12"));
        grid12->setSizeConstraint(QLayout::SetFixedSize);
        grid12->setContentsMargins(0, 0, 0, 0);
        spinBox34 = new QSpinBox(gridLayoutWidget_2);
        spinBox34->setObjectName(QString::fromUtf8("spinBox34"));
        spinBox34->setAccelerated(true);
        spinBox34->setMaximum(9);

        grid12->addWidget(spinBox34, 2, 0, 1, 1);

        spinBox35 = new QSpinBox(gridLayoutWidget_2);
        spinBox35->setObjectName(QString::fromUtf8("spinBox35"));
        spinBox35->setAccelerated(true);
        spinBox35->setMaximum(9);

        grid12->addWidget(spinBox35, 2, 1, 1, 1);

        spinBox15 = new QSpinBox(gridLayoutWidget_2);
        spinBox15->setObjectName(QString::fromUtf8("spinBox15"));
        spinBox15->setAccelerated(true);
        spinBox15->setMaximum(9);

        grid12->addWidget(spinBox15, 0, 1, 1, 1);

        spinBox16 = new QSpinBox(gridLayoutWidget_2);
        spinBox16->setObjectName(QString::fromUtf8("spinBox16"));
        spinBox16->setAccelerated(true);
        spinBox16->setMaximum(9);

        grid12->addWidget(spinBox16, 0, 2, 1, 1);

        spinBox24 = new QSpinBox(gridLayoutWidget_2);
        spinBox24->setObjectName(QString::fromUtf8("spinBox24"));
        spinBox24->setAccelerated(true);
        spinBox24->setMaximum(9);

        grid12->addWidget(spinBox24, 1, 0, 1, 1);

        spinBox25 = new QSpinBox(gridLayoutWidget_2);
        spinBox25->setObjectName(QString::fromUtf8("spinBox25"));
        spinBox25->setAccelerated(true);
        spinBox25->setMaximum(9);

        grid12->addWidget(spinBox25, 1, 1, 1, 1);

        spinBox26 = new QSpinBox(gridLayoutWidget_2);
        spinBox26->setObjectName(QString::fromUtf8("spinBox26"));
        spinBox26->setAccelerated(true);
        spinBox26->setMaximum(9);

        grid12->addWidget(spinBox26, 1, 2, 1, 1);

        spinBox14 = new QSpinBox(gridLayoutWidget_2);
        spinBox14->setObjectName(QString::fromUtf8("spinBox14"));
        spinBox14->setAccelerated(true);
        spinBox14->setMaximum(9);

        grid12->addWidget(spinBox14, 0, 0, 1, 1);

        spinBox36 = new QSpinBox(gridLayoutWidget_2);
        spinBox36->setObjectName(QString::fromUtf8("spinBox36"));
        spinBox36->setAccelerated(true);
        spinBox36->setMaximum(9);

        grid12->addWidget(spinBox36, 2, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(310, 10, 131, 101));
        grid13 = new QGridLayout(gridLayoutWidget_3);
        grid13->setObjectName(QString::fromUtf8("grid13"));
        grid13->setSizeConstraint(QLayout::SetFixedSize);
        grid13->setContentsMargins(0, 0, 0, 0);
        spinBox29 = new QSpinBox(gridLayoutWidget_3);
        spinBox29->setObjectName(QString::fromUtf8("spinBox29"));
        spinBox29->setAccelerated(true);
        spinBox29->setMaximum(9);

        grid13->addWidget(spinBox29, 1, 2, 1, 1);

        spinBox37 = new QSpinBox(gridLayoutWidget_3);
        spinBox37->setObjectName(QString::fromUtf8("spinBox37"));
        spinBox37->setAccelerated(true);
        spinBox37->setMaximum(9);

        grid13->addWidget(spinBox37, 2, 0, 1, 1);

        spinBox17 = new QSpinBox(gridLayoutWidget_3);
        spinBox17->setObjectName(QString::fromUtf8("spinBox17"));
        spinBox17->setAccelerated(true);
        spinBox17->setMaximum(9);

        grid13->addWidget(spinBox17, 0, 0, 1, 1);

        spinBox38 = new QSpinBox(gridLayoutWidget_3);
        spinBox38->setObjectName(QString::fromUtf8("spinBox38"));
        spinBox38->setAccelerated(true);
        spinBox38->setMaximum(9);

        grid13->addWidget(spinBox38, 2, 1, 1, 1);

        spinBox27 = new QSpinBox(gridLayoutWidget_3);
        spinBox27->setObjectName(QString::fromUtf8("spinBox27"));
        spinBox27->setAccelerated(true);
        spinBox27->setMaximum(9);

        grid13->addWidget(spinBox27, 1, 0, 1, 1);

        spinBox19 = new QSpinBox(gridLayoutWidget_3);
        spinBox19->setObjectName(QString::fromUtf8("spinBox19"));
        spinBox19->setAccelerated(true);
        spinBox19->setMaximum(9);

        grid13->addWidget(spinBox19, 0, 2, 1, 1);

        spinBox28 = new QSpinBox(gridLayoutWidget_3);
        spinBox28->setObjectName(QString::fromUtf8("spinBox28"));
        spinBox28->setAccelerated(true);
        spinBox28->setMaximum(9);

        grid13->addWidget(spinBox28, 1, 1, 1, 1);

        spinBox39 = new QSpinBox(gridLayoutWidget_3);
        spinBox39->setObjectName(QString::fromUtf8("spinBox39"));
        spinBox39->setAccelerated(true);
        spinBox39->setMaximum(9);

        grid13->addWidget(spinBox39, 2, 2, 1, 1);

        spinBox18 = new QSpinBox(gridLayoutWidget_3);
        spinBox18->setObjectName(QString::fromUtf8("spinBox18"));
        spinBox18->setAccelerated(true);
        spinBox18->setMaximum(9);

        grid13->addWidget(spinBox18, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 140, 131, 101));
        grid21 = new QGridLayout(gridLayoutWidget_4);
        grid21->setObjectName(QString::fromUtf8("grid21"));
        grid21->setSizeConstraint(QLayout::SetFixedSize);
        grid21->setContentsMargins(0, 0, 0, 0);
        spinBox61 = new QSpinBox(gridLayoutWidget_4);
        spinBox61->setObjectName(QString::fromUtf8("spinBox61"));
        spinBox61->setAccelerated(true);
        spinBox61->setMaximum(9);

        grid21->addWidget(spinBox61, 2, 0, 1, 1);

        spinBox62 = new QSpinBox(gridLayoutWidget_4);
        spinBox62->setObjectName(QString::fromUtf8("spinBox62"));
        spinBox62->setAccelerated(true);
        spinBox62->setMaximum(9);

        grid21->addWidget(spinBox62, 2, 1, 1, 1);

        spinBox42 = new QSpinBox(gridLayoutWidget_4);
        spinBox42->setObjectName(QString::fromUtf8("spinBox42"));
        spinBox42->setAccelerated(true);
        spinBox42->setMaximum(9);

        grid21->addWidget(spinBox42, 0, 1, 1, 1);

        spinBox43 = new QSpinBox(gridLayoutWidget_4);
        spinBox43->setObjectName(QString::fromUtf8("spinBox43"));
        spinBox43->setAccelerated(true);
        spinBox43->setMaximum(9);

        grid21->addWidget(spinBox43, 0, 2, 1, 1);

        spinBox51 = new QSpinBox(gridLayoutWidget_4);
        spinBox51->setObjectName(QString::fromUtf8("spinBox51"));
        spinBox51->setAccelerated(true);
        spinBox51->setMaximum(9);

        grid21->addWidget(spinBox51, 1, 0, 1, 1);

        spinBox52 = new QSpinBox(gridLayoutWidget_4);
        spinBox52->setObjectName(QString::fromUtf8("spinBox52"));
        spinBox52->setAccelerated(true);
        spinBox52->setMaximum(9);

        grid21->addWidget(spinBox52, 1, 1, 1, 1);

        spinBox53 = new QSpinBox(gridLayoutWidget_4);
        spinBox53->setObjectName(QString::fromUtf8("spinBox53"));
        spinBox53->setAccelerated(true);
        spinBox53->setMaximum(9);

        grid21->addWidget(spinBox53, 1, 2, 1, 1);

        spinBox41 = new QSpinBox(gridLayoutWidget_4);
        spinBox41->setObjectName(QString::fromUtf8("spinBox41"));
        spinBox41->setAccelerated(true);
        spinBox41->setMaximum(9);

        grid21->addWidget(spinBox41, 0, 0, 1, 1);

        spinBox63 = new QSpinBox(gridLayoutWidget_4);
        spinBox63->setObjectName(QString::fromUtf8("spinBox63"));
        spinBox63->setAccelerated(true);
        spinBox63->setMaximum(9);

        grid21->addWidget(spinBox63, 2, 2, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(160, 140, 131, 101));
        grid22 = new QGridLayout(gridLayoutWidget_5);
        grid22->setObjectName(QString::fromUtf8("grid22"));
        grid22->setSizeConstraint(QLayout::SetFixedSize);
        grid22->setContentsMargins(0, 0, 0, 0);
        spinBox64 = new QSpinBox(gridLayoutWidget_5);
        spinBox64->setObjectName(QString::fromUtf8("spinBox64"));
        spinBox64->setAccelerated(true);
        spinBox64->setMaximum(9);

        grid22->addWidget(spinBox64, 2, 0, 1, 1);

        spinBox65 = new QSpinBox(gridLayoutWidget_5);
        spinBox65->setObjectName(QString::fromUtf8("spinBox65"));
        spinBox65->setAccelerated(true);
        spinBox65->setMaximum(9);

        grid22->addWidget(spinBox65, 2, 1, 1, 1);

        spinBox45 = new QSpinBox(gridLayoutWidget_5);
        spinBox45->setObjectName(QString::fromUtf8("spinBox45"));
        spinBox45->setAccelerated(true);
        spinBox45->setMaximum(9);

        grid22->addWidget(spinBox45, 0, 1, 1, 1);

        spinBox46 = new QSpinBox(gridLayoutWidget_5);
        spinBox46->setObjectName(QString::fromUtf8("spinBox46"));
        spinBox46->setAccelerated(true);
        spinBox46->setMaximum(9);

        grid22->addWidget(spinBox46, 0, 2, 1, 1);

        spinBox54 = new QSpinBox(gridLayoutWidget_5);
        spinBox54->setObjectName(QString::fromUtf8("spinBox54"));
        spinBox54->setAccelerated(true);
        spinBox54->setMaximum(9);

        grid22->addWidget(spinBox54, 1, 0, 1, 1);

        spinBox55 = new QSpinBox(gridLayoutWidget_5);
        spinBox55->setObjectName(QString::fromUtf8("spinBox55"));
        spinBox55->setAccelerated(true);
        spinBox55->setMaximum(9);

        grid22->addWidget(spinBox55, 1, 1, 1, 1);

        spinBox56 = new QSpinBox(gridLayoutWidget_5);
        spinBox56->setObjectName(QString::fromUtf8("spinBox56"));
        spinBox56->setAccelerated(true);
        spinBox56->setMaximum(9);

        grid22->addWidget(spinBox56, 1, 2, 1, 1);

        spinBox44 = new QSpinBox(gridLayoutWidget_5);
        spinBox44->setObjectName(QString::fromUtf8("spinBox44"));
        spinBox44->setAccelerated(true);
        spinBox44->setMaximum(9);

        grid22->addWidget(spinBox44, 0, 0, 1, 1);

        spinBox66 = new QSpinBox(gridLayoutWidget_5);
        spinBox66->setObjectName(QString::fromUtf8("spinBox66"));
        spinBox66->setAccelerated(true);
        spinBox66->setMaximum(9);

        grid22->addWidget(spinBox66, 2, 2, 1, 1);

        gridLayoutWidget_6 = new QWidget(centralwidget);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(310, 140, 131, 101));
        grid23 = new QGridLayout(gridLayoutWidget_6);
        grid23->setObjectName(QString::fromUtf8("grid23"));
        grid23->setSizeConstraint(QLayout::SetFixedSize);
        grid23->setContentsMargins(0, 0, 0, 0);
        spinBox67 = new QSpinBox(gridLayoutWidget_6);
        spinBox67->setObjectName(QString::fromUtf8("spinBox67"));
        spinBox67->setAccelerated(true);
        spinBox67->setMaximum(9);

        grid23->addWidget(spinBox67, 2, 0, 1, 1);

        spinBox68 = new QSpinBox(gridLayoutWidget_6);
        spinBox68->setObjectName(QString::fromUtf8("spinBox68"));
        spinBox68->setAccelerated(true);
        spinBox68->setMaximum(9);

        grid23->addWidget(spinBox68, 2, 1, 1, 1);

        spinBox48 = new QSpinBox(gridLayoutWidget_6);
        spinBox48->setObjectName(QString::fromUtf8("spinBox48"));
        spinBox48->setAccelerated(true);
        spinBox48->setMaximum(9);

        grid23->addWidget(spinBox48, 0, 1, 1, 1);

        spinBox49 = new QSpinBox(gridLayoutWidget_6);
        spinBox49->setObjectName(QString::fromUtf8("spinBox49"));
        spinBox49->setAccelerated(true);
        spinBox49->setMaximum(9);

        grid23->addWidget(spinBox49, 0, 2, 1, 1);

        spinBox57 = new QSpinBox(gridLayoutWidget_6);
        spinBox57->setObjectName(QString::fromUtf8("spinBox57"));
        spinBox57->setAccelerated(true);
        spinBox57->setMaximum(9);

        grid23->addWidget(spinBox57, 1, 0, 1, 1);

        spinBox58 = new QSpinBox(gridLayoutWidget_6);
        spinBox58->setObjectName(QString::fromUtf8("spinBox58"));
        spinBox58->setAccelerated(true);
        spinBox58->setMaximum(9);

        grid23->addWidget(spinBox58, 1, 1, 1, 1);

        spinBox59 = new QSpinBox(gridLayoutWidget_6);
        spinBox59->setObjectName(QString::fromUtf8("spinBox59"));
        spinBox59->setAccelerated(true);
        spinBox59->setMaximum(9);

        grid23->addWidget(spinBox59, 1, 2, 1, 1);

        spinBox47 = new QSpinBox(gridLayoutWidget_6);
        spinBox47->setObjectName(QString::fromUtf8("spinBox47"));
        spinBox47->setAccelerated(true);
        spinBox47->setMaximum(9);

        grid23->addWidget(spinBox47, 0, 0, 1, 1);

        spinBox69 = new QSpinBox(gridLayoutWidget_6);
        spinBox69->setObjectName(QString::fromUtf8("spinBox69"));
        spinBox69->setAccelerated(true);
        spinBox69->setMaximum(9);

        grid23->addWidget(spinBox69, 2, 2, 1, 1);

        gridLayoutWidget_7 = new QWidget(centralwidget);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 270, 131, 101));
        grid31 = new QGridLayout(gridLayoutWidget_7);
        grid31->setObjectName(QString::fromUtf8("grid31"));
        grid31->setSizeConstraint(QLayout::SetFixedSize);
        grid31->setContentsMargins(0, 0, 0, 0);
        spinBox91 = new QSpinBox(gridLayoutWidget_7);
        spinBox91->setObjectName(QString::fromUtf8("spinBox91"));
        spinBox91->setAccelerated(true);
        spinBox91->setMaximum(9);

        grid31->addWidget(spinBox91, 2, 0, 1, 1);

        spinBox92 = new QSpinBox(gridLayoutWidget_7);
        spinBox92->setObjectName(QString::fromUtf8("spinBox92"));
        spinBox92->setAccelerated(true);
        spinBox92->setMaximum(9);

        grid31->addWidget(spinBox92, 2, 1, 1, 1);

        spinBox72 = new QSpinBox(gridLayoutWidget_7);
        spinBox72->setObjectName(QString::fromUtf8("spinBox72"));
        spinBox72->setAccelerated(true);
        spinBox72->setMaximum(9);

        grid31->addWidget(spinBox72, 0, 1, 1, 1);

        spinBox73 = new QSpinBox(gridLayoutWidget_7);
        spinBox73->setObjectName(QString::fromUtf8("spinBox73"));
        spinBox73->setAccelerated(true);
        spinBox73->setMaximum(9);

        grid31->addWidget(spinBox73, 0, 2, 1, 1);

        spinBox81 = new QSpinBox(gridLayoutWidget_7);
        spinBox81->setObjectName(QString::fromUtf8("spinBox81"));
        spinBox81->setAccelerated(true);
        spinBox81->setMaximum(9);

        grid31->addWidget(spinBox81, 1, 0, 1, 1);

        spinBox82 = new QSpinBox(gridLayoutWidget_7);
        spinBox82->setObjectName(QString::fromUtf8("spinBox82"));
        spinBox82->setAccelerated(true);
        spinBox82->setMaximum(9);

        grid31->addWidget(spinBox82, 1, 1, 1, 1);

        spinBox83 = new QSpinBox(gridLayoutWidget_7);
        spinBox83->setObjectName(QString::fromUtf8("spinBox83"));
        spinBox83->setAccelerated(true);
        spinBox83->setMaximum(9);

        grid31->addWidget(spinBox83, 1, 2, 1, 1);

        spinBox71 = new QSpinBox(gridLayoutWidget_7);
        spinBox71->setObjectName(QString::fromUtf8("spinBox71"));
        spinBox71->setAccelerated(true);
        spinBox71->setMaximum(9);

        grid31->addWidget(spinBox71, 0, 0, 1, 1);

        spinBox93 = new QSpinBox(gridLayoutWidget_7);
        spinBox93->setObjectName(QString::fromUtf8("spinBox93"));
        spinBox93->setAccelerated(true);
        spinBox93->setMaximum(9);

        grid31->addWidget(spinBox93, 2, 2, 1, 1);

        gridLayoutWidget_8 = new QWidget(centralwidget);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(160, 270, 131, 101));
        grid32 = new QGridLayout(gridLayoutWidget_8);
        grid32->setObjectName(QString::fromUtf8("grid32"));
        grid32->setSizeConstraint(QLayout::SetFixedSize);
        grid32->setContentsMargins(0, 0, 0, 0);
        spinBox94 = new QSpinBox(gridLayoutWidget_8);
        spinBox94->setObjectName(QString::fromUtf8("spinBox94"));
        spinBox94->setAccelerated(true);
        spinBox94->setMaximum(9);

        grid32->addWidget(spinBox94, 2, 0, 1, 1);

        spinBox95 = new QSpinBox(gridLayoutWidget_8);
        spinBox95->setObjectName(QString::fromUtf8("spinBox95"));
        spinBox95->setAccelerated(true);
        spinBox95->setMaximum(9);

        grid32->addWidget(spinBox95, 2, 1, 1, 1);

        spinBox75 = new QSpinBox(gridLayoutWidget_8);
        spinBox75->setObjectName(QString::fromUtf8("spinBox75"));
        spinBox75->setAccelerated(true);
        spinBox75->setMaximum(9);

        grid32->addWidget(spinBox75, 0, 1, 1, 1);

        spinBox76 = new QSpinBox(gridLayoutWidget_8);
        spinBox76->setObjectName(QString::fromUtf8("spinBox76"));
        spinBox76->setAccelerated(true);
        spinBox76->setMaximum(9);

        grid32->addWidget(spinBox76, 0, 2, 1, 1);

        spinBox84 = new QSpinBox(gridLayoutWidget_8);
        spinBox84->setObjectName(QString::fromUtf8("spinBox84"));
        spinBox84->setAccelerated(true);
        spinBox84->setMaximum(9);

        grid32->addWidget(spinBox84, 1, 0, 1, 1);

        spinBox85 = new QSpinBox(gridLayoutWidget_8);
        spinBox85->setObjectName(QString::fromUtf8("spinBox85"));
        spinBox85->setAccelerated(true);
        spinBox85->setMaximum(9);

        grid32->addWidget(spinBox85, 1, 1, 1, 1);

        spinBox86 = new QSpinBox(gridLayoutWidget_8);
        spinBox86->setObjectName(QString::fromUtf8("spinBox86"));
        spinBox86->setAccelerated(true);
        spinBox86->setMaximum(9);

        grid32->addWidget(spinBox86, 1, 2, 1, 1);

        spinBox74 = new QSpinBox(gridLayoutWidget_8);
        spinBox74->setObjectName(QString::fromUtf8("spinBox74"));
        spinBox74->setAccelerated(true);
        spinBox74->setMaximum(9);

        grid32->addWidget(spinBox74, 0, 0, 1, 1);

        spinBox96 = new QSpinBox(gridLayoutWidget_8);
        spinBox96->setObjectName(QString::fromUtf8("spinBox96"));
        spinBox96->setAccelerated(true);
        spinBox96->setMaximum(9);

        grid32->addWidget(spinBox96, 2, 2, 1, 1);

        gridLayoutWidget_9 = new QWidget(centralwidget);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(310, 270, 131, 101));
        grid33 = new QGridLayout(gridLayoutWidget_9);
        grid33->setObjectName(QString::fromUtf8("grid33"));
        grid33->setSizeConstraint(QLayout::SetFixedSize);
        grid33->setContentsMargins(0, 0, 0, 0);
        spinBox97 = new QSpinBox(gridLayoutWidget_9);
        spinBox97->setObjectName(QString::fromUtf8("spinBox97"));
        spinBox97->setAccelerated(true);
        spinBox97->setMaximum(9);

        grid33->addWidget(spinBox97, 2, 0, 1, 1);

        spinBox79 = new QSpinBox(gridLayoutWidget_9);
        spinBox79->setObjectName(QString::fromUtf8("spinBox79"));
        spinBox79->setAccelerated(true);
        spinBox79->setMaximum(9);

        grid33->addWidget(spinBox79, 0, 2, 1, 1);

        spinBox99 = new QSpinBox(gridLayoutWidget_9);
        spinBox99->setObjectName(QString::fromUtf8("spinBox99"));
        spinBox99->setAccelerated(true);
        spinBox99->setMaximum(9);

        grid33->addWidget(spinBox99, 2, 2, 1, 1);

        spinBox98 = new QSpinBox(gridLayoutWidget_9);
        spinBox98->setObjectName(QString::fromUtf8("spinBox98"));
        spinBox98->setAccelerated(true);
        spinBox98->setMaximum(9);

        grid33->addWidget(spinBox98, 2, 1, 1, 1);

        spinBox88 = new QSpinBox(gridLayoutWidget_9);
        spinBox88->setObjectName(QString::fromUtf8("spinBox88"));
        spinBox88->setAccelerated(true);
        spinBox88->setMaximum(9);

        grid33->addWidget(spinBox88, 1, 1, 1, 1);

        spinBox89 = new QSpinBox(gridLayoutWidget_9);
        spinBox89->setObjectName(QString::fromUtf8("spinBox89"));
        spinBox89->setAccelerated(true);
        spinBox89->setMaximum(9);

        grid33->addWidget(spinBox89, 1, 2, 1, 1);

        spinBox87 = new QSpinBox(gridLayoutWidget_9);
        spinBox87->setObjectName(QString::fromUtf8("spinBox87"));
        spinBox87->setAccelerated(true);
        spinBox87->setMaximum(9);

        grid33->addWidget(spinBox87, 1, 0, 1, 1);

        spinBox77 = new QSpinBox(gridLayoutWidget_9);
        spinBox77->setObjectName(QString::fromUtf8("spinBox77"));
        spinBox77->setAccelerated(true);
        spinBox77->setMaximum(9);

        grid33->addWidget(spinBox77, 0, 0, 1, 1);

        spinBox78 = new QSpinBox(gridLayoutWidget_9);
        spinBox78->setObjectName(QString::fromUtf8("spinBox78"));
        spinBox78->setAccelerated(true);
        spinBox78->setMaximum(9);

        grid33->addWidget(spinBox78, 0, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 10, 20, 361));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(290, 10, 20, 361));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 120, 431, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 250, 431, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 380, 431, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        solveButton = new QPushButton(horizontalLayoutWidget);
        solveButton->setObjectName(QString::fromUtf8("solveButton"));

        horizontalLayout->addWidget(solveButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        SudokuSolver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SudokuSolver);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 456, 24));
        SudokuSolver->setMenuBar(menubar);
        statusbar = new QStatusBar(SudokuSolver);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SudokuSolver->setStatusBar(statusbar);

        retranslateUi(SudokuSolver);

        QMetaObject::connectSlotsByName(SudokuSolver);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuSolver)
    {
        SudokuSolver->setWindowTitle(QCoreApplication::translate("SudokuSolver", "Sudoku Solver", nullptr));
        solveButton->setText(QCoreApplication::translate("SudokuSolver", "Solve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuSolver: public Ui_SudokuSolver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUSOLVER_H
