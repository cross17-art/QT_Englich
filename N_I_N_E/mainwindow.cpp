#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include<QtWidgets>
#include<QListView>
#include<QListWidget>
#include<QScrollArea>

#include"window_game_1.h"
//QString str="hellow";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic(":/base_frame .png");
    QPalette palette;
    palette.setBrush(QPalette::Background,pic);
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_PB_power_0_clicked()//закрывает приложение.
{
    QApplication::closeAllWindows();
}

void MainWindow::on_PB_clothes_1_clicked()//первый уровень
{
    QString str="clothes_1";
    a=new window_game_1(nullptr,str);
  
    a->show();


}

void MainWindow::on_PB_theory_1_clicked()//ТЕОРИЯ  СДЕЛАНА
{
     QFile file1(":/clothes.txt");


     if (!file1.open(QIODevice::ReadOnly)){

           return;}
     QString data= file1.readAll();
         file1.close();


 QLabel *lb=new QLabel(

                        "<p>"+data+"</p>"

                        );

 QScrollArea *sr=new QScrollArea;
 lb->setStyleSheet("background-color: white;");
 sr->setWidget(lb);
 sr->setFixedSize(1302,800);
 sr->show();
}

void MainWindow::on_PB_family_2_clicked()
{
    QString str="family_3";
    a=new window_game_1(nullptr,str);
    a->show();
}

void MainWindow::on_PB_relationships_3_clicked()
{

            QString str="relationships_2";
            a=new window_game_1(nullptr,str);
            a->show();
}

void MainWindow::on_PB_theory_2_clicked()
{
    QFile file1(":/ааааа.txt");


    if (!file1.open(QIODevice::ReadOnly)){

          return;}
    QString data= file1.readAll();
        file1.close();


QLabel *lbl=new QLabel(

                       "<p>"+data+"</p>"

                       );

QScrollArea *sr=new QScrollArea;
lbl->setStyleSheet("background-color: white;");
sr->setWidget(lbl);
sr->setFixedSize(1302,800);
sr->show();
}

void MainWindow::on_PB_animals_6_clicked()
{
    l=new animals;
   l->show();
}

void MainWindow::on_PB_to_be_4_clicked()
{
    QString str="to_be";
    a=new window_game_1(nullptr,str);
    a->show();
}

void MainWindow::on_PB_phrases_5_clicked()
{
            QString str="phrases";
            a=new window_game_1(nullptr,str);
            a->show();
}

void MainWindow::on_PB_theory_3_clicked()
{
    QFile file1(":/pluralexception.txt");


    if (!file1.open(QIODevice::ReadOnly)){

          return;}
    QString data= file1.readAll();
        file1.close();


QLabel *lbl=new QLabel(

                       "<p>"+data+"</p>"

                       );

QScrollArea *sr=new QScrollArea;
lbl->setStyleSheet("background-color: white;");
sr->setWidget(lbl);
sr->setFixedSize(1302,800);
sr->show();
}

void MainWindow::on_PB_food_7_clicked()
{
    f =new food;
    f->show();
}

void MainWindow::on_PB_plural_9_clicked()
{
    QString str="plural";
    a=new window_game_1(nullptr,str);
    a->show();
}

void MainWindow::on_PB_plural_exception_8_clicked()
{
    QString str="plural_exception";
    a=new window_game_1(nullptr,str);
    a->show();

}

void MainWindow::on_PB_THE_10_clicked()
{
    QString str="The";
    a=new window_game_1(nullptr,str);
    a->show();
}

void MainWindow::on_PB_theory_4_clicked()
{

            QFile file1(":/time_theotry.txt");


            if (!file1.open(QIODevice::ReadOnly)){

                  return;}
            QString data= file1.readAll();
                file1.close();

      
        QLabel *lbl=new QLabel(

                               "<p>"+data+"</p>"

                               );

        QScrollArea *sr=new QScrollArea;
        lbl->setStyleSheet("background-color: white;");
        sr->setWidget(lbl);
        sr->setFixedSize(1302,800);
        sr->show();
}

void MainWindow::on_PB__present_simple_11_clicked()
{
    QString str="present_simple";
    a=new window_game_1(nullptr,str);
    a->show();
}

void MainWindow::on_PB__present_continuose_12_clicked()
{
    QString str="present_continuous";
    a=new window_game_1(nullptr,str);
    a->show();

}

void MainWindow::on_PB__past_simple_13_clicked()
{
    QString str="past_simple";
    a=new window_game_1(nullptr,str);
    a->show();

}

void MainWindow::on_PB__past_continuous_14_clicked()
{
    QString str="past_countinuous";
    a=new window_game_1(nullptr,str);
    a->show();

}

void MainWindow::on_pushButton_clicked()
{



    QString put= QCoreApplication::applicationDirPath ();
        put.append("/dxxxx.chm");
        QUrl str;
        str.setUrl(put);
        QDesktopServices::openUrl( str );
        qDebug()<<99;
}
