#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "utn.h"

#define MES 30


int main()
{

    int agua[MES];
    int max = INT_MIN;
    int min = INT_MAX;
    int totalMes = 0;

    int diaMayor;
    int diaMenor;

    float promedio;


    for(int i = 0; i< MES; i++)
    {


        agua[i] = getInt("Ingrese mililitros del dia:");

        totalMes += agua[i];


        if(agua[i] > max )
        {

            max = agua[i];

            diaMayor = i+1;


        }

        if(agua[i] < min )
        {

            min = agua[i];

            diaMenor = i+1 ;


        }






    }
    promedio = (float)totalMes/MES;

    printf("El dia de mayor lluvia fue el dia %d  con %d \n El dia de menor lluvia fue el dia %d con %d \n El promedio de lluevia mensual fue de %.2f", diaMayor,max, diaMenor,min,promedio );








    return 0;
}
