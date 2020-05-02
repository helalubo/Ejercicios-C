/******************************************************************************

Clase 09 Estructuras
1B 2020 1er Cuatri

*******************************************************************************/
#include <stdio.h>
#include "alumno.h"


int main()
{
    printf("\n\testructuras");

    eAlumno primerAlumno;
    eAlumno otroAlumno;

    primerAlumno.legajo=888;
    MostrarAlumno(primerAlumno);
    otroAlumno.legajo=777;

    if(CompararAlumnos(primerAlumno,otroAlumno)==0)
    {
        printf("\nson iguales");
    }
    else
    {
        printf("\nSon distintos");
    }


    primerAlumno=CargarAlumno();

    if(CompararAlumnos(primerAlumno,otroAlumno)==0)
    {
        printf("\nson iguales");
    }
    else
    {
        printf("\nSon distintos");
    }
    MostrarAlumno(primerAlumno);

    return 0;
}
