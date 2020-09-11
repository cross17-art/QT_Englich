#ifndef WINDOW_GAME_1_H
#define WINDOW_GAME_1_H

#include <QWidget>
#include<QtSql/QSqlDatabase>
#include<QSqlQuery>


namespace Ui {
class window_game_1;
}

class window_game_1 : public QWidget
{
    Q_OBJECT

public:
    explicit window_game_1(QWidget *parent = nullptr, QString str=nullptr);
    ~window_game_1();
    void begining();
    QString jj;
    void first_open_db(QString str);
    void second_opne_db(QString str);
    void third_open_db(QString str);



private slots:



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();





    void on_PB_Verife_clicked();

private:
    Ui::window_game_1 *ui;

};

#endif // WINDOW_GAME_1_H
