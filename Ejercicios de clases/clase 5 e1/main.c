#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/*
Solicitar al usuario 5 números, almacenar estos en un array
de enteros, permitir listarlos por pantalla indicando el máximo,
 el mínimo y el promedio. Permitir Modificar el valor de cualquiera
  de los números
cargados indicando el índice del mismo y su nuevo valor.

*/

#define CANT 5

#include "utn.h"


#include "validate.h"
#include "search.h"
#include "arrays.h"



int main()
{

    int numeros[CANT];
    int max = INT_MIN;
    int min = INT_MAX;

    float promedioNumeros;
    char rta;
    int opc;
    int nuevoValor;

    for(int i = 0 ; i<CANT; i++)
    {

        numeros[i] = getInt("\nIngrese numero: ");


    }
       mostrarArray(numeros,CANT);

    do
    {

        rta = verificarSN("\nDesea Configurar un numero?");

        if(rta == 's')
        {

            mostrarArray(numeros,CANT);

            opc =  getInt("\nIngrese posicion del numero que desea cambiar: ");


            nuevoValor = getInt("\n Ingrese nuevo valor: ");

            modificarPorIndex(opc,numeros,nuevoValor);

            mostrarArray(numeros,CANT);

        }

        if(rta == 'n'){

        max = retornarMayor(numeros,CANT);
        min = retornarMenor(numeros,CANT,-1);
        promedioNumeros = promedioDeArray(numeros,CANT,-1);


        }



    }
    while(rta == 's');


printf("\n El maximo es: %d \n El minimo es: %d \n y el promedio es de: %.2f",max,min,promedioNumeros);














    return 0;
}

