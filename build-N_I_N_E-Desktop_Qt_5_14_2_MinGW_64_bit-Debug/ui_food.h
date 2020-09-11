/********************************************************************************
** Form generated from reading UI file 'food.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOOD_H
#define UI_FOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_food
{
public:
    QPushButton *P_1;
    QPushButton *P_2;
    QPushButton *P_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *food)
    {
        if (food->objectName().isEmpty())
            food->setObjectName(QString::fromUtf8("food"));
        food->resize(640, 480);
        P_1 = new QPushButton(food);
        P_1->setObjectName(QString::fromUtf8("P_1"));
        P_1->setGeometry(QRect(10, 280, 178, 158));
        P_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                                 ;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"       border-style: inset;\n"
"    border-width:4px;\n"
" border-radius:40px;\n"
"   border-color: black;\n"
"    max-width:150px;\n"
"   max-height:150px;\n"
"  min-width:170px;\n"
" min-height:150px;\n"
"                                 }\n"
" QPushButton:hover{\n"
" border: 4px inset black;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                            "));
        P_2 = new QPushButton(food);
        P_2->setObjectName(QString::fromUtf8("P_2"));
        P_2->setGeometry(QRect(210, 280, 178, 158));
        P_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                                 ;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"       border-style: inset;\n"
"    border-width:4px;\n"
" border-radius:40px;\n"
"   border-color: black;\n"
"    max-width:150px;\n"
"   max-height:150px;\n"
"  min-width:170px;\n"
" min-height:150px;\n"
"                                 }\n"
" QPushButton:hover{\n"
" border: 4px inset black;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                            "));
        P_3 = new QPushButton(food);
        P_3->setObjectName(QString::fromUtf8("P_3"));
        P_3->setGeometry(QRect(430, 270, 178, 158));
        P_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                                 ;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"       border-style: inset;\n"
"    border-width:4px;\n"
" border-radius:40px;\n"
"   border-color: black;\n"
"    max-width:150px;\n"
"   max-height:150px;\n"
"  min-width:170px;\n"
" min-height:150px;\n"
"                                 }\n"
" QPushButton:hover{\n"
" border: 4px inset black;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                            "));
        label_2 = new QLabel(food);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 10, 521, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Fax"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Panel);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(10);
        label_2->setMidLineWidth(10);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(food);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 511, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-style: outset;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-color: green;\n"
"border-width:2px;\n"
"\n"
"\n"
"                                             \n"
" "));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(food);

        QMetaObject::connectSlotsByName(food);
    } // setupUi

    void retranslateUi(QWidget *food)
    {
        food->setWindowTitle(QCoreApplication::translate("food", "Form", nullptr));
        P_1->setText(QString());
        P_2->setText(QString());
        P_3->setText(QString());
        label_2->setText(QCoreApplication::translate("food", "Select an image by name", nullptr));
        label->setText(QCoreApplication::translate("food", "animals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class food: public Ui_food {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOOD_H
