#include "window_game_1.h"
#include "ui_window_game_1.h"
#include<QMessageBox>
#include<QDebug>
#include<QSqlError>
int schetchik=1;
QString answer;
window_game_1::window_game_1(QWidget *parent,QString str) :
    QWidget(parent),
    ui(new Ui::window_game_1)
{ 
    ui->setupUi(this);
    jj=str;

    this->setFixedSize(653,475);

    first_open_db(jj);

    qDebug()<<answer;
}

window_game_1::~window_game_1()
{
    delete ui;

}



void window_game_1::first_open_db(QString str)
{
QSqlDatabase db;
db=QSqlDatabase::addDatabase("QSQLITE");
db.setDatabaseName("D:/kursovay/N_I_N_E/NINE_DB.db");
db.open();
QSqlQuery query=QSqlQuery(db);
query.prepare(QString("SELECT options,translation, answer FROM %1 WHERE rowid=1 ").arg(str));
bool success = query.exec();
 if(!success)
 {
       qDebug() << "failed: " << query.lastError();
 }
 else
 {
     qDebug()<<"ok";
 }
while(query.first()){
    QString chek=query.value(0).toString();
    QString chek_0=query.value(1).toString();
    answer=query.value(2).toString();
    ui->label->setText(chek_0);
    ui->pushButton->setText(chek);
   //qDebug()<<chek;
    //qDebug()<<str;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=2 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_2->setText(chek);
   //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=3 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_3->setText(chek);
    //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=4 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_4->setText(chek);
    //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=5 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_5->setText(chek);
    //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=6 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_6->setText(chek);
    //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=7 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_7->setText(chek);
   //qDebug()<<chek;
    break;
}
query.prepare(QString("SELECT options FROM %1 WHERE rowid=8 ").arg(str));
query.exec();
while(query.first()){
    QString chek=query.value(0).toString();
    ui->pushButton_8->setText(chek);
    //qDebug()<<chek;
    break;
}
db.close();
}
void window_game_1::second_opne_db(QString str)
{
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/kursovay/N_I_N_E/NINE_DB.db");
    db.open();
    QSqlQuery query=QSqlQuery(db);
    query.prepare(QString("SELECT options,translation, answer FROM %1 WHERE rowid=9 ").arg(str));
    bool success = query.exec();
     if(!success)
     {
           qDebug() << "failed: " << query.lastError();
     }
     else
     {
         qDebug()<<"ok";
     }
    while(query.first()){
        QString chek=query.value(0).toString();
        QString chek_0=query.value(1).toString();
        answer=query.value(2).toString();
        ui->label->setText(chek_0);
        ui->pushButton->setText(chek);
       //qDebug()<<chek;
        //qDebug()<<str;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=10 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_2->setText(chek);
       //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=11 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_3->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=12 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_4->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=13 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_5->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=14 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_6->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=15 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_7->setText(chek);
       //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=16 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_8->setText(chek);
        //qDebug()<<chek;
        break;
    }
    db.close();
}
void window_game_1::third_open_db(QString str)
{
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/kursovay/N_I_N_E/NINE_DB.db");
    db.open();
    QSqlQuery query=QSqlQuery(db);
    query.prepare(QString("SELECT options,translation, answer FROM %1 WHERE rowid=17 ").arg(str));
    bool success = query.exec();
     if(!success)
     {
           qDebug() << "failed: " << query.lastError();
     }
     else
     {
         qDebug()<<"ok";
     }
    while(query.first()){
        QString chek=query.value(0).toString();
        QString chek_0=query.value(1).toString();
        answer=query.value(2).toString();
        ui->label->setText(chek_0);
        ui->pushButton->setText(chek);
       //qDebug()<<chek;
        //qDebug()<<str;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=18 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_2->setText(chek);
       //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=19 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_3->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=20 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_4->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=21 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_5->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=22 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_6->setText(chek);
        //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=23 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_7->setText(chek);
       //qDebug()<<chek;
        break;
    }
    query.prepare(QString("SELECT options FROM %1 WHERE rowid=24 ").arg(str));
    query.exec();
    while(query.first()){
        QString chek=query.value(0).toString();
        ui->pushButton_8->setText(chek);
        //qDebug()<<chek;
        break;
    }
    db.close();
}




void window_game_1::begining(){
    ui->label->setText("");
    ui->label_2->setText("");
    ui->pushButton->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
    ui->pushButton_6->setVisible(true);
    ui->pushButton_7->setVisible(true);
    ui->pushButton_8->setVisible(true);

}

void window_game_1::on_pushButton_clicked()
{

    QString mm=ui->pushButton->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton->setVisible(false);

}

void window_game_1::on_pushButton_2_clicked()
{
    QString mm=ui->pushButton_2->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_2->setVisible(false);
}

void window_game_1::on_pushButton_3_clicked()
{
    QString mm=ui->pushButton_3->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_3->setVisible(false);
}

void window_game_1::on_pushButton_4_clicked()
{
    QString mm=ui->pushButton_4->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_4->setVisible(false);
}

void window_game_1::on_pushButton_5_clicked()
{
    QString mm=ui->pushButton_5->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_5->setVisible(false);
}

void window_game_1::on_pushButton_6_clicked()
{
    QString mm=ui->pushButton_6->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_6->setVisible(false);
}

void window_game_1::on_pushButton_7_clicked()
{
    QString mm=ui->pushButton_7->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_7->setVisible(false);
}

void window_game_1::on_pushButton_8_clicked()
{
    QString mm=ui->pushButton_8->text();
    ui->label_2->setText(ui->label_2->text()+mm+" ");
    ui->pushButton_8->setVisible(false);
}



void window_game_1::on_PB_Verife_clicked()
{

    if(answer==ui->label_2->text()){
      begining();
      QLabel *l=new QLabel;
      l->setText("Absolutely right");
      l->setStyleSheet("background-color: green;"
                       "border-style: inset;"
                        "border-width:4px;"
                 );
    schetchik++;
     if(schetchik==2){

       second_opne_db(jj);
       qDebug()<<answer;
       l->show();

     }
     else if(schetchik==3){
         third_open_db(jj);
         l->show();

     }

     else{
         this->close();
         schetchik=1;
         l->show();
     }
    }
    else{
        QLabel *l=new QLabel;
        begining();
        l->setText("the right option was this:"+answer);
        l->setStyleSheet("background-color: red;"
                         "border-style: inset;"
                          "border-width:4px;"
                   );

         l->show();
         schetchik++;
         if(schetchik==2){

           second_opne_db(jj);
           qDebug()<<answer;
           l->show();

         }
         else if(schetchik==3){
             third_open_db(jj);
             l->show();

         }

         else{
             this->close();
             schetchik=1;
         }
    }
}
