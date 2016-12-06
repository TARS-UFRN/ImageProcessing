#ifndef MESSENGER_H
#define MESSENGER_H
#include "ufrn_al5d.h"


class messenger
{
public:
    messenger();
    void connect(void);
    void desconnect(void);
    void send(void);
    void goToHome(void);


    double mes_base;
    double mes_ombro;
    double mes_cotovelo;
    double mes_punho;
    double mes_garra;
    int mes_control; // nada=7, base=0,ombro=1, contovelo=2, punho=3, garra=4

private:

    ufrn_al5d arm;
    int serial_fd;
    char *comando;

};

#endif // MESSENGER_H
