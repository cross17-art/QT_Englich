#ifndef ANIMALS_H
#define ANIMALS_H

#include <QWidget>

namespace Ui {
class animals;
}

class animals : public QWidget
{
    Q_OBJECT

public:
    explicit animals(QWidget *parent = nullptr);
    void game_1();
    void game_2();
    void game_3();
    ~animals();
public slots:
    void verif();
    void verif_2();
    void verif_3();


private:
    Ui::animals *ui;
};

#endif // ANIMALS_H
