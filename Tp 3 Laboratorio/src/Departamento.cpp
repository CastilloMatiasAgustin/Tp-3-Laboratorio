#include "Departamento.h"
using namespace std;
Departamento::Departamento(const char *pi,const char *de,float su,bool co,float ex)
{
    strcpy(piso,pi);
    strcpy(dpto,de);
    SuperficieBalcon=su;
    cochera=co;
    expensa=ex;
}
void Departamento::Carga()
{
    Casa::Carga();
    cin.ignore();
    cout<< "Ingrese el piso del departamento: "<<endl;
    cin.getline(piso,3);
    cout<< "Ingrese La letra del departamento: "<<endl;
    cin.getline(dpto,3);
    cout<< "Ingrese la superficie del balcon por metro cuadrado: "<<endl;
    cin>>SuperficieBalcon;
    cout<< "Ingrese 1 si el dpto tiene cochera o 0 si no posee: "<<endl;
    cin>>cochera;
    cout<< "Ingrese las expensas: "<<endl;
    cin>>expensa;
}
void Departamento::Mostrar()
{
    Casa::Mostrar();
    cout<< "Piso del departamento: ";
    cout<<piso<<endl;
    cout<< "Letra del departamento: ";
    cout<<dpto<<endl;
    cout<< "Superficie del balcon por metro cuadrado: ";
    cout<<SuperficieBalcon<<endl;
    cout<< "Cochera: ";
    if (getcochera()==1)
    {
        cout<< "Posee"<<endl;
    }
    else
    {
        cout<< "No posee"<<endl;
    }
    cout<< "Expensas: ";
    cout<<expensa<<endl;
}
char *Departamento::getpiso()
{
    return piso;
}
char *Departamento::getdpto()
{
    return dpto;
}
float Departamento::getSuperficieBalcon()
{
    return SuperficieBalcon;
}
bool Departamento::getcochera()
{
    return cochera;
}
float Departamento::getexpensa()
{
    return expensa;
}
void Departamento::setpiso(char *p)
{
    strcpy(piso,p);
}
void Departamento::setdpto(char *d)
{
    strcpy(dpto,d);
}
void Departamento::setSuperficiebalcon(float s)
{
    SuperficieBalcon=s;
}
void Departamento::setcochera(bool c)
{
    cochera=c;
}
void Departamento::setexpensa(float e)
{
    expensa=e;
}
