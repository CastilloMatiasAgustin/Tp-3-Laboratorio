#ifndef TERRENOS_H
#define TERRENOS_H
#include "Casa.h"

class Terrenos:public Casa
{
private:
    float Anchomts;
    float Largomts;
    float Superficie;
public:
    Terrenos(float a=0,float l=0,float s=0);
    void Carga();
    void Mostrar();
    float getAnchomts();
    float getLargomts();
    float getSuperficie();
    void  setAnchomts(float);
    void  setLargomts(float);
    void  setSuperficie(float);
};

#endif // TERRENOS_H
