#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

// ---- OpenCV inlcudes. DO NOT MESS WITH IT ---- //
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/videoio.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

// --------


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    float ganho_base;
//    float ganho_ombro;
//    float ganho_cotovelo;
//    float ganho_punho;
//    int coord_x;
//    int coord_y;
//    int coord_z;

    ui->doubleSpinBox_coordenadas_x->setValue(150);
    ui->doubleSpinBox_coordenadas_y->setValue(150);
    ui->doubleSpinBox_coordenadas_z->setValue(150);


    //--Image processing intialization

    size = cv::Size(640, 480);
    cameraFeed.open("/home/msrj/Desktop/IR_Proj3/Video.mp4");
    cameraFeed >> original_image;
    cv::resize(original_image, original_image, size);
    cv::cvtColor(original_image, original_image, CV_BGR2RGB);
    startTimer(20);
    QImage original_qimage((uchar*)original_image.data,
                             original_image.cols, original_image.rows,
                             QImage::Format_RGB888); //converts cv::Mat into QImage
    ui->label_image->setPixmap(QPixmap::fromImage(original_qimage));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *e){

}

void MainWindow::set_minimuns_maximuns(void)
{

    ui->doubleSpinBox_coordenadas_x->setMinimum(-300);
    ui->doubleSpinBox_coordenadas_x->setMaximum(300);
    ui->doubleSpinBox_coordenadas_y->setMinimum(-300);
    ui->doubleSpinBox_coordenadas_y->setMaximum(300);
    ui->doubleSpinBox_coordenadas_z->setMinimum(-300);
    ui->doubleSpinBox_coordenadas_z->setMaximum(300);

    ui->doubleSpinBox_Base->setMinimum(BAS_MIN);
    ui->doubleSpinBox_Base->setMaximum(BAS_MAX);
    ui->doubleSpinBox_graus_base->setMinimum(GRAU_BASE_MIN);
    ui->doubleSpinBox_graus_base->setMaximum(GRAU_BASE_MAX);
    ui->horizontalSlider_base->setMinimum(BAS_MIN);
    ui->horizontalSlider_base->setMaximum(BAS_MAX);

    ui->doubleSpinBox_Ombro->setMinimum(SHL_MIN);
    ui->doubleSpinBox_Ombro->setMaximum(SHL_MAX);
    ui->doubleSpinBox_graus_ombro->setMinimum(GRAU_OMBRO_MIN);
    ui->doubleSpinBox_graus_ombro->setMaximum(GRAU_OMBRO_MAX);
    ui->horizontalSlider_ombro->setMinimum(SHL_MIN);
    ui->horizontalSlider_ombro->setMaximum(SHL_MAX);

    ui->doubleSpinBox_Cotovelo->setMinimum(ELB_MIN);
    ui->doubleSpinBox_Cotovelo->setMaximum(ELB_MAX);
    ui->doubleSpinBox_graus_cotovelo->setMinimum(GRAU_COTOVELO_MIN);
    ui->doubleSpinBox_graus_cotovelo->setMaximum(GRAU_COTOVELO_MAX);
    ui->horizontalSlider_cotovelo->setMinimum(ELB_MIN);
    ui->horizontalSlider_cotovelo->setMaximum(ELB_MAX);

    ui->doubleSpinBox_Punho->setMinimum(WRI_MIN);
    ui->doubleSpinBox_Punho->setMaximum(WRI_MAX);
    ui->doubleSpinBox_graus_punho->setMinimum(GRAU_PUNHO_MIN);
    ui->doubleSpinBox_graus_punho->setMaximum(GRAU_PUNHO_MAX);
    ui->horizontalSlider_punho->setMinimum(WRI_MIN);
    ui->horizontalSlider_punho->setMaximum(WRI_MAX);

    ui->doubleSpinBox_Garra->setMinimum(GRI_MIN);
    ui->doubleSpinBox_Garra->setMaximum(GRI_MAX);
    ui->horizontalSlider_garra->setMinimum(GRI_MIN);
    ui->horizontalSlider_garra->setMaximum(GRI_MAX);
    ui->doubleSpinBox__cm_garra->setMinimum(CM_GARRA_MIN);
    ui->doubleSpinBox__cm_garra->setMaximum(CM_GARRA_MAX);


}

