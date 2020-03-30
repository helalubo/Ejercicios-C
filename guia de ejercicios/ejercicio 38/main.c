


/**
*Se registran de los empleados de una empresa Número de legajo, sueldo y sexo
*(1 femenino y 2 masculino). Diseñar en un programa que permita informar
*cuantas mujeres ganan más de á 500 y cuantos hombres ganan menos de $400
*/

#include <stdio.h>
#include <stdlib.h>

#include "utn.h"


int main()
{

    int legajo;
    float sueldo;
    int sexo;

    int contH =0;
    int contM = 0;



    char rta;

    printf("*******Empleados*******\n");
    do
    {


        legajo = getInt("\n ingrese legajo:");

        sueldo = getFloat("\n Ingrese sueldo:");

        sexo = getInt("\n Ingrese sexo \n 1 = femenino \n 2 = masculino: ");

        rta = getChar("Desea ingresar empleado? s/n: ");





        if(sueldo > 500 && sexo == 1)
        {

            contM++;
        }
        if(sueldo < 400 && sexo == 2)
        {

            contH++;
        }




    }
    while(rta != 'n');

    printf("\n Gracias por utilizar la app\n ");
    printf("\n La cantidad de mujeres que ganan mas de 500 es de %d \n y la cantidad de hombres que ganan menos de 400 es de: %d",contM,contH);




    return 0;
}
