#include "Casa.h"
using namespace std;

Casa::Casa(int codinm,const char *cal,const char *Num,const char *Loca,int antconst,float supT,float supC,int Habi,float preA,float preV,const char *ape,const char *nom,const char *dn,const char *tel)
{
    Codinmueble=codinm;
    strcpy(Calle,cal);
    strcpy(Numero,Num);
    strcpy(Localidad,Loca);
    AntConstruccion=antconst;
    SupTotal=supT;
    Supcubierta=supC;
    Habitaciones=Habi;
    PrecioAlq=preA;
    PrecioVent=preV;
    strcpy(ApellidoDuenio,ape);
    strcpy(NombreDuenio,nom);
    strcpy(DniDuenio,dn);
    strcpy(TelDuenio,tel);
}
void Casa::Carga()
{
    cout << "Ingrese el codigo de inmueble: "<<endl;
    cin>>Codinmueble;
    cin.ignore();
    cout<< "Ingrese la calle: "<<endl;
    cin.getline(Calle,50);
    cout<< "Ingrese la altura: "<<endl;
    cin.getline(Numero,6);
    cout<< "Ingrese la Localidad:"<<endl;
    cin.getline(Localidad,50);
    cout<< "Ingrese la Antiguedad de la construccion: "<<endl;
    cin>>AntConstruccion;
    cout<< "Ingrese la Superficie total por metro cuadrado: "<<endl;
    cin>>SupTotal;
    cout<< "Ingrese la Superficie Cubierta por metro cuadrado: "<<endl;
    cin>>Supcubierta;
    cout<< "Ingrese la cantidad de habitaciones: "<<endl;
    cin>>Habitaciones;
    cout<< "Ingrese el precio del alquiler: "<<endl;
    cin>>PrecioAlq;
    cout<< "Ingrese el precio de venta: "<<endl;
    cin>>PrecioVent;
    cin.ignore();
    cout<< "Ingrese el Apellido del duenio: "<<endl;
    cin.getline(ApellidoDuenio,50);
    cout<< "Ingrese el Nombre del duenio: "<<endl;
    cin.getline(NombreDuenio,50);
    cout<< "Ingrese el DNI del duenio: "<<endl;
    cin.getline(DniDuenio,50);
    cout<< "Ingrese el telefono del duenio: "<<endl;
    cin.getline(TelDuenio,50);
}
void Casa::Mostrar()
{
    cout << "Codigo de inmueble: ";
    cout <<Codinmueble<<endl;
    cout<< "Calle: ";
    cout <<Calle<<endl;
    cout<< "Altura: ";
    cout <<Numero<<endl;
    cout<< "Localidad:";
    cout <<Localidad<<endl;
    cout <<"Antiguedad de la construccion: ";
    cout <<AntConstruccion<<endl;
    cout << "Superficie total por metro cuadrado: ";
    cout <<SupTotal<<endl;
    cout <<"Superficie Cubierta por metro cuadrado: ";
    cout <<Supcubierta<<endl;
    cout <<"Cantidad de habitaciones: ";
    cout <<Habitaciones<<endl;
    cout << "Precio del alquiler: ";
    cout <<PrecioAlq<<endl;
    cout <<"Precio de venta: ";
    cout <<PrecioVent<<endl;
    cout << "Apellido del duenio: ";
    cout <<ApellidoDuenio<<endl;
    cout << "Nombre del duenio: ";
    cout <<NombreDuenio<<endl;
    cout<< "DNI del duenio: ";
    cout<< DniDuenio<<endl;
    cout <<"Telefono del duenio: ";
    cout <<TelDuenio<<endl;
}

int Casa::getCodinmueble()
{
    return Codinmueble;
}
char *Casa::getCalle()
{
    return Calle;
}
char *Casa::getNumero()
{
    return Numero;
}
char *Casa::getLocalidad()
{
    return Localidad;
}
int Casa::getAntConstruccion()
{
    return AntConstruccion;
}
float Casa::getSupTotal()
{
    return SupTotal;
}
float Casa::getSupcubierta()
{
    return Supcubierta;
}
int Casa::getHabitaciones()
{
    return Habitaciones;
}
float Casa::getPrecioAlq()
{
    return PrecioAlq;
}
float Casa::getPrecioVent()
{
    return PrecioVent;
}
char *Casa::getApellidoDuenio()
{
    return ApellidoDuenio;
}
char *Casa::getNombreDuenio()
{
    return NombreDuenio;
}
char *Casa::getDniDuenio()
{
    return DniDuenio;
}
char *Casa::getTelDuenio()
{
    return TelDuenio;
}

void Casa::setCodinmueble(int cod)
{
    Codinmueble=cod;
}
void Casa::setCalle(char* c)
{
    strcpy(Calle,c);
}
void Casa::setNumero(char* num)
{
    strcpy(Numero,num);
}
void Casa::setLocalidad(char* l)
{
    strcpy(Localidad,l);
}
void Casa::setAntConstruccion(int c)
{
    AntConstruccion=c;
}
void Casa::setSupTotal(float s)
{
    SupTotal=s;
}
void Casa::setSupcubierta(float s)
{
    Supcubierta=s;
}
void Casa::setHabitaciones(int h)
{
    Habitaciones=h;
}
void Casa::setPrecioAlq(float p)
{
    PrecioAlq=p;
}
void Casa::setPrecioVent(float p)
{
    PrecioVent=p;
}
void Casa::setApellidoDuenio(char* a)
{
    strcpy(ApellidoDuenio,a);
}
void Casa::setNombreDuenio(char*n)
{
    strcpy(NombreDuenio,n);
}
void Casa::setDniDuenio(char* d)
{
    strcpy(DniDuenio,d);
}
void Casa::setTelDuenio(char* t)
{
    strcpy(TelDuenio,t);
}
