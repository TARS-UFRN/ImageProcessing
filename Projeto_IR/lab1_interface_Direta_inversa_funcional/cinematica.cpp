#include "cinematica.h"

cinematica::cinematica()
{
    x=0;
    y=0;
    z=0;

}

void cinematica::getCinematicaInversa(double x, double y, double z, double *thetas)
{
    double afx, afy, ladoA, ladoB, hip, alfa, beta, gamma, inclinacao;
    double x1, y1;
    double teta1, teta2, teta3, teta4;

    //        x=x+CALIB_X;
    //        y=y+CALIB_Y;
    //        z=z+CALIB_Z;


    printf("X recebido: %f \n", x);
    printf("Y recebido: %f \n", y);
    printf("Z recebido: %f \n", z);

    inclinacao = -90;

    x1 = sqrt(x*x + y*y);
    y1 = z;

    teta1 = atan2(y,x)*GRAD;
    afx = cos(RAD*inclinacao)*L4;
    afy = sin(RAD*inclinacao)*L4;
    //        printf("\nafx: %f\n", afx);
    //        printf("afy: %f\n", afy);
    ladoA = y1 - afy - L1;
    ladoB = x1 - afx;
    //        printf("ladoA: %f\n", ladoA);
    //        printf("ladoB: %f\n", ladoB);
    hip = sqrt(ladoA*ladoA + ladoB*ladoB);
    alfa = atan2(ladoA,ladoB);
    //        printf("\nalfa: %f\n", alfa);
    //        printf("hip: %f\n", hip);
    beta = acos((L2*L2 - L3*L3 + hip*hip) / (2*L2*hip));
    //        printf("numerador: %f\n", L2*L2 - L3*L3 + hip*hip);
    //        printf("denominador: %f\n", 2*L2*hip);
    //        printf("divisao: %f\n", (L2*L2 - L3*L3 + hip*hip) / (2*L2*hip));
    //        printf("\nbeta: %f\n", beta);
    teta2 = (alfa + beta)*GRAD;
    gamma = acos((L2*L2 + L3*L3 - hip*hip) / (2*L2*L3));
    teta3 = (-((180*RAD)-gamma))*GRAD;
    teta4 = inclinacao - teta2 - teta3;

    printf("Antes travas \ntheta base = %f;\ttheta  ombro = %f;\n theta cotovelo = %f;\ttheta  punho = %f;\n",teta1,teta2,teta3,teta4);

    //        if(teta1<0){
    //            teta1 = teta1+360;
    //        }
    //        if(teta2<0){
    //            teta2 = teta2+360;
    //        }
    //        if(teta3<0){
    //            teta3 = teta3*-1;
    //        }
    //        else if(teta3>180){
    //            teta3=360-teta3;
    //        }
    //        if(teta4<0){
    //            teta4 = teta4*-1;
    //        }
    //        else if(teta4>180){
    //            teta4=360-teta4-100;
    //        }


    //       printf("depois travas \ntheta base = %f;\ttheta  ombro = %f;\n theta cotovelo = %f;\ttheta  punho = %f;\n",teta1,teta2,teta3,teta4);


    thetas[0] = teta1;
    thetas[1] = teta2;
    thetas[2] = teta3;
    thetas[3] = teta4;
}

void cinematica::getCinematicaDireta(double *thetas, double *coords)
{
    //tratamento para converter pro esquema do relatorio


    printf("________cinematica direta \ntheta base = %f;\ttheta  ombro = %f;\n "
           "theta cotovelo = %f;\ttheta  punho = %f;\n",thetas[0],thetas[1],thetas[2],thetas[3]);

    thetas[0] =  thetas[0]*RAD;
    thetas[1] =  thetas[1]*RAD;
    thetas[2] =  thetas[2]*RAD;
    thetas[3] =  thetas[3]*RAD;

    //fim do tratamento para converter pro esquema do relatorio

    int X,Y,Z;

    float teta_parcial;


    teta_parcial = L4*(cos(thetas[3])*cos(thetas[1]+thetas[2])-sin(thetas[3])*sin(thetas[1]+thetas[2]))+L3*(cos(thetas[1]+thetas[2]))+L2*cos(thetas[1]);

    X = cos(thetas[0])*teta_parcial;
    Y = sin(thetas[0])*teta_parcial;
    Z = L4*(cos(thetas[3])*sin(thetas[1]+thetas[2])+sin(thetas[3])*cos(thetas[1]+thetas[2]))+L1+L2*sin(thetas[1])+L3*sin(thetas[1]+thetas[2]);

    //    printf("cos(thetas[0]) = %lf \n" , cos(thetas[0]));


    coords[0]=X;
    coords[1]=Y;
    coords[2]=Z;

}

