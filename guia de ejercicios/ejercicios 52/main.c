#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utn.h"
#include "validate.h"

#define TAM 50

typedef char cadena[50];

typedef struct
{

    int id;
    cadena apellido;
    cadena nombre;
    int edad;
    int deporte;
} eSocio;

int main()
{


    int i =0;
    eSocio socios[TAM];


    int contT = 0;
    int contP = 0;
    int edadesT = 0;
    int edadesP = 0;

    float promedioEdadT;
    float promedioEdadP;
    char rta;

    do
    {

        rta = getChar("\n Desea ingresar un usuario s/n: ");

        if(rta == 's')
        {

            eSocio socio;

            socio.id = i;
            getString(&socio.nombre,"\nIngrese nombre del socio: ");
            getString(&socio.apellido,"\nIngrese apellido del socio: ");
            socio.edad = getInt("\nIngrese Edad del socio: ");
            socio.deporte = getInt("\nIngrese Deporte \n 1-tenis\n 2-paddle: ");

            socios[i] = socio;

            i++;

            printf("\nSocio ingresado con exito.\n");










        }
        if(rta == 'n')
            printf("Usted a deseado dejar de agregar socios.\n");




    }
    while(rta == 's');


    for(int k = 0; k<i; k++)
    {

        if(socios[k].deporte == 1)
        {

            contT++;
            edadesT += socios[k].edad;
        }
       if(socios[k].deporte == 2)
        {

            contP++;
            edadesP += socios[k].edad;
        }



    }

    printf("La cantidad de socios que practica tenis es de %d \n",contT);
    printf("La cantidad de socios que practica paddle es de %d\n",contP);


    promedioEdadP = edadesP/contP;
    promedioEdadT = edadesT/contT;


    printf("El promedio de los que juegan al paddle es de %.2f y el promedio de los que juegan al tenis es de %.2f \n",promedioEdadP,promedioEdadT);









    return 0;
}
