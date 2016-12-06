/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_Garra;
    QSlider *horizontalSlider_garra;
    QDoubleSpinBox *doubleSpinBox__cm_garra;
    QDoubleSpinBox *doubleSpinBox_Garra;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Punho;
    QSlider *horizontalSlider_punho;
    QDoubleSpinBox *doubleSpinBox_graus_punho;
    QDoubleSpinBox *doubleSpinBox_Punho;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Cotovelo;
    QSlider *horizontalSlider_cotovelo;
    QDoubleSpinBox *doubleSpinBox_graus_cotovelo;
    QDoubleSpinBox *doubleSpinBox_Cotovelo;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Ombro;
    QSlider *horizontalSlider_ombro;
    QDoubleSpinBox *doubleSpinBox_graus_ombro;
    QDoubleSpinBox *doubleSpinBox_Ombro;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Base;
    QSlider *horizontalSlider_base;
    QDoubleSpinBox *doubleSpinBox_graus_base;
    QDoubleSpinBox *doubleSpinBox_Base;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_pegar;
    QPushButton *pushButton_soltar;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_coordenadas_x;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_coordenadas_y;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_coordenadas_z;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_goto_xyz;
    QPushButton *pushButton_receive_xyz;
    QWidget *tab_3;
    QPushButton *pushButton_dance;
    QWidget *tab_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_16;
    QLabel *label;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_ganho_garra;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_ganho_punho;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_3_ganho_cotovelo;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_ganho_ombro;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_ganho_base;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_home;
    QPushButton *pushButton_desconnect;
    QLabel *label_image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1066, 779);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 80, 261, 631));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 150, 252, 417));
        verticalLayout_21 = new QVBoxLayout(layoutWidget);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Garra = new QLabel(layoutWidget);
        label_Garra->setObjectName(QStringLiteral("label_Garra"));

        verticalLayout->addWidget(label_Garra);

        horizontalSlider_garra = new QSlider(layoutWidget);
        horizontalSlider_garra->setObjectName(QStringLiteral("horizontalSlider_garra"));
        horizontalSlider_garra->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_garra);

        doubleSpinBox__cm_garra = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox__cm_garra->setObjectName(QStringLiteral("doubleSpinBox__cm_garra"));

        verticalLayout->addWidget(doubleSpinBox__cm_garra);

        doubleSpinBox_Garra = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Garra->setObjectName(QStringLiteral("doubleSpinBox_Garra"));
        doubleSpinBox_Garra->setDecimals(1);
        doubleSpinBox_Garra->setMinimum(1300);
        doubleSpinBox_Garra->setMaximum(2400);

        verticalLayout->addWidget(doubleSpinBox_Garra);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Punho = new QLabel(layoutWidget);
        label_Punho->setObjectName(QStringLiteral("label_Punho"));

        verticalLayout_2->addWidget(label_Punho);

        horizontalSlider_punho = new QSlider(layoutWidget);
        horizontalSlider_punho->setObjectName(QStringLiteral("horizontalSlider_punho"));
        horizontalSlider_punho->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_punho);

        doubleSpinBox_graus_punho = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_graus_punho->setObjectName(QStringLiteral("doubleSpinBox_graus_punho"));

        verticalLayout_2->addWidget(doubleSpinBox_graus_punho);

        doubleSpinBox_Punho = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Punho->setObjectName(QStringLiteral("doubleSpinBox_Punho"));
        doubleSpinBox_Punho->setDecimals(1);
        doubleSpinBox_Punho->setMinimum(500);
        doubleSpinBox_Punho->setMaximum(2500);

        verticalLayout_2->addWidget(doubleSpinBox_Punho);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_Cotovelo = new QLabel(layoutWidget);
        label_Cotovelo->setObjectName(QStringLiteral("label_Cotovelo"));

        verticalLayout_3->addWidget(label_Cotovelo);

        horizontalSlider_cotovelo = new QSlider(layoutWidget);
        horizontalSlider_cotovelo->setObjectName(QStringLiteral("horizontalSlider_cotovelo"));
        horizontalSlider_cotovelo->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_cotovelo);

        doubleSpinBox_graus_cotovelo = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_graus_cotovelo->setObjectName(QStringLiteral("doubleSpinBox_graus_cotovelo"));

        verticalLayout_3->addWidget(doubleSpinBox_graus_cotovelo);

        doubleSpinBox_Cotovelo = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Cotovelo->setObjectName(QStringLiteral("doubleSpinBox_Cotovelo"));
        doubleSpinBox_Cotovelo->setDecimals(1);
        doubleSpinBox_Cotovelo->setMinimum(1100);
        doubleSpinBox_Cotovelo->setMaximum(2100);

        verticalLayout_3->addWidget(doubleSpinBox_Cotovelo);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Ombro = new QLabel(layoutWidget);
        label_Ombro->setObjectName(QStringLiteral("label_Ombro"));

        verticalLayout_4->addWidget(label_Ombro);

        horizontalSlider_ombro = new QSlider(layoutWidget);
        horizontalSlider_ombro->setObjectName(QStringLiteral("horizontalSlider_ombro"));
        horizontalSlider_ombro->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_ombro);

        doubleSpinBox_graus_ombro = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_graus_ombro->setObjectName(QStringLiteral("doubleSpinBox_graus_ombro"));

        verticalLayout_4->addWidget(doubleSpinBox_graus_ombro);

        doubleSpinBox_Ombro = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Ombro->setObjectName(QStringLiteral("doubleSpinBox_Ombro"));
        doubleSpinBox_Ombro->setDecimals(1);
        doubleSpinBox_Ombro->setMinimum(1200);
        doubleSpinBox_Ombro->setMaximum(2000);

        verticalLayout_4->addWidget(doubleSpinBox_Ombro);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_Base = new QLabel(layoutWidget);
        label_Base->setObjectName(QStringLiteral("label_Base"));

        verticalLayout_5->addWidget(label_Base);

        horizontalSlider_base = new QSlider(layoutWidget);
        horizontalSlider_base->setObjectName(QStringLiteral("horizontalSlider_base"));
        horizontalSlider_base->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_base);

        doubleSpinBox_graus_base = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_graus_base->setObjectName(QStringLiteral("doubleSpinBox_graus_base"));

        verticalLayout_5->addWidget(doubleSpinBox_graus_base);

        doubleSpinBox_Base = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Base->setObjectName(QStringLiteral("doubleSpinBox_Base"));
        doubleSpinBox_Base->setDecimals(1);
        doubleSpinBox_Base->setMinimum(500);
        doubleSpinBox_Base->setMaximum(2380);

        verticalLayout_5->addWidget(doubleSpinBox_Base);


        verticalLayout_8->addLayout(verticalLayout_5);


        verticalLayout_21->addLayout(verticalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_pegar = new QPushButton(layoutWidget);
        pushButton_pegar->setObjectName(QStringLiteral("pushButton_pegar"));

        horizontalLayout_7->addWidget(pushButton_pegar);

        pushButton_soltar = new QPushButton(layoutWidget);
        pushButton_soltar->setObjectName(QStringLiteral("pushButton_soltar"));

        horizontalLayout_7->addWidget(pushButton_soltar);


        verticalLayout_21->addLayout(horizontalLayout_7);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 20, 251, 121));
        verticalLayout_22 = new QVBoxLayout(layoutWidget1);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_20->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_17->addWidget(label_8);

        doubleSpinBox_coordenadas_x = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_coordenadas_x->setObjectName(QStringLiteral("doubleSpinBox_coordenadas_x"));

        verticalLayout_17->addWidget(doubleSpinBox_coordenadas_x);


        horizontalLayout_6->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_18->addWidget(label_9);

        doubleSpinBox_coordenadas_y = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_coordenadas_y->setObjectName(QStringLiteral("doubleSpinBox_coordenadas_y"));

        verticalLayout_18->addWidget(doubleSpinBox_coordenadas_y);


        horizontalLayout_6->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_19->addWidget(label_10);

        doubleSpinBox_coordenadas_z = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_coordenadas_z->setObjectName(QStringLiteral("doubleSpinBox_coordenadas_z"));

        verticalLayout_19->addWidget(doubleSpinBox_coordenadas_z);


        horizontalLayout_6->addLayout(verticalLayout_19);


        verticalLayout_20->addLayout(horizontalLayout_6);


        verticalLayout_22->addLayout(verticalLayout_20);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_goto_xyz = new QPushButton(layoutWidget1);
        pushButton_goto_xyz->setObjectName(QStringLiteral("pushButton_goto_xyz"));

        horizontalLayout_8->addWidget(pushButton_goto_xyz);

        pushButton_receive_xyz = new QPushButton(layoutWidget1);
        pushButton_receive_xyz->setObjectName(QStringLiteral("pushButton_receive_xyz"));

        horizontalLayout_8->addWidget(pushButton_receive_xyz);


        verticalLayout_22->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_dance = new QPushButton(tab_3);
        pushButton_dance->setObjectName(QStringLiteral("pushButton_dance"));
        pushButton_dance->setGeometry(QRect(10, 20, 99, 27));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 223, 201));
        verticalLayout_16 = new QVBoxLayout(layoutWidget2);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_16->addWidget(label);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        doubleSpinBox_ganho_garra = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_ganho_garra->setObjectName(QStringLiteral("doubleSpinBox_ganho_garra"));

        verticalLayout_10->addWidget(doubleSpinBox_ganho_garra);


        horizontalLayout_4->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_11->addWidget(label_4);

        doubleSpinBox_ganho_punho = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_ganho_punho->setObjectName(QStringLiteral("doubleSpinBox_ganho_punho"));

        verticalLayout_11->addWidget(doubleSpinBox_ganho_punho);


        horizontalLayout_4->addLayout(verticalLayout_11);


        verticalLayout_14->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_12->addWidget(label_5);

        doubleSpinBox_3_ganho_cotovelo = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_3_ganho_cotovelo->setObjectName(QStringLiteral("doubleSpinBox_3_ganho_cotovelo"));

        verticalLayout_12->addWidget(doubleSpinBox_3_ganho_cotovelo);


        horizontalLayout_5->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_13->addWidget(label_6);

        doubleSpinBox_ganho_ombro = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_ganho_ombro->setObjectName(QStringLiteral("doubleSpinBox_ganho_ombro"));

        verticalLayout_13->addWidget(doubleSpinBox_ganho_ombro);


        horizontalLayout_5->addLayout(verticalLayout_13);


        verticalLayout_14->addLayout(horizontalLayout_5);


        verticalLayout_15->addLayout(verticalLayout_14);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_9->addWidget(label_3);

        doubleSpinBox_ganho_base = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_ganho_base->setObjectName(QStringLiteral("doubleSpinBox_ganho_base"));

        verticalLayout_9->addWidget(doubleSpinBox_ganho_base);


        verticalLayout_15->addLayout(verticalLayout_9);


        verticalLayout_16->addLayout(verticalLayout_15);

        tabWidget->addTab(tab_2, QString());
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 226, 64));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_connect = new QPushButton(layoutWidget3);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));

        verticalLayout_6->addWidget(pushButton_connect);

        pushButton_home = new QPushButton(layoutWidget3);
        pushButton_home->setObjectName(QStringLiteral("pushButton_home"));

        verticalLayout_6->addWidget(pushButton_home);


        horizontalLayout->addLayout(verticalLayout_6);

        pushButton_desconnect = new QPushButton(layoutWidget3);
        pushButton_desconnect->setObjectName(QStringLiteral("pushButton_desconnect"));

        horizontalLayout->addWidget(pushButton_desconnect);

        label_image = new QLabel(centralWidget);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(330, 110, 640, 480));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1066, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_Garra->setText(QApplication::translate("MainWindow", "Garra", 0));
        doubleSpinBox__cm_garra->setSuffix(QApplication::translate("MainWindow", " mm", 0));
        doubleSpinBox_Garra->setSuffix(QApplication::translate("MainWindow", " PWM", 0));
        label_Punho->setText(QApplication::translate("MainWindow", "Punho", 0));
        doubleSpinBox_graus_punho->setSuffix(QApplication::translate("MainWindow", " graus", 0));
        doubleSpinBox_Punho->setSuffix(QApplication::translate("MainWindow", " PWM", 0));
        label_Cotovelo->setText(QApplication::translate("MainWindow", "Cotovelo", 0));
        doubleSpinBox_graus_cotovelo->setSuffix(QApplication::translate("MainWindow", " graus", 0));
        doubleSpinBox_Cotovelo->setSuffix(QApplication::translate("MainWindow", " PWM", 0));
        label_Ombro->setText(QApplication::translate("MainWindow", "Ombro", 0));
        doubleSpinBox_graus_ombro->setSuffix(QApplication::translate("MainWindow", " graus", 0));
        doubleSpinBox_Ombro->setSuffix(QApplication::translate("MainWindow", " PWM", 0));
        label_Base->setText(QApplication::translate("MainWindow", "Base", 0));
        doubleSpinBox_graus_base->setSuffix(QApplication::translate("MainWindow", " graus", 0));
        doubleSpinBox_Base->setSuffix(QApplication::translate("MainWindow", " PWM", 0));
        pushButton_pegar->setText(QApplication::translate("MainWindow", "Pegar", 0));
        pushButton_soltar->setText(QApplication::translate("MainWindow", "Soltar", 0));
        label_7->setText(QApplication::translate("MainWindow", "                     Coordenadas", 0));
        label_8->setText(QApplication::translate("MainWindow", "    x  mm", 0));
        label_9->setText(QApplication::translate("MainWindow", "    y mm", 0));
        label_10->setText(QApplication::translate("MainWindow", "    z  mm", 0));
        pushButton_goto_xyz->setText(QApplication::translate("MainWindow", "Enviar XYZ", 0));
        pushButton_receive_xyz->setText(QApplication::translate("MainWindow", "Receber XYZ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Controle Manual", 0));
        pushButton_dance->setText(QApplication::translate("MainWindow", "Dan\303\247a", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Utilidades", 0));
        label->setText(QApplication::translate("MainWindow", "         Ganhos Graus x  PWM", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ganho Garra", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ganho Punho", 0));
        label_5->setText(QApplication::translate("MainWindow", "Ganho Cotovelo", 0));
        label_6->setText(QApplication::translate("MainWindow", "Ganho Ombro", 0));
        label_3->setText(QApplication::translate("MainWindow", "Ganho Base", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajustes", 0));
        pushButton_connect->setText(QApplication::translate("MainWindow", "Conectar", 0));
        pushButton_home->setText(QApplication::translate("MainWindow", "Posi\303\247\303\243o Inicial", 0));
        pushButton_desconnect->setText(QApplication::translate("MainWindow", "Desconectar", 0));
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
