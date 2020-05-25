#ifndef VALUES_H
#define VALUES_H

#include <QWidget>
#include <QString>

namespace Ui {
    class values;
}

class values : public QWidget
{
        Q_OBJECT
    public:
        explicit values(QWidget *parent = 0);
        ~values();
    private slots:
        void record_change_hw1(int value) ;
        void record_change_hw2(int value) ;
        void record_change_hw3(int value) ;
        void record_change_final_project(int value) ;
        void record_change_midterm(int value) ;
        void record_change_final_exam(int value) ;
    private:
        void update_grade() const ;
    private:
        Ui::values *ui;
        int hw1;
        int hw2;
        int hw3;
        int final_project;
        int midterm;
        int final_exam;
};

#endif // VALUES_H
