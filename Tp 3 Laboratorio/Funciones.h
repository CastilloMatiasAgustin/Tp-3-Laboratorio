#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Casa.h"
#include "Casa_Quinta.h"
#include "Departamento.h"
#include "Locales.h"
#include "Terrenos.h"

/*void cargavectores1(Casa *casita, int tam)
{
    for (int i=0;i<tam;i++)
    {
        casita[i].Carga();
    }
}

void cargavectores2(Casa_Quinta *casaq, int tam)
{
    for (int i=0;i<tam;i++)
    {
        casaq[i].Carga();
    }
}

void cargavectores3(Departamento *depa, int tam)
{
    for (int i=0;i<tam;i++)
    {
        depa[i].Carga();
    }
}

void cargavectores4(Locales *loca, int tam)
{
    for (int i=0;i<tam;i++)
    {
        loca[i].Carga();
    }
}

void cargavectores5(Terrenos *terre, int tam)
{
    for (int i=0;i<tam;i++)
    {
        terre[i].Carga();
    }
}*/

void buscarindice(Casa casita,int indice)
{
    if (casita.getCodinmueble()==indice)
    {
        casita.Mostrar();
    }
    else
    {
        cout<< "Inmueble no encontrado"<<endl;
    }
}

void carganuevoinmueble(Casa casita,Casa_Quinta casaq,Departamento depa,Locales loca,Terrenos terre)
{
    bool volver=false;
    int op;
    while (volver!=true)
    {
        system("cls");
        cout<< "------------------------------------------------------"<<endl;
        cout<< "---------------CARGA DE NUEVO INMUEBLE----------------"<<endl;
        cout<< "-----------------------1) CASA -----------------------"<<endl;
        cout<< "-------------------2) CASA QUINTA --------------------"<<endl;
        cout<< "-------------------3) DEPARTAMENTO -------------------"<<endl;
        cout<< "-----------------------4)LOCAL------------------------"<<endl;
        cout<< "----------------------5)TERRENO-----------------------"<<endl;
        cout<< "---------------6)VOLVER AL MENU PRINCIPAL-------------"<<endl;
        cout<< "------------------------------------------------------"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            /*int cant;
            cout<< "Ingrese la cant de inmuebles que desea cargar: "<<endl;
            cin>>cant;
            Casa *vec=NULL;
            vec=new Casa[cant];
            if (vec==NULL)
            {
                cout<< "No hay memoria para la cantidad de inmuebles a cargar"<<endl;
            }*/
            casita.Carga();
            break;
        case 2:
            system("cls");
            /*cout<< "Ingrese la cant de inmuebles que desea cargar: "<<endl;
            cin>>cant;
            cargavectores2(casaq,cant);*/
            casaq.Carga();
            break;
        case 3:
            system("cls");
            /*cout<< "Ingrese la cant de inmuebles que desea cargar: "<<endl;
            cin>>cant;
            cargavectores3(depa,cant);*/
            depa.Carga();
            break;
        case 4:
            system("cls");
            /*cout<< "Ingrese la cant de inmuebles que desea cargar: "<<endl;
            cin>>cant;
            cargavectores4(loca,cant);*/
            loca.Carga();
            break;
        case 5:
            system("cls");
            /*cout<< "Ingrese la cant de inmuebles que desea cargar: "<<endl;
            cin>>cant;
            cargavectores5(terre,cant);*/
            terre.Carga();
            break;
        case 6:
            system("cls");
            volver=true;
            break;
        }
        system ("pause");
    }
}

void MuestrainmueblesAlquiler(Casa casita,Casa_Quinta casaq,Departamento depa,Locales loca,Terrenos terre)
{
    bool volver=false;
    int op;
    while (volver!=true)
    {
        system("cls");
        cout<< "------------------------------------------------------"<<endl;
        cout<< "--------------- INMUEBLES EN ALQUILER ----------------"<<endl;
        cout<< "-----------------------1) CASA -----------------------"<<endl;
        cout<< "-------------------2) CASA QUINTA --------------------"<<endl;
        cout<< "-------------------3) DEPARTAMENTO -------------------"<<endl;
        cout<< "-----------------------4)LOCAL------------------------"<<endl;
        cout<< "----------------------5)TERRENO-----------------------"<<endl;
        cout<< "---------------6)VOLVER AL MENU PRINCIPAL-------------"<<endl;
        cout<< "------------------------------------------------------"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            int indice;
            cout<< "Ingrese el codigo de inmueble a buscar: "<<endl;
            cin>>indice;
            buscarindice(casita,indice);
            break;
        case 2:
            system("cls");
            casaq.Mostrar();
            break;
        case 3:
            system("cls");
            depa.Mostrar();
            break;
        case 4:
            system("cls");
            loca.Mostrar();
            break;
        case 5:
            system("cls");
            terre.Mostrar();
            break;
        case 6:
            system("cls");
            volver=true;
            break;
        }
        system ("pause");
    }
}


void MuestrainmueblesVenta(Casa casita,Casa_Quinta casaq,Departamento depa,Locales loca,Terrenos terre)
{
    bool volver=false;
    int op;
    while (volver!=true)
    {
        system("cls");
        cout<< "------------------------------------------------------"<<endl;
        cout<< "---------------CARGA DE NUEVO INMUEBLE----------------"<<endl;
        cout<< "-----------------------1) CASA -----------------------"<<endl;
        cout<< "-------------------2) CASA QUINTA --------------------"<<endl;
        cout<< "-------------------3) DEPARTAMENTO -------------------"<<endl;
        cout<< "-----------------------4)LOCAL------------------------"<<endl;
        cout<< "----------------------5)TERRENO-----------------------"<<endl;
        cout<< "---------------6)VOLVER AL MENU PRINCIPAL-------------"<<endl;
        cout<< "------------------------------------------------------"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            casita.Mostrar();
            break;
        case 2:
            system("cls");
            casaq.Mostrar();
            break;
        case 3:
            system("cls");
            depa.Mostrar();
            break;
        case 4:
            system("cls");
            loca.Mostrar();
            break;
        case 5:
            system("cls");
            terre.Mostrar();
            break;
        case 6:
            system("cls");
            volver=true;
            break;
        }
        system ("pause");
    }
}

#endif // FUNCIONES_H_INCLUDED
