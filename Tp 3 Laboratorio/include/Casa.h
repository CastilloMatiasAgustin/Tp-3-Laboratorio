#ifndef CASA_H
#define CASA_H
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
class Casa
{
protected:
    int Codinmueble;
    char Calle[50];
    char Numero[6];
    char Localidad[50];
    int AntConstruccion;
    float SupTotal;
    float Supcubierta;
    int Habitaciones;
    float PrecioAlq;
    float PrecioVent;
    char ApellidoDuenio[50];
    char NombreDuenio[50];
    char DniDuenio [50];
    char TelDuenio[50];
public:
    Casa(int codinm=0,const char *cal="0",const char *Num="0",const char *Loca="0",int antconst=0,float supT=0,float supC=0,int Habi=0,float preA=0,float preV=0,const char *ape="0",const char *nom="0",const char *dn="0",const char *tel="0");
    void Carga();
    void Mostrar();
    int getCodinmueble();
    char *getCalle();
    char *getNumero();
    char *getLocalidad();
    int getAntConstruccion();
    float getSupTotal();
    float getSupcubierta();
    int getHabitaciones();
    float getPrecioAlq();
    float getPrecioVent();
    char *getApellidoDuenio();
    char *getNombreDuenio();
    char *getDniDuenio();
    char *getTelDuenio();
    void setCodinmueble(int);
    void setCalle(char*);
    void setNumero(char*);
    void setLocalidad(char*);
    void setAntConstruccion(int);
    void setSupTotal(float);
    void setSupcubierta(float);
    void setHabitaciones(int);
    void setPrecioAlq(float);
    void setPrecioVent(float);
    void setApellidoDuenio(char*);
    void setNombreDuenio(char*);
    void setDniDuenio(char*);
    void setTelDuenio(char*);
};

#endif // CASA_H
