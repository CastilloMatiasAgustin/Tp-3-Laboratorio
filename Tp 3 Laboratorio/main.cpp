#include <iostream>
using namespace std;
#include "Funciones.h"

int main()
{
    bool salir=false;
    int op;
    Casa casita;
    Casa_Quinta casaq;
    Departamento depa;
    Locales loca;
    Terrenos terre;
    while (salir!=true)
    {
        system("cls");
        cout<< "-----------------------------------------------------"<<endl;
        cout<< "----------Bienvenido a la app de inmuebles!----------"<<endl;
        cout<< "--------------1) Cargar Nuevo inmueble---------------"<<endl;
        cout<< "--------------2) Inmuebles en Alquiler---------------"<<endl;
        cout<< "---------------3) Inmuebles en Venta-----------------"<<endl;
        cout<< "-----------------------4)Salir-----------------------"<<endl;
        cout<< "-----------------------------------------------------"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            carganuevoinmueble(casita,casaq,depa,loca,terre);
            break;
        case 2:
            system("cls");
            MuestrainmueblesAlquiler(casita,casaq,depa,loca,terre);
            break;
        case 3:
            system("cls");
            MuestrainmueblesVenta(casita,casaq,depa,loca,terre);
            break;
        case 4:
            salir=true;
            break;
        }
        system("pause");
    }
    return 0;
}
