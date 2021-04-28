#ifndef CASA_QUINTA_H
#define CASA_QUINTA_H
#include "Casa.h"


class Casa_Quinta: public Casa
{
private:
    bool Quincho;
    bool Pileta;
public:
    Casa_Quinta(bool q=false,bool p=false);
    void Carga();
    void Mostrar();
    bool getquincho();
    bool getpileta();
    void setquincho(bool);
    void setpileta(bool);
};

#endif // CASA_QUINTA_H
