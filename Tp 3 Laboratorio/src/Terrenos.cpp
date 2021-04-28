#include "Terrenos.h"

Terrenos::Terrenos(float a,float l,float s)
{
    Anchomts=a;
    Largomts=l;
    Superficie=s;
}
void Terrenos::Carga()
{
    Casa::Carga();
    cout<< "Ingrese el Ancho del terreno en Mts: "<<endl;
    cin>>Anchomts;
    cout<< "Ingrese el Largo en Mts: "<<endl;
    cin>>Largomts;
    cout<< "Ingrese la Superficie en Mts Cuadrados: "<<endl;
    cin>>Superficie;
}
void Terrenos::Mostrar()
{
    Casa::Mostrar();
    cout<< "Ancho del terreno en Mts: "<<endl;
    cout<<Anchomts;
    cout<< "Largo del terreno en Mts: "<<endl;
    cout<<Largomts;
    cout<< "Superficie del terreno en Mts Cuadrados: "<<endl;
    cout<<Superficie;
}
float Terrenos::getAnchomts()
{
    return Anchomts;
}
float Terrenos::getLargomts()
{
    return Largomts;
}
float Terrenos::getSuperficie()
{
    return Superficie;
}
void  Terrenos::setAnchomts(float A)
{
    Anchomts=A;
}
void  Terrenos::setLargomts(float L)
{
    Largomts=L;
}
void  Terrenos::setSuperficie(float S)
{
    Superficie=S;
}
