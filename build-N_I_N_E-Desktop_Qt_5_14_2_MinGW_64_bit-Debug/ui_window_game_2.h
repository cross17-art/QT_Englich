/********************************************************************************
** Form generated from reading UI file 'window_game_2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_GAME_2_H
#define UI_WINDOW_GAME_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_game_2
{
public:
    QLabel *label;
    QPushButton *PB_verife;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;

    void setupUi(QWidget *window_game_2)
    {
        if (window_game_2->objectName().isEmpty())
            window_game_2->setObjectName(QString::fromUtf8("window_game_2"));
        window_game_2->resize(640, 480);
        label = new QLabel(window_game_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 541, 19));
        PB_verife = new QPushButton(window_game_2);
        PB_verife->setObjectName(QString::fromUtf8("PB_verife"));
        PB_verife->setGeometry(QRect(420, 370, 201, 91));
        layoutWidget = new QWidget(window_game_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 591, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);


        retranslateUi(window_game_2);

        QMetaObject::connectSlotsByName(window_game_2);
    } // setupUi

    void retranslateUi(QWidget *window_game_2)
    {
        window_game_2->setWindowTitle(QCoreApplication::translate("window_game_2", "Form", nullptr));
        label->setText(QCoreApplication::translate("window_game_2", "NEW GAME WORLD", nullptr));
        PB_verife->setText(QCoreApplication::translate("window_game_2", "Verife", nullptr));
        radioButton->setText(QCoreApplication::translate("window_game_2", "NEW GAME WORLD", nullptr));
        radioButton_2->setText(QCoreApplication::translate("window_game_2", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("window_game_2", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("window_game_2", "RadioButton", nullptr));
        radioButton_5->setText(QCoreApplication::translate("window_game_2", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_game_2: public Ui_window_game_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_GAME_2_H
