#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "numbers.h"
#include "search.h"

typedef struct{

int legajo;
int promedio;


}eAlumno;





int main()
{

    eAlumno alumnos[]= {
        {777,10},
        {666,7},
        {555,8},
        {888,4},
        {999,1},
        {111,1}


    };

    int aprobados = 0;
    int diciembre = 0;
    int marzo = 0;

    int promedios[6];
    int max = INT_MIN;
    int legajoMax;



    for(int i = 0; i<6;i++){

        if(alumnos[i].promedio >= 7 ){

            aprobados++;
        }
        else if(alumnos[i].promedio >= 4 ){
            diciembre++;
        }else{
            marzo++;
        }

        promedios[i] = alumnos[i].promedio;


    }

    max = getMax(promedios,max,6);
    legajoMax = searchIndex(max,promedios,6);









    printf("La cantidad de aprobados es de %d\n",aprobados);
    printf("Cantidad de alumnos a diciembre: %d\n",diciembre);
    printf("Cantidad de alumnos a marzo: %d\n",marzo);
    printf("El legajo del alumno con mejor promedio es el de %d con %d",alumnos[legajoMax].legajo,max);



    return 0;
}
