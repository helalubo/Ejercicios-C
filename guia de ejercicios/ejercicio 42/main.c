#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "utn.h"
#include "maxAndMin.h"

int main()
{

    typedef char cadena[50];

    cadena nombre [50];
    cadena apellido [50];
    int altura;
    int alturas[100];
    int i = 0;
    int alturaMax = INT_MIN;
    cadena nombreAlumnoMasAlto;
    cadena ApellidoAlumnoMasAlto;

    char rta;



    do
    {
        rta = getChar("Desea ingresar altura de alumno? s/n");


        if(rta == 's')
        {

            printf("\nIngrese nombre del alumno: ");
            scanf("%s",nombre[i]);



            printf("\nIngrese apellido del alumno: ");
            scanf("%s",apellido[i]);

            fflush(stdin);

            altura = getInt("\nIngrese altura del alumno: ");
            alturas[i] = altura;

            i++;




        }
        else
        {

            printf("Saliendo de la aplicacion\n resultados: \n \n ");

        }


    }
    while(rta == 's');

    alturaMax = getMax(alturas,alturaMax,i);

    for(int k = 0; k< i; k++)
    {

        if(alturas[k] == alturaMax)
        {

            strcpy(nombreAlumnoMasAlto,nombre[k]);

            strcpy(ApellidoAlumnoMasAlto,apellido[k]);


        }

    }

    printf("El alumno mas alto es %s %s con %d cm",nombreAlumnoMasAlto,ApellidoAlumnoMasAlto,alturaMax);


    return 0;
}
