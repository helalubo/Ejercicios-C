
#include "Alumno.h"
#include "Curso.h"
#include <stdio.h>

#include <string.h>

void hardCodearAlumnos(eAlumno listado[], int tam)
{
  int legajos[5]={1,2,3,4,5};
  int nota1[5]={10,4,9,8,7};
  int nota2[5]={3,2,7,8,9};
  char nombre[5][20] = {"Juan","Maria","Ana","Pedro","Luisa"};
  char mail[5][20] = {"Juan@lala.com","Maria@lala.com","Ana@lala.com","Pedro@lala.com","Luisa@lala.com"};;
  eFecha fechas[5] = {{10,5,1999},{7,3,1990},{5,7,1997},{18,2,2000},{4,8,1999}};
  int cursos[5]={100,102,101,100,101};
  int i;

  for(i=0; i<5; i++)
  {
      listado[i].legajo = legajos[i];
      listado[i].nota1 = nota1[i];
      listado[i].nota2 = nota2[i];
      listado[i].promedio = (float) (listado[i].nota1 + listado[i].nota2)/2;
      listado[i].fechaNacimiento = fechas[i];
      listado[i].idCurso = cursos[i];
      strcpy(listado[i].nombre, nombre[i]);
      strcpy(listado[i].email, mail[i]);
      listado[i].estado = OCUPADO;
  }


}
int buscarLibre(eAlumno listado[], int tam)
{
    int i;
    int indice=-1;
  for(i=0; i<tam; i++)
  {
      if( listado[i].estado==LIBRE)
      {
         indice=i;
         break;
      }
  }
  return indice;
}
int cargarUnAlumno(eAlumno listado[], int tam)
{
    int indice;
    int retorno;
    indice=buscarLibre(listado,tam);
    if(indice!=-1)
    {
        listado[indice] = crearUnAlumno();
        retorno=1;
    }
    else
    {
        retorno=0;
    }
    return retorno;
}



void inicializarAlumnos(eAlumno listado[], int tam)
{
     int i;

  for(i=0; i<tam; i++)
  {
      listado[i].estado = LIBRE;
  }
}



void cargarTodosLosAlumnos(eAlumno listado[], int tam)
{
  int i;

  for(i=0; i<tam; i++)
  {
      listado[i] = crearUnAlumno();
  }
}
void mostrarTodosLosAlumnos(eAlumno listado[], int tam)
{
    int i;

   for(i=0; i<tam; i++)
   {
        if(listado[i].estado==OCUPADO){
               mostrarUnAlumno(listado[i]);
           }
   }

    //(eAlumno miAlumno,eCurso miCurso,eCurso Listado[], int tam);

}


eAlumno crearUnAlumno (void)
{
  eAlumno miAlumno;


    printf ("Ingrese legajo: ");
    scanf ("%d", &miAlumno.legajo);
    printf ("Ingrese nota 1: ");
    scanf ("%d", &miAlumno.nota1);
    printf ("Ingrese nota 2: ");
    scanf ("%d", &miAlumno.nota2);
    printf ("Ingrese nombre: ");
    //fflush (stdin);
    fflush(stdin);
    //gets(miAlumno.nombre);
    fget(miAlumno.nombre);
    printf ("Ingrese email: ");
    //fflush (stdin);
    fflush(stdin);
    // gets (miAlumno.email);
    gets(miAlumno.email);
    miAlumno.promedio = promediarNotasAlumno(miAlumno.nota1,miAlumno.nota2);



    printf ("Ingrese dia: ");
    scanf ("%d", &miAlumno.fechaNacimiento.dia);
    printf ("Ingrese mes: ");
    scanf ("%d", &miAlumno.fechaNacimiento.mes);
    printf ("Ingrese anio: ");
    scanf ("%d", &miAlumno.fechaNacimiento.anio);

    menuCargarCurso();
    printf("\nIngrese opcion: ");
    scanf ("%d", &miAlumno.idCurso);

    miAlumno.estado=OCUPADO;
  return miAlumno;

}


void mostrarUnAlumno (eAlumno miAlumno,eCurso Listado[], int tam)
{

    eCurso cursoAux;
     cursoAux=  buscarCurso(listado,tam,miAlumno.idCurso);
  printf ("%8d %8d %8d\t%8f %15s %15s \t[%d/%d/%d]  %15s \n", miAlumno.legajo,
                                          miAlumno.nota1,
                                          miAlumno.nota2,
                                          miAlumno.promedio,
                                          miAlumno.nombre,
                                          miAlumno.email,
                                          miAlumno.fechaNacimiento.dia,
                                          miAlumno.fechaNacimiento.mes,
                                          miAlumno.fechaNacimiento.anio
                                          cursoAux.descripcion
                                         );





}

void mostrarAlumnosPromocionados(eAlumno listado[], int tam, int aprobado)
{
   int i;

   for(i=0; i<tam; i++)
   {
       if(listado[i].nota1 >= aprobado && listado[i].nota2 >= aprobado)
       {
           if(listado[i].estado==OCUPADO){
               mostrarUnAlumno(listado[i]);
           }

       }

   }
}

float promediarNotasAlumno(int nota1, int nota2)
{
    return (float) (nota1+nota2)/2;
}

void ordenarAlumnosPorNombre(eAlumno listado[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }

    }

}

float buscarPromedioMaximo(eAlumno listado[], int tam)
{
    int i;
    float maxPromedio;
    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio>maxPromedio || i==0)
        {
            maxPromedio = listado[i].promedio;
        }
    }

    return maxPromedio;
}
void mostrarAlumnosConMaximoPromedio(eAlumno listado[], int tam)
{
    int i;
    float maximo;
    maximo = buscarPromedioMaximo(listado,tam);

    //mostrarAlumnosPromedioMaximo(listado,tam, maximo);

    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio == maximo)
        {
            mostrarUnAlumno(listado[i]);
        }
    }
}

void ordenarAlumnosPorPromedio_Nombre(eAlumno listado[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(listado[i].promedio>listado[j].promedio)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
            else
            {
               if(listado[i].promedio==listado[j].promedio)
               {
                   if(strcmp(listado[i].nombre,listado[j].nombre)>0)
                   {
                        auxAlumno = listado[i];
                        listado[i] = listado[j];
                        listado[j] = auxAlumno;
                   }
               }
            }
        }

    }
}

