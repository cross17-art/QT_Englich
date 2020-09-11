#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include"window_game_1.h"
#include"animals.h"
#include"food.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_PB_power_0_clicked();

    void on_PB_clothes_1_clicked();

    void on_PB_theory_1_clicked();

    void on_PB_family_2_clicked();

    void on_PB_relationships_3_clicked();

    void on_PB_theory_2_clicked();

    void on_PB_animals_6_clicked();

    void on_PB_to_be_4_clicked();

    void on_PB_phrases_5_clicked();

    void on_PB_theory_3_clicked();

    void on_PB_food_7_clicked();

    void on_PB_plural_9_clicked();

    void on_PB_plural_exception_8_clicked();

    void on_PB_THE_10_clicked();

    void on_PB_theory_4_clicked();

    void on_PB__present_simple_11_clicked();

    void on_PB__present_continuose_12_clicked();

    void on_PB__past_simple_13_clicked();

    void on_PB__past_continuous_14_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    window_game_1 *a;
    animals *l;
    food *f;


};
#endif // MAINWINDOW_H
