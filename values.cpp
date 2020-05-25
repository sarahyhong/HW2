#include "values.h"
#include "ui_mainwindow.h"

values::values(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::values), //,
    hw1(0),
    hw2(0),
    hw3(0),
    final_project(0),
    midterm(0),
    final_exam(0)

{
    ui->setupUi(this);

    QObject::connect( ui->spinBox_hw1 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw1() )  );
    QObject::connect( ui->spinBox_hw2 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw2() ) );
    QObject::connect( ui->spinBox_hw3 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw3() ) );
    QObject::connect( ui->spinBox_fp ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_final_project() ) );
    QObject::connect( ui->spinBox_m ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_midterm() ) );
    QObject::connect( ui->spinBox_fe ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_final_exam() ) );

    QObject::connect( ui->horizontalSlider_hw1 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw1() )  );
    QObject::connect( ui->spinBox_hw2 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw2() ) );
    QObject::connect( ui->spinBox_hw3 ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_hw3() ) );
    QObject::connect( ui->spinBox_fp ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_final_project() ) );
    QObject::connect( ui->spinBox_m ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_midterm() ) );
    QObject::connect( ui->spinBox_fe ,SIGNAL( valueChanged(int) ),
                      this, SLOT(record_change_final_exam() ) );
 }

values::~values()
{
    delete ui;
}

void values::record_change_hw1(int value)
{
    hw1 = value;
    return;
}

void values::record_change_hw2(int value)
{
    hw2 = value;
    return;
}

void values::record_change_hw3(int value)
{
    hw3 = value;
    return;
}

void values::record_change_final_project(int value)
{
    final_project = value;
    return;
}

void values::record_change_midterm(int value)
{
    midterm = value;
    return;
}

void values::record_change_final_exam(int value)
{
    final_exam = value;
    return;
}

void values::update_grade() const
{
    double hw1_grade = static_cast<double>(hw1);
    double hw2_grade = static_cast<double>(hw2);
    double hw3_grade = static_cast<double>(hw1);
    double fp_grade = static_cast<double>(final_project);
    double m_grade = static_cast<double>(midterm);
    double fe_grade = static_cast<double>(final_exam);
    double grade = 0.15*(hw1_grade+hw2_grade+hw3_grade)
            + 0.25*m_grade + 0.3*fe_grade + 0.35*fp_grade;
    QString text(QString::number(grade));
    ui->label_2->setText(text);
}
