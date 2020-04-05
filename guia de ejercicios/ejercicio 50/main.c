

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CANT 100

#include "utn.h"
#include "validar.h"
#include "search.h"
#include "numbers.h"
int main()
{
 float salarioSemanal[CANT];
 int legajo[CANT];
 float tarifaHora[CANT];
 int horasTrabajadas[CANT];

 float salarioMenor = (float)INT_MAX;
int legajoMenor;
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


salarioMenor = getMinF(salarioSemanal,salarioMenor,i);




legajoMenor = searchIndexF(salarioMenor,salarioSemanal,i);

printf("El salario menor es del empleado con el legajo %d con un sueldo de %.2f",legajo[legajoMenor],salarioMenor);







    return 0;
}




