#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#include "utn.h"
#include "validar.h"
#include "numbers.h"
#include "search.h"


int main()
{
    typedef char cadena [20];
    cadena fecha[365];
    int temMax[365];
    int temMin[365];
    int i = 0;
    char rta;
    int max = INT_MIN;
    int min = INT_MAX;

    int indiceTemMax ;
    int indiceTemMin ;

    char fechaTemMax[20];
    char fechaTemMin[20];


    printf("*****************Temperaturas*****************\n");

    do
    {
        rta = verificarSN("Desea ingresar temperatura de algun dia? s/n");

        if(rta == 's')
        {
            getString(&fecha[i],"\nIngrese Fecha dd/mm: ");


            temMax[i] = getInt("\nIngrese temperatura maxima en grados C de ese dia: ");


            temMin[i] = getInt("\nIngrese temperatura minima en grados C de ese dia: ");

           // printf("\nDia ingresado correctamente %s , %.2f, %.2f", fecha[i],temMax[i],temMin[i]);
            i++;


        }
        if(rta == 'n')
        {

            printf("\nUsted a terminado de cargar temperaturas\n");


        }


    }
    while(rta == 's');

    max = getMax(temMax,max,i);

    min = getMin(temMin,min,i);



indiceTemMax = searchIndex(max,temMax,i);



 printf("El dia mas caluroso fue el dia %s con una temperatura de %d\n",fecha[indiceTemMax],max);


indiceTemMin = searchIndex(min,temMin,i);


 printf("El dia mas frio fue el dia %s con una temperatura de %d\n",fecha[indiceTemMin],min);





    return 0;
}





