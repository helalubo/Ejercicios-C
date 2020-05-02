#include "Curso.h"
#include <stdio.h>

#include <string.h>



/*
typedef struct
{
  int idCurso;//PK
  char decripcion[20];
  int duracion;
}eCurso;


**/

void hardCodearCursos(eCurso listado[], int tam){


int i =0;

  int cursos[3]={100,102,101,};
  char descripcion[3][20] = {"Java","C","Office"};
  int duraciones[3] = {10,15,7};

  for(i=0; i<3; i++)
  {
      listado[i].idCurso = cursos[i];


      strcpy(listado[i].descripcion, descripcion[i]);

      listado[i].duracion = duraciones[i];
  }





}




int cargarUnCurso(eCurso listado[], int tam){

     int indice;
    int retorno;
    indice=buscarLibre(listado,tam);
    if(indice!=-1)
    {
        listado[indice] = crearUnCurso();
        retorno=1;
    }
    else
    {
        retorno=0;
    }
    return retorno;


}
void cargarTodosLosCursos (eCurso listado[], int tam){

  int i;

  for(i=0; i<tam; i++)
  {
      listado[i] = crearUnCurso();
  }

}
void mostrarTodosLosCurso (eCurso listado[], int tam){

 int i;

   for(i=0; i<tam; i++)
   {

               mostrarUnCurso(listado[i]);

   }


}
void mostrarUnCurso (eCurso miCurso){

printf ("\n %8d %8s %8d\n", miCurso.idCurso,
                        miCurso.descripcion,
                        miCurso.duracion);


}
eCurso crearUnCurso (void){

 eCurso miCurso;


    printf ("\n Ingrese ID de curso: ");
    scanf ("%d", &miCurso.idCurso);

    printf ("\n Ingrese descripcion: ");
    //fflush (stdin);
    fflush(stdin);
    //gets(miAlumno.nombre);
    fgets(miCurso.descripcion,20,stdin);


    printf ("\n Ingrese duracion: ");
    scanf ("%d", &miCurso.duracion);


  return miCurso;


}
void ordenarCursosPorNombre (eCurso listado[], int tam){

    int i;
    int j;
    eCurso auxCurso;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].descripcion,listado[j].descripcion)>0)
            {
                auxCurso = listado[i];
                listado[i] = listado[j];
                listado[j] = auxCurso;
            }
        }

    }



}
void ordenarCursosPorId (eCurso listado[], int tam){

  int i;
    int j;
    eCurso auxCurso;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(listado[i].idCurso>listado[j].idCurso)
            {
                auxCurso = listado[i];
                listado[i] = listado[j];
                listado[j] = auxCurso;
            }
            else
            {
               if(listado[i].idCurso==listado[j].idCurso)
               {
                   if(strcmp(listado[i].descripcion,listado[j].descripcion)>0)
                   {
                        auxCurso = listado[i];
                        listado[i] = listado[j];
                        listado[j] = auxCurso;
                   }
               }
            }
        }

    }


}
eCurso buscarCurso(eCurso listado[], int tam, int idCurso){


    for(int i = 0; i<tam; i++){


        if(idCurso == listado[i].idCurso){

            mostrarUnCurso(listado[i]);


        }


    }



}

void menuCargarCurso(){

    printf("\n1-Java \n2-C++\n3-C: ");

}
