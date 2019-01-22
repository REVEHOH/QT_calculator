#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::set_flag(int f)    //set value to flag
{
    flag = f;
}

int Dialog::get_flag()
{
    return flag;
}

void Dialog::set_result(double r)
{
    result = r;
}

double Dialog::get_result()
{
    return result;
}

void Dialog::set_divider(int d)
{
    divider = d;
}

int Dialog::get_divider()
{
    return divider;
}
QString Dialog::clear_endwith_zero(QString str)
{
    bool ok;
    if(str.contains("."&& str.section(".",1,1).toInt(&ok,10) == 0))//A.000 ->output A
    {
        str = str.section(".", 0, 0);
    }
    else if(str.contains(".") && str.section(".",1,1).toInt(&ok,10)!= 0)
    {
        while(str.endsWith("0"))
        {
            str = str.left(str.length() - 1);
        }
    }
    return  str;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_13_clicked()//0
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
             ui->label->setText("0");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("0");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"0");//set string to label && append
                set_flag(1);
    }
}


void Dialog::on_pushButton_clicked()//1
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("1");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("1");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"1");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_18_clicked()//2
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 2;
        {
           ui->label->setText("2");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("2");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"2");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_19_clicked()//3
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("3");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("3");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"3");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_17_clicked()//4
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("4");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("4");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"4");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_16_clicked()//5
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("5");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("5");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"5");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_14_clicked()//6
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("6");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("6");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"6");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_22_clicked()//7
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("7");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("7");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"7");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_24_clicked()//8
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("8");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("8");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"8");//set string to label && append
        set_flag(1);
    }
}

void Dialog::on_pushButton_9_clicked()//9
{
    if(get_divider() == 0)
    {
        if(ui->label->text() == "0")   //label string is 0, set 0;
        {
           ui->label->setText("9");
        }
        if(ui->label->text() !="0" && get_flag () == 0)
                ui->label->setText("9");
        else if(ui->label->text()!="0"&&get_flag()!=0)//get string from label !=0 && >first get result
                    ui->label->setText(ui->label->text()+"9");//set string to label && append
                set_flag(1);
    }
}

