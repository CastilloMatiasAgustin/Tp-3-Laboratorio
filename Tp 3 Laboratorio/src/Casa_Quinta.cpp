#include "Casa_Quinta.h"

Casa_Quinta::Casa_Quinta(bool q,bool p)
{
    Quincho=q;
    Pileta=p;
}
void Casa_Quinta::Carga()
{
    Casa::Carga();
    cout<< "Ingrese 1 si se posee quincho o 0 si no posee: "<<endl;
    cin>>Quincho;
    cout<< "Ingrese 1 si se posee Pileta o 0 si no posee: "<<endl;
    cin>>Pileta;
}
void Casa_Quinta::Mostrar()
{
    Casa::Mostrar();
    cout<< "Quincho: ";
    if (getquincho()==1)
    {
        cout<< " Posee"<<endl;
    }
    else
    {
        cout<< " No posee"<<endl;
    }
    cout<< "Pileta: ";
    if (getpileta()==1)
    {
        cout<< "Posee"<<endl;
    }
    else
    {
        cout<< "No posee"<<endl;
    }
}
bool Casa_Quinta::getquincho()
{
    return Quincho;
}
bool Casa_Quinta::getpileta()
{
    return Pileta;
}
void Casa_Quinta::setquincho(bool q)
{
    Quincho=q;
}
void Casa_Quinta::setpileta(bool p)
{
    Pileta=p;
}

