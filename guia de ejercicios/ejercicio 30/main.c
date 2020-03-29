#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "utn.h"

int main()
{
    int primero;
    int segundo;
    int tercero;



    primero = getInt("Ingrese limite del intervalo: ");

    segundo = getInt("Ingrese otro limite del intervalo: ");

    tercero = getInt("Ingrese a saber si pertenece a dicho intervalo: ");


    if(primero > segundo)

    {

        int aux;

        aux = primero;
        primero = segundo;
        segundo = aux;




    }
    for(int i = primero; i<= segundo; i++)
    {


        if(tercero == i)
        {

            printf("El numero %d esta en el intervalo entre %d y %d",i,primero,segundo);
            break;
        }




    }






    return 0;
}
