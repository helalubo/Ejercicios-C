
/**
*En una empresa se carga por teclado los siguientes datos:
 *nombre del empleado, nacionalidad (A argentino, E -extranjero),
 *estudios cursados (1- primaria, 2 - secundario, 3 - universitario)
 *y antigüedad. Se pide emitir un listado con aquellos empleados que
 * sean extranjeros, tengan estudios universitarios y tengan una antigüedad igual
 * o mayor a 20 años y por último indicar cuantos son
 *y qué porcentaje son respecto del total de empleados de la empresa

 */




#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "utn.h"


int main()
{

    char nombreEmpleado[50];
    char nacionalidad;
    int estudios;
    int antiguedad;
    int contCondicional = 0;
    int contTotal =0;

    typedef char cadenaCaracteres [50];

    cadenaCaracteres nombresCondicional [500];






    float porcentaje;
    char rta = 's';

    printf("*******Empresa*******\n");
    do
    {
        rta = getChar("Desea ingresar un empleado s/n: ");

        if(rta == 's')
        {
            contTotal++;
            printf("\n Ingrese nombre del empleado: ");
            scanf("%s",&nombreEmpleado);

            nacionalidad = getChar("Ingrese nacionalidad \n A = Argentino \n E = Extranjero \n respuesta: ");

            estudios = getInt("\nIngrese Estudios \n 1 = Primaria \n 2 = Secundaria \n  3 = Universitario \n respuesta:");
            fflush(stdin);
            antiguedad = getInt("\n Ingrese antiguedad del empleado: ");

            if(nacionalidad == 'e' && antiguedad >= 20 && estudios == 3)
            {


                //nombresCondicional[contCondicional] = nombreEmpleado;

                strcpy(nombresCondicional[contCondicional],nombreEmpleado);
                contCondicional++;


            }

        }
        if(rta == 'n')
        {

            printf("saliendo de la aplicacion");

            printf("Empleados que cumplen condiciones: \n");

            for(int i = 0; i< contCondicional; i++ )
            {


                printf("Nombre: %s \n ",nombresCondicional[i]);


            }



        }





    }
    while(rta != 'n');


    printf("\n \n La cantidad de empleados que cumplen las condiciones es de %d ",contCondicional);

    porcentaje = (float)contCondicional / contTotal *100;
    printf("\n el porcentaje de empleados que cumplen las condiciones es de %.2f porciento",porcentaje);

    return 0;
}
