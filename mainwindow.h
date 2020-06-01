#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
    public slots:
        void record_change_hw1(int value) ;
        void record_change_hw2(int value) ;
        void record_change_hw3(int value) ;
        void record_change_final_project(int value) ;
        void record_change_midterm(int value) ;
        void record_change_final_exam(int value) ;
    private:
        void compute_grade() const ;
    private:
        Ui::MainWindow *ui;
        int hw1;
        int hw2;
        int hw3;
        int final_project;
        int midterm;
        int final_exam;
};
#endif // MAINWINDOW_H

