#include "Locales.h"

Locales::Locales(float sup,bool z)
{
    SupEstacionamiento=sup;
    ZonaComercial=z;
}
void Locales::Carga()
{
    Casa::Carga();
    cout<< "Ingrese la superficie del estacionamiento por metro caudrado: "<<endl;
    cin>>SupEstacionamiento;
    cout<< "Ingrese 1 si la zona es comercial o 0 si no lo es: "<<endl;
    cin>>ZonaComercial;
}
void Locales::Mostrar()
{
    Casa::Mostrar();
    cout<< "Superficie del estacionamiento por metro caudrado: ";
    cout<<SupEstacionamiento<<endl;
    cout<< "Zona: ";
    if(getZonaComercial()==1)
    {
        cout<< "Comercial"<<endl;
    }
    else
    {
        cout<< "No Comercial"<<endl;
    }
}
float Locales::getSupEstacionamiento()
{
    return SupEstacionamiento;
}
bool  Locales::getZonaComercial()
{
    return ZonaComercial;
}
void  Locales::setSupEstacionamiento(float sup)
{
    SupEstacionamiento=sup;
}
void  Locales::setZonaComercial(bool z)
{
    ZonaComercial=z;
}
