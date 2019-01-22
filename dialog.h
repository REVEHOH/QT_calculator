#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

#define PI 3.1415926

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void set_flag(int f);    //set value of flag
    int get_flag(); //get value of falg
    void set_result(double r);  //get value of flag
    double get_result();    //get value of reslut
    int get_divider();    //get value of divider
    void set_divider(int d);//get value of reslut
    QString clear_endwith_zero(QString str);//clear end with 0
    ~Dialog();

private slots:
    void on_pushButton_13_clicked();//0
    void on_pushButton_clicked();//1
    void on_pushButton_18_clicked();//2
    //input 3
    void on_pushButton_19_clicked();
    //input 4
    void on_pushButton_17_clicked();
    //input 5
    void on_pushButton_16_clicked();
    //input 6
    void on_pushButton_14_clicked();
    //input 7
    void on_pushButton_22_clicked();
    //input 8
    void on_pushButton_24_clicked();
    //input 9
    void on_pushButton_9_clicked();
    //+
    void on_pushButton_20_clicked();
    //*
    void on_pushButton_8_clicked();
    // /
    void on_pushButton_12_clicked();
    //-
    void on_pushButton_15_clicked();
    //=
    void on_pushButton_27_clicked();
    // .
    void on_pushButton_26_clicked();
    // ←
    void on_pushButton_11_clicked();
    // C
    void on_pushButton_10_clicked();
    //√
    void on_pushButton_2_clicked();
    //x²
    void on_pushButton_3_clicked();
    //1/x
    void on_pushButton_4_clicked();
    //
    void on_pushButton_23_clicked();
    //PI
    void on_pushButton_21_clicked();
    //x³
    void on_pushButton_6_clicked();

private:
    Ui::Dialog *ui;
    int flag;   //0:label -> text: reslut 1: other
    double result;  //result of calcuator
    int divider;    //1:x/y - > y = 0 ; 0 : y!= 0;
};

#endif // DIALOG_H
