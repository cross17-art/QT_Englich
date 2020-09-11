/********************************************************************************
** Form generated from reading UI file 'window_game_1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_GAME_1_H
#define UI_WINDOW_GAME_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_game_1
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *PB_Verife;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_3;

    void setupUi(QWidget *window_game_1)
    {
        if (window_game_1->objectName().isEmpty())
            window_game_1->setObjectName(QString::fromUtf8("window_game_1"));
        window_game_1->resize(653, 475);
        window_game_1->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label = new QLabel(window_game_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 621, 61));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-style: insert;\n"
"\n"
"border-width:8px;\n"
""));
        label_2 = new QLabel(window_game_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 140, 611, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Niagara Solid"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"border-style: outset;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-color: green;\n"
"border-width:2px;\n"
"\n"
"\n"
"                                             \n"
" "));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);
        PB_Verife = new QPushButton(window_game_1);
        PB_Verife->setObjectName(QString::fromUtf8("PB_Verife"));
        PB_Verife->setGeometry(QRect(530, 430, 112, 34));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Fax"));
        font2.setPointSize(10);
        PB_Verife->setFont(font2);
        PB_Verife->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(43, 255, 85, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: green;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset green;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(170, 255, 78, 255), stop:1 rgba(255, 255, 255, 255));\n"
" }\n"
"                                             \n"
" "));
        layoutWidget = new QWidget(window_game_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 290, 561, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 237, 234, 255), stop:1 rgba(180, 144, 202, 255));\n"
"border-style: inset;\n"
"border-width:4px;\n"
"\n"
"border-color: blue;\n"
"max-width:140px;\n"
"max-height:26px;\n"
"\n"
"}\n"
" QPushButton:hover{\n"
" border: 4px inset blue;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(48, 207, 208, 255), stop:1 rgba(51, 8, 103, 255));\n"
" }\n"
"                                             \n"
" "));

        horizontalLayout_2->addWidget(pushButton_8);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(window_game_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 0, 281, 71));
        label_3->setFont(font2);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setFrameShape(QFrame::WinPanel);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setLineWidth(10);
        label_3->setMidLineWidth(10);
        label_3->setTextFormat(Qt::RichText);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);

        retranslateUi(window_game_1);

        QMetaObject::connectSlotsByName(window_game_1);
    } // setupUi

    void retranslateUi(QWidget *window_game_1)
    {
        window_game_1->setWindowTitle(QCoreApplication::translate("window_game_1", "Form", nullptr));
        label->setText(QCoreApplication::translate("window_game_1", "NEW GAME WORLD ", nullptr));
        label_2->setText(QString());
        PB_Verife->setText(QCoreApplication::translate("window_game_1", "Verify", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_3->setText(QCoreApplication::translate("window_game_1", "You need to translate this", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_game_1: public Ui_window_game_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_GAME_1_H
