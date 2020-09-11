#ifndef FOOD_H
#define FOOD_H

#include <QWidget>

namespace Ui {
class food;
}

class food : public QWidget
{
    Q_OBJECT

public:
    explicit food(QWidget *parent = nullptr);
    void game_1();
    void game_2();
    void game_3();
    ~food();
public slots:
    void verif();
    void verif_2();
    void verif_3();

private:
    Ui::food *ui;
};

#endif // FOOD_H
