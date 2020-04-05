#include <stdio.h>
#include <stdlib.h>

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
        {888,5},
        {999,1}


    };

    int aprobados = 0;


    for(int i = 0; i<5;i++){

        if(alumnos[i].promedio >= 7 ){

            aprobados++;
        }

    }


    printf("La cantidad de aprobados es de %d",aprobados);



    return 0;
}