void Dialog::on_pushButton_20_clicked()//+
{
    bool ok;
        QString str=ui->label->text();
        str=clear_endwith_zero(str);
        QString str1=ui->label_2->text();
        if(get_divider()==0)        // x/y  y!=0
        {
            if(str1==NULL)      //label_2 empty,result=label,label_2=label+"+"
            {
                if(str.endsWith("."))
                    str=str.left(str.length()-1);
                ui->label_2->setText(str+"+");
                set_result(str.toDouble(&ok));
                QString str2;
                str2.sprintf("%18lf",get_result());    //double to string
                str2=clear_endwith_zero(str2);         //clear end with 0
                ui->label->setText(str2);
            }
            else if(str1!=NULL&&str1.endsWith("+"))//label_2 unempty,end with "+"
            {
                if(get_flag()!=0)       //label isn't result,add
                {
                    QString str2=str1+str;
                    ui->label_2->setText(str2+"+");
                    set_result(get_result()+str.toDouble(&ok));
                    str2.sprintf("%18lf",get_result());    //double to string
                    str2=clear_endwith_zero(str2);         //clear end with 0
                    ui->label->setText(str2);
                }
            }
            else if(str1!=NULL&&(str1.endsWith("-")||str1.endsWith("*")
                ||str1.endsWith("/")))  //label_2 unempty,end with "-*/"
            {
                if(get_flag()==0)       //label is result,"+"replace "-*/"
                {
                    ui->label_2->setText(str1.left(str1.length()-1)+"+");
                }
                else                    //- or * or / first
                {
                    if(str1.endsWith("-"))//label_2=label_2+label+"+" ; label=result-label
                    {
                        ui->label_2->setText(str1+str+"+");
                        set_result(get_result()-str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("*"))//label_2=label_2+label+"+" ; label=result*label
                    {
                        ui->label_2->setText(str1+str+"+");
                        set_result(get_result()*str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("/"))//label_2=label_2+label+"+" ; label=result/label
                    {
                        ui->label_2->setText(str1+str+"+");
                        if(ui->label->text()!="0")      // x/y  y!=0
                        {
                            set_result(get_result()/str.toDouble(&ok));
                            QString str2;
                            str2.sprintf("%18lf",get_result());    //double to string
                            str2=clear_endwith_zero(str2);         //clear end with 0
                            ui->label->setText(str2);
                        }
                        else      // x/y  y=0
                        {
                            ui->label->setText("除数不能为零");
                            set_divider(1);
                        }
                    }
                }
            }
        }
        set_flag(0);

}

void Dialog::on_pushButton_8_clicked()//*
{
    bool ok;
        QString str=ui->label->text();
        str=clear_endwith_zero(str);
        QString str1=ui->label_2->text();
        if(get_divider()==0)        // x/y  y!=0
        {
            if(str1 == NULL)      //label_2 empty,result=label,label_2=label+"+"
            {
                if(str.endsWith("."))
                    str=str.left(str.length()-1);
                ui->label_2->setText(str+"*");
                set_result(str.toDouble(&ok));
                QString str2;
                str2.sprintf("%18lf",get_result());    //double to string
                str2=clear_endwith_zero(str2);         //clear end with 0
                ui->label->setText(str2);
            }
            else if(str1!=NULL&&str1.endsWith("*"))//label_2 unempty,end with "+"
            {
                if(get_flag() != 0)       //label isn't result,add
                {
                    QString str2=str1 + str;
                    ui->label_2->setText(str2+"*");
                    set_result(get_result() * str.toDouble(&ok));
                    str2.sprintf("%18lf",get_result());    //double to string
                    str2=clear_endwith_zero(str2);         //clear end with 0
                    ui->label->setText(str2);
                }
            }
            else if(str1!=NULL&&(str1.endsWith("-")||str1.endsWith("+")
                ||str1.endsWith("/")))  //label_2 unempty,end with "-+/"
            {
                if(get_flag()==0)       //label is result,"+"replace "-+/"
                {
                    ui->label_2->setText(str1.left(str1.length()-1)+"*");
                }
                else                    //- or * or / first
                {
                    if(str1.endsWith("-"))//label_2=label_2+label+"+" ; label=result-label
                    {
                        ui->label_2->setText(str1+str+"*");
                        set_result(get_result()-str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("*"))//label_2=label_2+label+"+" ; label=result*label
                    {
                        ui->label_2->setText(str1+str+"*");
                        set_result(get_result()*str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("/"))//label_2=label_2+label+"+" ; label=result/label
                    {
                        ui->label_2->setText(str1+str+"*");
                        if(ui->label->text()!="0")      // x/y  y!=0
                        {
                            set_result(get_result()/str.toDouble(&ok));
                            QString str2;
                            str2.sprintf("%18lf",get_result());    //double to string
                            str2=clear_endwith_zero(str2);         //clear end with 0
                            ui->label->setText(str2);
                        }
                        else      // x/y  y=0
                        {
                            ui->label->setText("除数不能为零");
                            set_divider(1);
                        }
                    }
                }
            }
        }
        set_flag(0);

}

void Dialog::on_pushButton_12_clicked()// /
{
    bool ok;
        QString str=ui->label->text();
        str=clear_endwith_zero(str);
        QString str1=ui->label_2->text();
        if(get_divider()==0)        // x/y  y!=0
        {
            if(str1 == NULL)      //label_2 empty,result=label,label_2=label+"+"
            {
                if(str.endsWith("."))
                    str=str.left(str.length()-1);
                ui->label_2->setText(str+"/");
                set_result(str.toDouble(&ok));
                QString str2;
                str2.sprintf("%18lf",get_result());    //double to string
                str2=clear_endwith_zero(str2);         //clear end with 0
                ui->label->setText(str2);
            }
            else if(str1!=NULL&&str1.endsWith("/"))//label_2 unempty,end with "+"
            {
                if(get_flag() != 0)       //label isn't result,add
                {
                    QString str2=str1 + str;
                    ui->label_2->setText(str2+"/");
                    set_result(get_result() / str.toDouble(&ok));
                    str2.sprintf("%18lf",get_result());    //double to string
                    str2=clear_endwith_zero(str2);         //clear end with 0
                    ui->label->setText(str2);
                }
            }
            else if(str1!=NULL&&(str1.endsWith("-")||str1.endsWith("+")
                ||str1.endsWith("*")))  //label_2 unempty,end with "-+*"
            {
                if(get_flag()==0)       //label is result,"+"replace "-+*"
                {
                    ui->label_2->setText(str1.left(str1.length()-1)+"*");
                }
                else                    //- or * or / first
                {
                    if(str1.endsWith("-"))//label_2=label_2+label+"+" ; label=result-label
                    {
                        ui->label_2->setText(str1+str+"/");
                        set_result(get_result() - str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("*"))//label_2=label_2+label+"+" ; label=result*label
                    {
                        ui->label_2->setText(str1 + str+"/");
                        set_result(get_result() * str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("+"))//label_2=label_2+label+"+" ; label=result/label
                    {
                        ui->label_2->setText(str1 + +"*");
                        if(ui->label->text()!="0")      // x/y  y!=0
                        {
                            set_result(get_result() + str.toDouble(&ok));
                            QString str2;
                            str2.sprintf("%18lf",get_result());    //double to string
                            str2=clear_endwith_zero(str2);         //clear end with 0
                            ui->label->setText(str2);
                        }
                        else      // x/y  y=0
                        {
                            ui->label->setText("除数不能为零");
                            set_divider(1);
                        }
                    }
                }
            }
        }
        set_flag(0);

}

void Dialog::on_pushButton_15_clicked()// -
{
    bool ok;
        QString str=ui->label->text();
        str=clear_endwith_zero(str);
        QString str1=ui->label_2->text();
        if(get_divider()==0)        // x/y  y!=0
        {
            if(str1 == NULL)      //label_2 empty,result=label,label_2=label+"+"
            {
                if(str.endsWith("."))
                    str=str.left(str.length()-1);
                ui->label_2->setText(str+"-");
                set_result(get_result() - str.toDouble(&ok));
                QString str2;
                str2.sprintf("%18lf",get_result());    //double to string
                str2=clear_endwith_zero(str2);         //clear end with 0
                ui->label->setText(str2);
            }
            else if(str1!=NULL&&str1.endsWith("-"))//label_2 unempty,end with "+"
            {
                if(get_flag() != 0)       //label isn't result,add
                {
                    QString str2=str1 + str;
                    ui->label_2->setText(str2+"-");
                    set_result(get_result() - str.toDouble(&ok));
                    str2.sprintf("%18lf",get_result());    //double to string
                    str2=clear_endwith_zero(str2);         //clear end with 0
                    ui->label->setText(str2);
                }
            }
            else if(str1!=NULL&&(str1.endsWith("*")||str1.endsWith("+")
                ||str1.endsWith("/")))  //label_2 unempty,end with "-+/"
            {
                if(get_flag()==0)       //label is result,"+"replace "-+/"
                {
                    ui->label_2->setText(str1.left(str1.length()-1)+"*");
                }
                else                    //- or * or / first
                {
                    if(str1.endsWith("+"))//label_2=label_2+label+"+" ; label=result-label
                    {
                        ui->label_2->setText(str1+str+"-");
                        set_result(get_result()+str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("*"))//label_2=label_2+label+"+" ; label=result*label
                    {
                        ui->label_2->setText(str1+str+"-");
                        set_result(get_result() * str.toDouble(&ok));
                        QString str2;
                        str2.sprintf("%18lf",get_result());    //double to string
                        str2=clear_endwith_zero(str2);         //clear end with 0
                        ui->label->setText(str2);
                    }
                    else if(str1.endsWith("/"))//label_2=label_2+label+"+" ; label=result/label
                    {
                        ui->label_2->setText(str1+str+"-");
                        if(ui->label->text()!="0")      // x/y  y!=0
                        {
                            set_result(get_result() / str.toDouble(&ok));
                            QString str2;
                            str2.sprintf("%18lf",get_result());    //double to string
                            str2=clear_endwith_zero(str2);         //clear end with 0
                            ui->label->setText(str2);
                        }
                        else      // x/y  y=0
                        {
                            ui->label->setText("除数不能为零");
                            set_divider(1);
                        }
                    }
                }
            }
        }
        set_flag(0);
}

void Dialog::on_pushButton_27_clicked()//=
{
    QString str = ui->label->text();
    str = clear_endwith_zero(str);
    QString str1 = ui->label_2->text();
    bool ok;
    if(ui->label_2->text() != NULL)
    {
        if(get_flag())
        {
            if(str1.endsWith("+"))//+
            {
                ui->label_2->clear();
                set_result(get_result() + str.toDouble(&ok));//result = reult + label
                QString str2;
                str2.sprintf("%18lf",get_result());
                str2 = clear_endwith_zero(str2);
                ui->label->setText(str2);
            }
            else if(str1.endsWith("-")) //-
            {
                ui->label_2->clear();
                set_result(get_result() + str.toDouble(&ok));//result = reult + label
                QString str2;
                str2.sprintf("%18lf",get_result());
                str2 = clear_endwith_zero(str2);
                ui->label->setText(str2);
            }
            else if(str1.endsWith("*")) //*
            {
                ui->label_2->clear();
                set_result(get_result() * str.toDouble(&ok));//result = reult + label
                QString str2;
                str2.sprintf("%18lf",get_result());
                str2 = clear_endwith_zero(str2);
                ui->label->setText(str2);
            }
            else if(str1.endsWith("/")) // /
            {
                ui->label_2->clear();
                set_result(get_result() / str.toDouble(&ok));//result = reult + label
                QString str2;
                str2.sprintf("%18lf",get_result());
                str2 = clear_endwith_zero(str2);
                ui->label->setText(str2);
            }
        }
    }
    set_flag(0);
}

void Dialog::on_pushButton_26_clicked()// .
{
    QString str = ui->label->text();
    if(get_flag() == 1 && !str.contains("."))
    {
        str = str + ".";
    }
    else if(get_flag() == 0)
    {
        str = "0.";
    }
    ui->label->setText(str);
    set_flag(1);
}

void Dialog::on_pushButton_11_clicked()// ←
{
 QString str = ui->label->text();
 if(get_flag() == 1)
 {
     if(str.length() == 1)
     {
         str = "0";
     }
     else
         str = str.left(str.length() - 1);
     ui->label->setText(str);

 }
}

void Dialog::on_pushButton_10_clicked()// C
{
    ui->label->clear();
    ui->label->setText("0");
    ui->label_2->setText("0");
    set_divider(0);
    set_flag(0);
    set_result(0);
}

void Dialog::on_pushButton_2_clicked()//√
{
   QString str = ui->label->text();
   bool ok;
   double n = str.toDouble(&ok);
   str.sprintf("%lf",sqrt(n));
   ui->label->setText(clear_endwith_zero(str));
}

void Dialog::on_pushButton_3_clicked()//x²
{
    bool ok;
    QString str = ui->label->text();
    str.sprintf("%lf",str.toDouble(&ok) * str.toDouble(&ok));
    ui->label->setText(clear_endwith_zero(str));
}

void Dialog::on_pushButton_4_clicked()//1/x
{
    QString str = ui->label->text();
    QString str1 = ui->label_2->text();
    bool ok;
    if(str == "0")
    {
        ui->label->setText(QStringLiteral("除数不能为零"));
        ui->label_2->setText(str1 + "reciproc(" + str +")");
    }
    else
    {
        double n = str.toDouble(&ok);
        str.sprintf("%lf",1/n);
        ui->label->setText(clear_endwith_zero(str));
    }
}

void Dialog::on_pushButton_23_clicked()//
{
    QString str = ui->label->text();
    bool ok;
    str.sprintf("%lf",str.toDouble(&ok) * (-1));
    ui->label->setText(clear_endwith_zero(str));
}

void Dialog::on_pushButton_21_clicked()//PI
{
    QString str = ui->label->text();
    str.sprintf("%lf",PI);
    ui->label->setText(str);
}

void Dialog::on_pushButton_6_clicked()//x³
{
    bool ok;
    QString str = ui->label->text();
    str.sprintf("%lf",str.toDouble(&ok) * str.toDouble(&ok) * str.toDouble(&ok));
    ui->label->setText(clear_endwith_zero(str));
}
