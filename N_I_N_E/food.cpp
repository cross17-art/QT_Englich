#include "food.h"
#include "ui_food.h"
#include<QDebug>
int count=0;
food::food(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::food)
{
    ui->setupUi(this);
    ui->label->setText("Carrot");
    game_1();
 connect(ui->P_1,SIGNAL(clicked()),this,SLOT(verif()));
 connect(ui->P_2,SIGNAL(clicked()),this,SLOT(verif()));
 connect(ui->P_3,SIGNAL(clicked()),this,SLOT(verif()));
}

food::~food()
{
    delete ui;
}
void food::game_1(){
    ui->P_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/banana.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/fish.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/Carrot.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
}
void food::game_2(){
    ui->P_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/melon.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/kiwi.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/meat.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
}
void food::game_3(){
    ui->P_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/pineapple.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/raspberry.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
    ui->P_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/food/Strawberry.png);"
                                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));"
                                  "border-style: inset;"
                                  "border-width:4px;"
                                  "border-radius:40px;"
                                  "border-color: black;"
                                 " max-width:150px;"
                                 " max-height:150px;"
                                 " min-width:170px;"
                                  "min-height:150px;"
                                  "}"
                                   "QPushButton:hover{"
                                  " border: 4px inset black;"
                                    "  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));"
                                   "}"


                                                );
}
void food::verif()
{
QPushButton *button=(QPushButton *)sender();
QString b=(button->objectName());
qDebug()<<b;
if(count==0){
    if(b=="P_3"){
        QLabel *l=new QLabel;

        l->setText("Absolutely right");
        l->setStyleSheet("background-color: green;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        l->show();
        ui->label->setText("Watermelon");
        game_2();

    }
    else{
        QLabel *l=new QLabel;
        l->setText("right answer was Carrot");
        l->setStyleSheet("background-color: red;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        l->show();
        ui->label->setText("Watermelon");
        game_2();
    }
    count++;
}
connect(ui->P_1,SIGNAL(clicked()),this,SLOT(verif_2()));
connect(ui->P_2,SIGNAL(clicked()),this,SLOT(verif_2()));
connect(ui->P_3,SIGNAL(clicked()),this,SLOT(verif_2()));
}

void food::verif_2(){
    QPushButton *button=(QPushButton *)sender();
    QString b=(button->objectName());
    qDebug()<<b;
    if(count==1){
        if(b=="P_1"){
            QLabel *l=new QLabel;

            l->setText("Absolutely right");
            l->setStyleSheet("background-color: green;"
                             "border-style: inset;"
                              "border-width:4px;"
                       );
            l->show();
            ui->label->setText("Raspberry");
            game_3();
        }
        else
        {
            QLabel *l=new QLabel;
            l->setText("right answer was Watermelon");
            l->setStyleSheet("background-color: red;"
                             "border-style: inset;"
                              "border-width:4px;"
                       );
            l->show();
            ui->label->setText("Raspberry");
            game_3();
        }
    }
    count++;
    connect(ui->P_1,SIGNAL(clicked()),this,SLOT(verif_3()));
    connect(ui->P_2,SIGNAL(clicked()),this,SLOT(verif_3()));
    connect(ui->P_3,SIGNAL(clicked()),this,SLOT(verif_3()));
}

void food::verif_3()
{
    QPushButton *button=(QPushButton *)sender();
    QString b=(button->objectName());
    if(b=="P_2"){
        QLabel *l=new QLabel;

        l->setText("Absolutely right");
        l->setStyleSheet("background-color: green;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        this->close();

        l->show();
    }
    else{
        QLabel *l=new QLabel;
        l->setText("right answer was Raspberry");
        l->setStyleSheet("background-color: red;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        this->close();
        l->show();
    }
count=0;
}
