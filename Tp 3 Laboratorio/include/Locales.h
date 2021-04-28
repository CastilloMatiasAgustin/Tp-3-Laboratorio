#ifndef LOCALES_H
#define LOCALES_H
#include "Casa.h"

class Locales:public Casa
{
private:
    float SupEstacionamiento;
    bool ZonaComercial;
public:
    Locales(float sup=0,bool z=false);
    void Carga();
    void Mostrar();
    float getSupEstacionamiento();
    bool  getZonaComercial();
    void  setSupEstacionamiento(float);
    void  setZonaComercial(bool);

};

#endif // LOCALES_H
