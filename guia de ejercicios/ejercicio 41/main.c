#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#include "utn.h"
#include "maxAndMin.h"

#define TAM 5



int main()
{

    int num[5];
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i< TAM; i++)
    {

        num[i] = getInt("Ingrese numero: ");

    }


    max=  getMax(num,max,TAM);

    min=   getMin(num,min,TAM);



    printf("El maximo es: %d \n el minimo es: %d",max,min);


    return 0;
}