void MainWindow::on_pushButton_home_clicked()
{
   // #define HOME_POS "#0P1354#1P1999#2P2100#3P1500#4P1500T4000" //Instruções no manual, página 5.
    communicator->goToHome();
    communicator->mes_base=1354;
    communicator->mes_ombro=1999;
    communicator->mes_cotovelo=2100;
    communicator->mes_punho=1500;
    communicator->mes_garra=1500;
    communicator->mes_control =7;

    ui->doubleSpinBox_Base->setValue(1354);
    ui->horizontalSlider_base->setValue(1354);
    ui->doubleSpinBox_graus_base->setValue(9.66);
    //    GANHO_BASE 9.4
    //    BAS_MIN 500
    //    BAS_MAX	2380
    ui->doubleSpinBox_Ombro->setValue(1999);
    ui->horizontalSlider_ombro->setValue(1999);
    ui->doubleSpinBox_graus_ombro->setValue(135);
    //    GANHO_OMBRO 8.888888
    //    SHL_MIN 800
    //    SHL_MAX 2000
    ui->doubleSpinBox_Cotovelo->setValue(2100);
    ui->horizontalSlider_cotovelo->setValue(2100);
    ui->doubleSpinBox_graus_cotovelo->setValue(-140);
    //    GANHO_COTOVELO 9.285714
    //    ELB_MIN 800
    //    ELB_MAX 2100
    ui->doubleSpinBox_Punho->setValue(1500);
    ui->horizontalSlider_punho->setValue(1500);
    ui->doubleSpinBox_graus_punho->setValue(2.5);
    //    GANHO_PUNHO 10.25641026
    //    WRI_MIN 500
    //    WRI_MAX	2500
    ui->doubleSpinBox_Garra->setValue(1500);
    ui->horizontalSlider_garra->setValue(1500);
    ui->doubleSpinBox__cm_garra->setValue(2.60);
    //    GANHO_GARRA 36.6666666
    //    GRI_MIN 1300
    //    GRI_MAX 2400

}

void MainWindow::on_pushButton_connect_clicked()
{
    communicator->connect();
    set_minimuns_maximuns();
    on_pushButton_home_clicked();
    //qDebug() <<"GANHO_GARRA: "<< GANHO_GARRA;
}



void MainWindow::on_pushButton_desconnect_clicked()
{
    communicator->goToHome();
    communicator->desconnect();
}


void MainWindow::on_doubleSpinBox_Garra_valueChanged(double arg1)
{

    // GRI_MIN=1300=30mm=aberto    GRI_MAX=2400=0mm=fechado
    double mm=((GRI_MAX-arg1)/GANHO_GARRA);
//    qDebug() <<"_Garra doubleSpinBox";
//    qDebug() <<"mm: "<< mm;
//    qDebug() <<"pwm: "<< arg1;
//    qDebug() <<"";
    ui->doubleSpinBox__cm_garra->setValue(mm);
    ui->horizontalSlider_garra->setValue(arg1);
    communicator->mes_garra=arg1;
    communicator->mes_control=4;
    communicator->send();

}
void MainWindow::on_horizontalSlider_garra_sliderMoved(int position)
{
    double mm=((GRI_MAX-position)/GANHO_GARRA);
//    qDebug() <<"_Garra horizontalSlider";
//    qDebug() <<"mm: "<< mm;
//    qDebug() <<"pwm: "<< position;
//    qDebug() <<"";
    ui->doubleSpinBox__cm_garra->setValue(mm);
    ui->doubleSpinBox_Garra->setValue(position);
    communicator->mes_garra=position;
    communicator->mes_control=4;
    communicator->send();
}
void MainWindow::on_doubleSpinBox__cm_garra_valueChanged(double arg1)
{
    double pwm;
    pwm = (GRI_MAX-(GANHO_GARRA*arg1));
//    qDebug() <<"_Garra doubleSpinBox__cm";
//    qDebug() <<"mm: "<< arg1;
//    qDebug() <<"pwm: "<< pwm;
//    qDebug() <<"";
    ui->horizontalSlider_garra->setValue(pwm);
    ui->doubleSpinBox_Garra->setValue(pwm);
    communicator->mes_garra=pwm;
    communicator->mes_control=4;
    communicator->send();

}

