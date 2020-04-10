#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 10
#define VALORDEINICIO -1

#include "arrays.h"






int main()
{
    int numeros[CANTIDAD];
    int max;
    int min;
    int cantidadCargada;
    int cantidadVacia;
    int primerLugarLibre;
    float promedioDeArray;




    inicializarArray(numeros,CANTIDAD,-1);
    numeros[1] = 27;
    numeros[0] = 24;

    mostrarArray(numeros,CANTIDAD);
    cantidadCargada=  CantidadCargadaArray(numeros,CANTIDAD,VALORDEINICIO);
    cantidadVacia = CantidadNoCargadaArray(numeros,CANTIDAD,VALORDEINICIO);
    max = retornarMayor(numeros,CANTIDAD);
    min = retornarMenor(numeros,CANTIDAD,VALORDEINICIO);
    promedioDeArray = promedio(numeros,CANTIDAD,VALORDEINICIO);

    primerLugarLibre = indiceLibre(numeros,CANTIDAD);

    if(primerLugarLibre == -1)
    {

        printf("\nNo hay lugar");

    }
    else
    {

        printf("\nEl primer lugar libre es: %d", primerLugarLibre);
    }
    printf("\nEl mayor es: %d",max);
    printf("\nEl menor es: %d",min);
    printf("\n la cantidad vacia es: %d",cantidadVacia);
     printf("\n la cantidad cargada es: %d",cantidadCargada);
    printf("\n el promedio es de: %.2f",promedioDeArray);


    return 0;
}

