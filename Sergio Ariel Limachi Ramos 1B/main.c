#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20

int main()
{
    int opcion=0;
    int id[TAM]= {1,2,3,4};
    int datoABuscar;
    int resBus;
    int aux;
    int i;
    //eprop propietarios[TAM];
    char nombre[TAM][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[TAM][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[TAM][20]= {"mitre","urquiza","belgrano","alsina"};
    inizArray(id,TAM,-1,4);

    do{
            printf("ID   Nombre Apellido   NR TARJETA  DIRECCION \n");
            for(i=0;i<TAM;i++)
            {
                if(id[i]!=-1)
                {
                    printf("%d   %s        %s      %s    \n",id[i] ,nombre[i] ,tarjeta[i],direccion[i]);
                }
            }
        printf("1- Alta de Propietario \n 2- Modificar Propietario  \n 3- Baja de Propietario \n 4-Salir \n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                resBus=busPrimeraOcurrencia(id,TAM,-1);
                id[resBus]=resBus+1;
                solCadena("\n Indique su Nombre y APellido",nombre[resBus]);
                solCadena(" \n indique Su Direccion: ",direccion[resBus]);
                solCadena("\n Indique el Numero de Targeta de Credito: ",tarjeta[resBus]);
                break;
            case 2:
                datoABuscar=ingrInt("indique el ID de Usuario");
                resBus=busPrimeraOcurrencia(id,TAM,datoABuscar);
                if(resBus==-1)
                {
                    printf("\n el Usuario NO existe \n");
                }
                else
                {
                    aux=ingrInt("\n Indique el Nuevo Numero de La Tarjeta de Credito: ");
                    datoABuscar=ingrInt("-esta Seguro que desea Efectuar el Cambio de Nro de Tajeta de Credito?- \n 1- SI \n 2-NO");
                    if(datoABuscar==1)
                    {
                        strcpy(tarjeta[resBus],aux);
                    }
                    else if(datoABuscar==0)
                    {
                        break;
                    }
                }
                break;
            case 3:
                datoABuscar=ingrInt("indique el ID de Usuario");
                resBus=busPrimeraOcurrencia(id,TAM,datoABuscar);
                if(resBus==-1)
                {
                    printf("\n el Usuario NO existe \n");
                }

                else
                {
                    datoABuscar=ingrInt(" \n Confirmar Baja de Usuario \n 1-si \n 2-NO ");
                    if(datoABuscar==1)
                    {
                        id[resBus]=-1;
                        strcpy(tarjeta[resBus]," ");
                        strcpy(nombre[resBus]," ");
                        strcpy(direccion[resBus]," ");
                    }

                }
                break;
        }

    }while(opcion!=4);
    return 0;
}
