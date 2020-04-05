#include <stdio.h>
#include <stdlib.h>

#define CANT 50

#include "utn.h"






typedef struct
{

    int legajo;
    int sexo;


} eEmpleado;



int main()
{

    int i = 0;
    char rta;
    int totalHombres=0;

    eEmpleado empleados[CANT];




    do
    {

        rta = getChar("\n Desea ingresar un Impleado s/n: ");

              if(rta == 's')
        {

            eEmpleado empleado;

            empleado.legajo = getInt("\nIngrese numero de legajo: ");

            empleado.sexo = getInt("Ingrese sexo \n 1-masculino\n 2-femenino: ");


            empleados[i] = empleado;

            i++;





        }




    }
    while(rta == 's');

        for(int k = 0; k<i; k++)
        {


            if(empleados[k].sexo == 2)
            {

                printf("LEGAJO: %d \t SEXO: Femenino\n",empleados[k].legajo);


            }
            else if(empleados[k].sexo == 1)
            {

                totalHombres++;


            }



        }

        printf("La cantidad de hombres es de %d",totalHombres);



    return 0;
}
