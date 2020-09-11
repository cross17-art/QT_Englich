#include "mainwindow.h"
#include <QApplication>
#include<QScrollArea>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *w=new MainWindow;

    QScrollArea scrollArea;
    scrollArea.setWidget(w);
    scrollArea.showFullScreen();
    scrollArea.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    return a.exec();
}
