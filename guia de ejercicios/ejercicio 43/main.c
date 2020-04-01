#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

#define TAM 100

int main()
{

float promedio;
typedef char cadena[50];
cadena nombreAlumno[TAM];
float promedioAlumnos[TAM];
int notas = 0;
int i = 0;

char rta;


do{
    rta = getChar("Desea ingresar notas de alumno? s/n: ");

    if(rta == 's'){

      printf("\nIngrese nombre del alumno: ");
     scanf("%s",nombreAlumno[i]);



     for(int k = 0; k<6; k++){

        printf("Materia %d \n ",k+1);
        notas += getInt("Ingrese nota de materia: ");



     }
     promedioAlumnos[i] = (float)notas/6;
     notas = 0;
     i++;


    }
    if(rta == 'n'){

        printf("Saliendo de aplicacion\n resultados: \n");
    }



}while(rta == 's');


    for(int k = 0; k<i; k++){

    printf("NOMBRE DEL ALUMNO: %s \t \t PROMEDIO %.2f \n",nombreAlumno[k],promedioAlumnos[k]);


    }



    return 0;
}


