#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{

    char rta;


    rta = getChar("Desea continua? S/N: ");

    switch(rta)
    {

    case 'S':
                printf("\n S es correcto");

        break;

    case 'N':
              printf(" \n N es correcto");
        break;
    default:
        printf(" \n Respuesta incorrecta");
    }



    return 0;
}
