#include <stdlib.h>
#include <stdio.h>
#include "Alumno.h"

#define T 5
#define TCURSO 3
int main ()
{
    eCurso listaCursos[TCURSO];
    eAlumno listaAlumnos[T];/*={
                                {1,8,9,8.5,"Pepe","pepe@gmail.com",{12,12,2000},1},
                                {3,10,10,10,"Fatiga","fatiga@gmail.com",{3,2,2001},1},
                                {2,4,5,4.5,"Coqui","coqui@gmail.com",{2,11,1999},0},
                                {5,10,10,10,"Ana","paola@gmail.com",{3,1,1998},1},
                                {4,10,10,10,"Paola","moni@gmail.com",{12,1,2002},1}
                             };

    */
    //inicializarAlumnos(listaAlumnos, T);
    hardCodearAlumnos(listaAlumnos, T);
    //int opcion;
    hardCodearCursos (listaCursos,TCURSO);
    mostrarTodosLosCurso (listaCursos,TCURSO);
    mostrarTodosLosAlumnos(listaAlumnos, T,listaCursos,TCURSO);



    //*******************************************************************************************************//






    // printf("\n****************************2***********************\n");


    // listarCursosYAlumnos(listaAlumnos,T,listaCursos,TCURSO);






    // printf("\n****************************3***********************\n");

    // listarCursosConAlumnos(listaAlumnos,T,listaCursos,TCURSO);


    // printf("\n****************************4***********************\n");


    //alumnosJava(listaAlumnos,T,listaCursos,TCURSO);


    // printf("\n****************************5***********************\n");

    //SumatoriaDeHorasPorCurso(listaAlumnos,T,listaCursos,TCURSO);


    // printf("\n****************************6***********************\n");


    // promedioDeCurso(listaAlumnos,T,listaCursos,TCURSO);


    // printf("\n****************************7**********************\n");


   // cursoMasElegido(listaAlumnos,T,listaCursos,TCURSO);
    //*******************************************************************************************************//

//eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)

    // listarCursosConAlumnos(listadoAlumnos,T,listaCursos,TCURSO);
    //  mostrarUnAlumno (listaAlumnos[0],arayCursos,TCURSO);
    /*
    do
    {
        printf("1.Cargar un ALUMNO\n");
        printf("2.Eliminar un ALUMNO\n");
        printf("3.Modificar un ALUMNO\n");
        printf("4.Listar ALUMNOS\n");
        printf("5.Ordenar ALUMNOS\n");
        printf("10.SALIR\n");
        printf("ELIJA UNA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                printf("CARGA DE DATOS:\n");
               // cargarTodosLosAlumnos(listaAlumnos, T);
             if(cargarUnAlumno(listaAlumnos, T)==0)
             {
                   printf("se cargo:\n");
             }else{
                  printf("no hay lugar:\n");
             }
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
                printf("LISTADO:\n");
                mostrarTodosLosAlumnos(listaAlumnos, T);
            break;
            case 5:
                printf("LISTADO ORDENADO:\n");
                ordenarAlumnosPorNombre(listaAlumnos,T);
            break;
        }

    }while(opcion!=10);

    */
    /*printf("LISTADO DE PROMOCIONADOS:\n");
     mostrarAlumnosPromocionados(listaAlumnos, T, 6);

     mostrarTodosLosAlumnos(listaAlumnos, T);
     printf("LISTADO DE ALUMNOS CON PROMEDIO MAXIMO:\n");
     mostrarAlumnosConMaximoPromedio(listaAlumnos, T);
     printf("LISTADO ORDENADO POR PROMEDIO:\n");
     ordenarAlumnosPorPromedio_Nombre(listaAlumnos,T);
     mostrarTodosLosAlumnos(listaAlumnos, T);*/
    return 0;
}