void MainWindow::on_doubleSpinBox_Punho_valueChanged(double arg1)
{
    double graus=((195*arg1)-287500)/2000;
    if((arg1-communicator->mes_punho)>5 || (arg1-communicator->mes_punho)<-5){
//        qDebug() <<"Punho doubleSpinBox";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< arg1;
//        qDebug() <<"";
        ui->doubleSpinBox_graus_punho->setValue(graus);
        ui->horizontalSlider_punho->setValue(arg1);
        communicator->mes_punho=arg1;
        communicator->mes_control=3;
        communicator->send();
    }

}

void MainWindow::on_horizontalSlider_punho_sliderMoved(int position)
{
    double graus= ((195*position)-287500)/2000;
    if((position-communicator->mes_punho)>5 || (position-communicator->mes_punho)<-5){
//        qDebug() <<"Punho horizontalSlider";
      qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< position;
//        qDebug() <<"";
        ui->doubleSpinBox_graus_punho->setValue(graus);
        ui->doubleSpinBox_Punho->setValue(position);
        communicator->mes_punho=position;
        communicator->mes_control=3;
        communicator->send();
    }

}

void MainWindow::on_doubleSpinBox_graus_punho_valueChanged(double arg1)
{
    double pwm;
    pwm = (((arg1*2000)+287500)/195);
    if((pwm-communicator->mes_punho)>5 || (pwm-communicator->mes_punho)<-5){
//        qDebug() <<"Punho doubleSpinBox";
//        qDebug() <<"graus: "<< arg1;
//        qDebug() <<"pwm: "<< pwm;
//        qDebug() <<"";
        ui->horizontalSlider_punho->setValue(pwm);
        ui->doubleSpinBox_Punho->setValue(pwm);
        communicator->mes_punho=pwm;
        communicator->mes_control=3;
        communicator->send();
    }

}


void MainWindow::on_doubleSpinBox_Cotovelo_valueChanged(double arg1)
{

    double graus=-((arg1-ELB_MIN)/GANHO_COTOVELO);
    if((arg1-communicator->mes_cotovelo)>5 || (arg1-communicator->mes_cotovelo)<-5){
//        qDebug() <<"Cotovelo doubleSpinBox";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< arg1;
//        qDebug() <<"";
        ui->doubleSpinBox_graus_cotovelo->setValue(graus);
        ui->horizontalSlider_cotovelo->setValue(arg1);
        communicator->mes_cotovelo=arg1;
        communicator->mes_control=2;
        communicator->send();
    }


}

void MainWindow::on_horizontalSlider_cotovelo_sliderMoved(int position)
{
    double graus=-((position-ELB_MIN)/GANHO_COTOVELO);
    if((position-communicator->mes_cotovelo)>5 || (position-communicator->mes_cotovelo)<-5){
//        qDebug() <<"Cotovelo horizontalSlider";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< position;
//        qDebug() <<"";
        ui->doubleSpinBox_Cotovelo->setValue(position);
        ui->doubleSpinBox_graus_cotovelo->setValue(graus);        
        communicator->mes_cotovelo=position;
        communicator->mes_control=2;
        communicator->send();
    }

}

void MainWindow::on_doubleSpinBox_graus_cotovelo_valueChanged(double arg1)
{
    double pwm;
    pwm = ((-arg1*GANHO_COTOVELO)+ELB_MIN);
    if((pwm-communicator->mes_cotovelo)>5 || (pwm-communicator->mes_cotovelo)<-5){
//        qDebug() <<"Punho doubleSpinBox graus";
//        qDebug() <<"graus: "<< arg1;
//        qDebug() <<"pwm: "<< pwm;
//        qDebug() <<"";
        ui->horizontalSlider_cotovelo->setValue(pwm);
        ui->doubleSpinBox_Cotovelo->setValue(pwm);        
        communicator->mes_cotovelo=pwm;
        communicator->mes_control=2;
        communicator->send();
    }
}


