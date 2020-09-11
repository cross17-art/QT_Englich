#include "animals.h"
#include "ui_animals.h"
#include<QDebug>
int counter=0;
animals::animals(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::animals)
{
   ui->setupUi(this);

   ui->label->setText("Donkey");
   game_1();
connect(ui->PB_1,SIGNAL(clicked()),this,SLOT(verif()));
connect(ui->PB_2,SIGNAL(clicked()),this,SLOT(verif()));
connect(ui->PB_3,SIGNAL(clicked()),this,SLOT(verif()));
}



animals::~animals()
{
    delete ui;
}



void animals::game_1(){
    ui->PB_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/cow.png);"
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
    ui->PB_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/duck.png);"
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
    ui->PB_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Donkey.png);"
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
void animals::game_2(){
    ui->PB_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Fox.png);"
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
    ui->PB_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Horse.png);"
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
    ui->PB_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Kitten.png);"
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
void animals::game_3(){
    ui->PB_1 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Lion.png);"
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
    ui->PB_2 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/Panda.png);"
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
    ui->PB_3 -> setStyleSheet(  "QPushButton{"
                                   "   image: url(:/animals/sheep.png);"
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




void animals::verif()
{
QPushButton *button=(QPushButton *)sender();
QString b=(button->objectName());
qDebug()<<b;
if(counter==0){
    if(b=="PB_3"){
        QLabel *l=new QLabel;

        l->setText("Absolutely right");
        l->setStyleSheet("background-color: green;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        l->show();
        ui->label->setText("Fox");
        game_2();

    }
    else{
        QLabel *l=new QLabel;
        l->setText("right answer was Donkey");
        l->setStyleSheet("background-color: red;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        l->show();
        ui->label->setText("Fox");
        game_2();
    }
    counter++;
}
connect(ui->PB_1,SIGNAL(clicked()),this,SLOT(verif_2()));
connect(ui->PB_2,SIGNAL(clicked()),this,SLOT(verif_2()));
connect(ui->PB_3,SIGNAL(clicked()),this,SLOT(verif_2()));
}

void animals::verif_2(){
    QPushButton *button=(QPushButton *)sender();
    QString b=(button->objectName());
    qDebug()<<b;
    if(counter==1){
        if(b=="PB_1"){
            QLabel *l=new QLabel;

            l->setText("Absolutely right");
            l->setStyleSheet("background-color: green;"
                             "border-style: inset;"
                              "border-width:4px;"
                       );
            l->show();
            ui->label->setText("Panda");
            game_3();
        }
        else
        {
            QLabel *l=new QLabel;
            l->setText("right answer was Fox");
            l->setStyleSheet("background-color: red;"
                             "border-style: inset;"
                              "border-width:4px;"
                       );
            l->show();
            ui->label->setText("Panda");
            game_3();
        }
    }
    counter++;
    connect(ui->PB_1,SIGNAL(clicked()),this,SLOT(verif_3()));
    connect(ui->PB_2,SIGNAL(clicked()),this,SLOT(verif_3()));
    connect(ui->PB_3,SIGNAL(clicked()),this,SLOT(verif_3()));
}

void animals::verif_3()
{
    QPushButton *button=(QPushButton *)sender();
    QString b=(button->objectName());
    if(b=="PB_2"){
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
        l->setText("right answer was Panda");
        l->setStyleSheet("background-color: red;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );
        this->close();
        l->show();
    }
counter=0;
}
