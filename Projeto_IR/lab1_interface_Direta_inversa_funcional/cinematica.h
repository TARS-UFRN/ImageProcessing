#ifndef CINEMATICA_H
#define CINEMATICA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define L1 68
#define L2 146
#define L3 188
#define L4 85

#define CALIB_X -99
#define CALIB_Y -99
#define CALIB_Z -22.5

#define RAD M_PI/180.0
#define	GRAD 180.0/M_PI


class cinematica
{
public:
    cinematica();

    void getCinematicaInversa(double x, double y, double z, double *thetas);
    void getCinematicaDireta(double *thetas, double *coords);

    double x;
    double y;
    double z;


private:

};

#endif // CINEMATICA_H