void MainWindow::on_doubleSpinBox_Ombro_valueChanged(double arg1)
{
    double graus=((arg1-SHL_MIN)/GANHO_OMBRO);
    if((arg1-communicator->mes_cotovelo)>5 || (arg1-communicator->mes_cotovelo)<-5){
//        qDebug() <<"Ombro doubleSpinBox";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< arg1;
//        qDebug() <<"";
        ui->horizontalSlider_ombro->setValue(arg1);
        ui->doubleSpinBox_graus_ombro->setValue(graus);        
        communicator->mes_ombro=arg1;
        communicator->mes_control=1;
        communicator->send();
    }

}

void MainWindow::on_horizontalSlider_ombro_sliderMoved(int position)
{

    double graus=((position-SHL_MIN)/GANHO_OMBRO);
    if((position-communicator->mes_ombro)>5 || (position-communicator->mes_ombro)<-5){
//        qDebug() <<"Ombro horizontalSlider";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< position;
//        qDebug() <<"";
        ui->doubleSpinBox_Ombro->setValue(position);
        ui->doubleSpinBox_graus_ombro->setValue(graus);
        communicator->mes_ombro=position;
        communicator->mes_control=1;
        communicator->send();
    }

}

void MainWindow::on_doubleSpinBox_graus_ombro_valueChanged(double arg1)
{
    double pwm;
    pwm = ((GANHO_OMBRO*arg1)+SHL_MIN);
    if((pwm-communicator->mes_ombro)>5 || (pwm-communicator->mes_ombro)<-5){
//        qDebug() <<"Ombro doubleSpinBox_graus";
//        qDebug() <<"graus: "<< arg1;
//        qDebug() <<"pwm: "<< pwm;
//        qDebug() <<"";
        ui->doubleSpinBox_Ombro->setValue(pwm);
        ui->horizontalSlider_ombro->setValue(pwm);        
        communicator->mes_ombro=pwm;
        communicator->mes_control=1;
        communicator->send();
    }

}


void MainWindow::on_doubleSpinBox_Base_valueChanged(double arg1)
{
    double graus=((1440-arg1)/GANHO_BASE);
    if((arg1-communicator->mes_base)>5 || (arg1-communicator->mes_base)<-5){
//        qDebug() <<"Base doubleSpinBox";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< arg1;
//        qDebug() <<"";
        ui->horizontalSlider_base->setValue(arg1);
        ui->doubleSpinBox_graus_base->setValue(graus);
        communicator->mes_base=arg1;
        communicator->mes_control=0;
        communicator->send();
    }
}


void MainWindow::on_horizontalSlider_base_sliderMoved(int position)
{
 double graus=((1440-position)/GANHO_BASE);
    if((position-communicator->mes_base)>5 || (position-communicator->mes_base)<-5){
//        qDebug() <<"Base doubleSpinBox";
//        qDebug() <<"graus: "<< graus;
//        qDebug() <<"pwm: "<< position;
//        qDebug() <<"";
        ui->doubleSpinBox_Base->setValue(position);
        ui->doubleSpinBox_graus_base->setValue(graus);
        communicator->mes_base=position;
        communicator->mes_control=0;
        communicator->send();
    }

}

void MainWindow::on_doubleSpinBox_graus_base_valueChanged(double arg1)
{
    double pwm;
    pwm = (-GANHO_BASE*arg1)+1440;
    if((pwm-communicator->mes_base)>5 || (pwm-communicator->mes_base)<-5){
//        qDebug() <<"Base doubleSpinBox";
//        qDebug() <<"graus: "<< arg1;
//        qDebug() <<"pwm: "<< pwm;
//        qDebug() <<"";
        ui->doubleSpinBox_Base->setValue(pwm);
        ui->horizontalSlider_base->setValue(pwm);
        communicator->mes_base=pwm;
        communicator->mes_control=0;
        communicator->send();

    }
}



