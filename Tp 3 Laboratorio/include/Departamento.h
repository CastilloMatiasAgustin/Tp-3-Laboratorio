#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Casa.h"

class Departamento: public Casa
{
    private:
        char piso[3];
        char dpto[3];
        float SuperficieBalcon;
        bool cochera;
        float expensa;

    public:
        Departamento(const char *pi="0",const char *de="0",float su=0,bool co=false,float ex=0);
        void Carga();
        void Mostrar();
        char *getpiso();
        char *getdpto();
        float getSuperficieBalcon();
        bool getcochera();
        float getexpensa();
        void setpiso(char *);
        void setdpto(char *);
        void setSuperficiebalcon(float);
        void setcochera(bool);
        void setexpensa(float);
};

#endif // DEPARTAMENTO_H
