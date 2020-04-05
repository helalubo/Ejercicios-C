#include <stdio.h>
#include <stdlib.h>

#define CANT 100

#include "utn.h"
#include "validar.h"
int main()
{
 float salarioSemanal[CANT];
 int legajo[CANT];
 float tarifaHora[CANT];
 int horasTrabajadas[CANT];

 int i = 0;
 char rta;


 do{

    rta = verificarSN("Desea ingresar empleado s/n: ");


    if(rta == 's'){

    legajo[i] = getInt("\n Ingrese legajo: " );
    tarifaHora[i] = getFloat("Ingrese tarifa por hora: ");
    horasTrabajadas[i] = getInt("Ingrese horas trabajadas: ");

    salarioSemanal[i] = (float)((tarifaHora[i] * horasTrabajadas[i]) *5);

    i++;

    }


 }while(rta == 's');


 printf("\nSueldos de trabajadores: \n");

 for(int k = 0; k<i; k++){

 printf("LEGAJO: %d \t SALARIO SEMANAL %.2f \n",legajo[k],salarioSemanal[k]);


 }

 printf("La cantidad de empleados es de %d", i+1);







    return 0;
}
