#include "Curso.h"
#include <stdio.h>

#include <string.h>
eCurso buscarCurso (eCurso listado[], int tam, int idCurso)
{
    int i;
    eCurso auxCurso= {666,"no existe",-1};

    for(i=0; i<tam; i++)
    {
        if(listado[i].idCurso==idCurso)
        {
            auxCurso=listado[i];
            break;
        }
    }

    return auxCurso;
}
void mostrarTodosLosCurso (eCurso listado[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        mostrarUnCurso(listado[i]);
    }

}
void mostrarUnCurso (eCurso miCurso)
{
    printf ("%4d %8d  %5s\n", miCurso.idCurso,
            miCurso.duracion,
            miCurso.descripcion
           );
}


eCurso crearUnCurso (void)
{
    eCurso unCursoAux;


    printf ("Ingrese id: ");
    scanf ("%d", &unCursoAux.idCurso);

    printf ("Ingrese duracion: ");
    scanf ("%d", &unCursoAux.duracion);
    printf ("Ingrese descripcion: ");
    //fflush (stdin);
    fflush(stdin);
    //gets(miAlumno.nombre);
    fgets(unCursoAux.descripcion,20,stdin);

    return unCursoAux;

}
void hardCodearCursos (eCurso listado[], int tam)
{
    int id[3]= {100,101,102};
    int duracion[3]= {10,15,7};
    char descripcion[3][20] = {"java","inkscape","office"};
    int i;

    for(i=0; i<5; i++)
    {
        listado[i].idCurso = id[i];

        listado[i].duracion = duracion[i];

        strcpy(listado[i].descripcion, descripcion[i]);


    }
}



//{"java","inkscape","office"};



