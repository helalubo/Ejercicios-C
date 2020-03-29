
#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

int main()
{
    int entero;
    float flotante;
    char caracter;

    entero = getInt("Ingrese entero: ");
    flotante = getFloat("Ingrese Flotante: ");
    caracter = getChar("Ingrese caracter: ");


    printf("\n entero %d \n flotante: %f \n caracter: %c ",entero,flotante,caracter);

    return 0;
}
