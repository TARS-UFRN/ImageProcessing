#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// -- OpenCV Includes ---
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/videoio.hpp>
#include <opencv2/imgproc.hpp>
#include <string>
#include <cstring>
#include <sstream>
#include <iostream>
#include <QImage>
#include <cv.h>
#include <highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
#include <QWidget>
#include <QMouseEvent>
#include <vector>
// -- ---- -- --- ---- -- ---

#include "messenger.h"
#include "cinematica.h"

// Servo da base HS-485HB //
#define BAS_SERVO 0
#define BAS_MIN 500
#define BAS_MAX	2380

// Servo do ombro HS-805BB //
#define SHL_SERVO 1
#define SHL_MIN 800
#define SHL_MAX 2000

// Servo do cotovelo HS-755HB//
#define ELB_SERVO 2
#define ELB_MIN 800
#define ELB_MAX 2100

// Servo do punho HS-645MG //
#define WRI_SERVO 3
#define WRI_MIN 500
#define WRI_MAX	2500

// Servo da garra HS-322HD //
#define GRI_SERVO 4
#define GRI_MIN 1300
#define GRI_MAX 2400


#define CM_GARRA_MAX 0
#define CM_GARRA_MIN 30
#define GRAU_PUNHO_MAX 100
#define GRAU_PUNHO_MIN -95
#define GRAU_COTOVELO_MAX 0
#define GRAU_COTOVELO_MIN -140
#define GRAU_OMBRO_MAX 135
#define GRAU_OMBRO_MIN 0
#define GRAU_BASE_MAX 100
#define GRAU_BASE_MIN -100


#define GANHO_GARRA 36.6666666
#define GANHO_PUNHO 10.25641026
#define GANHO_COTOVELO 9.285714
#define GANHO_OMBRO 8.888888
#define GANHO_BASE 9.4


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    messenger *communicator;
    cinematica *Cinematica;

public slots:
    void timerEvent(QTimerEvent *e);
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

private slots:
    void on_pushButton_home_clicked();

    void on_doubleSpinBox_Garra_valueChanged(double arg1);

    void on_doubleSpinBox_Punho_valueChanged(double arg1);

    void on_doubleSpinBox_Cotovelo_valueChanged(double arg1);

    void on_doubleSpinBox_Ombro_valueChanged(double arg1);

    void on_doubleSpinBox_Base_valueChanged(double arg1);

    void on_pushButton_connect_clicked();

    void on_pushButton_desconnect_clicked();

    void on_horizontalSlider_garra_sliderMoved(int position);

    void on_horizontalSlider_punho_sliderMoved(int position);

    void on_horizontalSlider_ombro_sliderMoved(int position);

    void on_horizontalSlider_cotovelo_sliderMoved(int position);

    void on_horizontalSlider_base_sliderMoved(int position);  

    void on_doubleSpinBox__cm_garra_valueChanged(double arg1);

    void on_doubleSpinBox_graus_punho_valueChanged(double arg1);

    void on_doubleSpinBox_graus_cotovelo_valueChanged(double arg1);

    void on_doubleSpinBox_graus_ombro_valueChanged(double arg1);

    void on_doubleSpinBox_graus_base_valueChanged(double arg1);

    void on_pushButton_pegar_clicked();

    void on_pushButton_dance_clicked();

    void on_pushButton_soltar_clicked();

    void on_pushButton_goto_xyz_clicked();

    void on_pushButton_receive_xyz_clicked();

private:
    Ui::MainWindow *ui;
    void set_minimuns_maximuns(void);


    // ----------Private variables for the image processing ----------

    cv::Mat original_image;
    cv::VideoCapture cameraFeed;
    cv::Size size;
    std::vector<std::vector<cv::Point> > Localization;//Will be an 9x2 vector
    std::vector<std::vector< bool> > Occupation; //Will be an 9x2 vector

    int height, width;

    bool Hashtag_slots[9]; //this vector is the one that enables the selection of a slot on the table
    uchar chosen; //the current chosen button to select an specific slot
    bool slot_selection = false;

    // ---------------------------------------------------------------


};

#endif // MAINWINDOW_H