void MainWindow::on_pushButton_goto_xyz_clicked()
{
     int x = ui->doubleSpinBox_coordenadas_x->value();
     int y = ui->doubleSpinBox_coordenadas_y->value();
     int z = ui->doubleSpinBox_coordenadas_z->value();

    double *thetas;
    double thetaVec[4];
    thetas = &thetaVec[0];

    float subida = ui->doubleSpinBox_graus_cotovelo->value();
    on_doubleSpinBox_graus_cotovelo_valueChanged(subida+10);

    sleep(2);

    Cinematica->getCinematicaInversa(x,y,z+30,thetas);
    on_doubleSpinBox_graus_base_valueChanged(thetas[0]);
    on_doubleSpinBox_graus_ombro_valueChanged(thetas[1]);
    on_doubleSpinBox_graus_cotovelo_valueChanged(thetas[2]);
    on_doubleSpinBox_graus_punho_valueChanged(thetas[3]);

    sleep(4);
    Cinematica->getCinematicaInversa(x,y,z,thetas);
    on_doubleSpinBox_graus_base_valueChanged(thetas[0]);
    on_doubleSpinBox_graus_ombro_valueChanged(thetas[1]);
    on_doubleSpinBox_graus_cotovelo_valueChanged(thetas[2]);
    on_doubleSpinBox_graus_punho_valueChanged(thetas[3]);



}


void MainWindow::on_pushButton_receive_xyz_clicked()
{

    //int pwm_base,pwm_ombro,pwm_cotovelo,pwm_punho;
    double *thetas, *coords;
    double thetaVec[4];
    double coordsVec[3]; 
    thetaVec[0]=ui->doubleSpinBox_graus_base->value();
    thetaVec[1]=ui->doubleSpinBox_graus_ombro->value();
    thetaVec[2]=ui->doubleSpinBox_graus_cotovelo->value();
    thetaVec[3]=ui->doubleSpinBox_graus_punho->value();
    printf("\n angulos enviadoss \ntheta base = %f;\ttheta  ombro = %f;\n "
           "theta cotovelo = %f;\ttheta  punho = %f;\n",thetaVec[0],thetaVec[1],thetaVec[2],thetaVec[3]);

    thetas = &thetaVec[0];
    coords=&coordsVec[0];

    Cinematica->getCinematicaDireta(thetas,coords);

    printf("Coordenadas \n X = %f;Y  = %f; Z  = %f \n ",coordsVec[0],coordsVec[1],coordsVec[2]);


}




void MainWindow::on_pushButton_pegar_clicked()
{
    on_doubleSpinBox__cm_garra_valueChanged(15);
}
void MainWindow::on_pushButton_soltar_clicked()
{
    on_doubleSpinBox__cm_garra_valueChanged(30);
}

void MainWindow::on_pushButton_dance_clicked()
{
//    on_doubleSpinBox_graus_base_valueChanged(88.94);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(106);
//    on_doubleSpinBox_graus_punho_valueChanged(0);
//    on_doubleSpinBox_graus_ombro_valueChanged(30);
//    on_doubleSpinBox__cm_garra_valueChanged(0);
//    sleep(3);
//    on_doubleSpinBox__cm_garra_valueChanged(30);
//    on_doubleSpinBox_graus_ombro_valueChanged(56.25);
//    on_doubleSpinBox_graus_punho_valueChanged(97.5);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(64.62);
//    sleep(3);
//    on_doubleSpinBox_graus_base_valueChanged(0);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(106);
//    on_doubleSpinBox_graus_punho_valueChanged(0);
//    on_doubleSpinBox_graus_ombro_valueChanged(30);
//    on_doubleSpinBox__cm_garra_valueChanged(0);
//    sleep(3);
//    on_doubleSpinBox__cm_garra_valueChanged(30);
//    on_doubleSpinBox_graus_ombro_valueChanged(56.25);
//    on_doubleSpinBox_graus_punho_valueChanged(97.5);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(64.62);
//    sleep(3);
//    on_doubleSpinBox_graus_base_valueChanged(180);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(106);
//    on_doubleSpinBox_graus_punho_valueChanged(0);
//    on_doubleSpinBox_graus_ombro_valueChanged(30);
//    on_doubleSpinBox__cm_garra_valueChanged(0);
//    sleep(5);
//    on_doubleSpinBox__cm_garra_valueChanged(30);
//    on_doubleSpinBox_graus_ombro_valueChanged(56.25);
//    on_doubleSpinBox_graus_punho_valueChanged(97.5);
//    on_doubleSpinBox_graus_cotovelo_valueChanged(64.62);
//    sleep(3);
//    on_doubleSpinBox_graus_base_valueChanged(88.94);
//    communicator->goToHome();
//    sleep(1);

}



