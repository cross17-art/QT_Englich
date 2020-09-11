/********************************************************************************
** Form generated from reading UI file 'animals.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMALS_H
#define UI_ANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_animals
{
public:
    QPushButton *PB_1;
    QPushButton *PB_2;
    QPushButton *PB_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *animals)
    {
        if (animals->objectName().isEmpty())
            animals->setObjectName(QString::fromUtf8("animals"));
        animals->resize(640, 480);
        PB_1 = new QPushButton(animals);
        PB_1->setObjectName(QString::fromUtf8("PB_1"));
        PB_1->setGeometry(QRect(10, 280, 178, 158));
        PB_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        PB_2 = new QPushButton(animals);
        PB_2->setObjectName(QString::fromUtf8("PB_2"));
        PB_2->setGeometry(QRect(230, 280, 178, 158));
        PB_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        PB_3 = new QPushButton(animals);
        PB_3->setObjectName(QString::fromUtf8("PB_3"));
        PB_3->setGeometry(QRect(450, 280, 178, 158));
        PB_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label = new QLabel(animals);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 150, 511, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Script"));
        font.setPointSize(12);
        label->setFont(font);
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
        label_2 = new QLabel(animals);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 30, 521, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Fax"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Panel);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(10);
        label_2->setMidLineWidth(10);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(animals);

        QMetaObject::connectSlotsByName(animals);
    } // setupUi

    void retranslateUi(QWidget *animals)
    {
        animals->setWindowTitle(QCoreApplication::translate("animals", "Form", nullptr));
        PB_1->setText(QString());
        PB_2->setText(QString());
        PB_3->setText(QString());
        label->setText(QCoreApplication::translate("animals", "animals", nullptr));
        label_2->setText(QCoreApplication::translate("animals", "Select an image by name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class animals: public Ui_animals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMALS_H
