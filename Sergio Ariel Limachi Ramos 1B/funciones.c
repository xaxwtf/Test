#include <stdio.h>
#include "funciones.h"
int ingrInt(char mensaje[])
{
    char aux[50];
    printf(mensaje);
    scanf("%d",&aux);
    return aux;

}
void inizArray(int vector[],int tam,int valor,int desde)
{
    int i;
    for(i=desde; i<tam; i++)
    {
        vector[i]=valor;
    }
}
void solCadena(char mensaje[],char dato[])
{
    char aux[264];
    printf(mensaje);
    fflush(stdin);
    gets(aux);
    strcpy(dato,aux);
}
int busPrimeraOcurrencia(int id[],int tam, int valor)
{
    int i;
    int index=-1;
    for(i=0;i<tam;i++)
    {
        if(id[i]==valor)
        {
           return i;
        }
    }
    return index;
}
/*void mostrarDatosCarg(int id[],char vec2[],char vec3[],char vec4[] ,int tam, int condicional)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(id[i]!=condicional)
        {
            printf("%d   %s        %s      %s    \n",id[i] , vec2[i] ,vec3[i],vec4[i]);
        }
    }
}*/
int esTarjeta(char vec[],int tam)
{
    int i;
    int aux=0;
    for(i=0;i<tam;i++)
    {
        if((vec[i]<0||vec[i]>9)&&(vec[i]!='-'))
        {
            return 1;
        }
    }
    return aux;
}
