
#include "Alumno.h"
#include <stdio.h>

#include <string.h>
#include <limits.h>

void hardCodearAlumnos(eAlumno listado[], int tam)
{
    int legajos[5]= {4,2,3,4,5};
    int nota1[5]= {10,4,9,8,7};
    int nota2[5]= {3,2,7,8,9};
    char nombre[5][20] = {"Juan","Maria","Ana","Pedro","Luisa"};
    char mail[5][20] = {"Juan@lala.com","Maria@lala.com","Ana@lala.com","Pedro@lala.com","Luisa@lala.com"};;
    eFecha fechas[5] = {{10,5,1999},{7,3,1990},{5,7,1997},{18,2,2000},{4,8,1999}};
    int cursos[5]= {100,102,101,100,101};
    int i;

    for(i=0; i<5; i++)
    {
        listado[i].legajo = legajos[i];
        listado[i].nota1 = nota1[i];
        listado[i].nota2 = nota2[i];
        listado[i].promedio = (float) (listado[i].nota1 + listado[i].nota2)/2;
        listado[i].fechaNacimiento = fechas[i];
        strcpy(listado[i].nombre, nombre[i]);
        strcpy(listado[i].email, mail[i]);
        listado[i].estado = OCUPADO;
        listado[i].idCurso = cursos[i];
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

void mostrarUnAlumno (eAlumno miAlumno, eCurso arrayCursos[], int tamCursos)
{
    eCurso CursoAux;

    CursoAux=buscarCurso (arrayCursos,  tamCursos,  miAlumno.idCurso);
    /* printf ("%8d %8d %8d\t%8f %15s %15s curso: %s \t[%d/%d/%d]\n", miAlumno.legajo,
                                             miAlumno.nota1,
                                             miAlumno.nota2,
                                             miAlumno.promedio,
                                             miAlumno.nombre,
                                             miAlumno.email,
                                             CursoAux.descripcion,
                                             miAlumno.fechaNacimiento.dia,
                                             miAlumno.fechaNacimiento.mes,
                                             miAlumno.fechaNacimiento.anio);
                                             */
    printf ("%4d %4d %4d\t%4f %15s %15s \t[%d/%d/%d]", miAlumno.legajo,
            miAlumno.nota1,
            miAlumno.nota2,
            miAlumno.promedio,
            miAlumno.nombre,
            miAlumno.email,
            miAlumno.fechaNacimiento.dia,
            miAlumno.fechaNacimiento.mes,
            miAlumno.fechaNacimiento.anio);
    mostrarUnCurso(CursoAux);
}

void mostrarTodosLosAlumnos(eAlumno listado[], int tam,eCurso arrayCursos[], int tamCursos)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listado[i],arrayCursos,tamCursos);
        }
    }

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
    fgets(miAlumno.nombre,20,stdin);
    printf ("Ingrese email: ");
    //fflush (stdin);
    fflush(stdin);
    // gets (miAlumno.email);
    fgets(miAlumno.email,20,stdin);
    miAlumno.promedio = promediarNotasAlumno(miAlumno.nota1,miAlumno.nota2);



    printf ("Ingrese dia: ");
    scanf ("%d", &miAlumno.fechaNacimiento.dia);
    printf ("Ingrese mes: ");
    scanf ("%d", &miAlumno.fechaNacimiento.mes);
    printf ("Ingrese anio: ");
    scanf ("%d", &miAlumno.fechaNacimiento.anio);
    miAlumno.estado=OCUPADO;
    return miAlumno;

}


void mostrarAlumnosPromocionados(eAlumno listado[], int tam, int aprobado)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listado[i].nota1 >= aprobado && listado[i].nota2 >= aprobado)
        {
            if(listado[i].estado==OCUPADO)
            {
                // mostrarUnAlumno(listado[i]);
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
            //mostrarUnAlumno(listado[i]);
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

void listarCursosConAlumnos(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{

    int opc;
    printf("\n*********Listar********\n1-java\n2-inkscape\n 3-office\n Ingrese opcion");
    scanf("%d",&opc);
    int idCurso;


    switch(opc)
    {

    case 1:

        idCurso = 100;
        break;

    case 2:
        idCurso = 101;
        break;

    case 3:
        idCurso = 102;
        break;

    default:
        printf("\nERROR! INGRESE OPCION VALIDA.\n");



    }


    for(int i = 0; i<tam; i++)
    {

        if(listado[i].idCurso == idCurso)
        {

            mostrarUnAlumno(listado[i],listadoCursos,tamCursos);

        }

    }


}

void listarCursosYAlumnos(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{



    for(int i = 0; i< tamCursos; i++)
    {
        eCurso auxCurso;
        auxCurso= listadoCursos[i];


        printf("\n******* %s *******\n",auxCurso.descripcion);

        for(int k = 0; k<tam; k++)
        {

            if(listado[k].estado == OCUPADO && listado[k].idCurso == auxCurso.idCurso)
            {

                mostrarUnAlumno(listado[k],listadoCursos,tamCursos);


            }


        }



    }







}



void alumnosJava(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{

//cantidad de alumnos que cursan java

    int cont = 0;


    for(int i = 0; i<tam; i++)
    {


        if(listado[i].estado == OCUPADO && listado[i].idCurso == 100 )
        {

            cont++;


        }



    }


    printf("\nLa cantidad de alumnos que cursan java es de %d\n",cont);


}



void SumatoriaDeHorasPorCurso(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{

    int cont = 0;
    for(int i = 0; i< tamCursos; i++)
    {
        eCurso auxCurso;
        auxCurso= listadoCursos[i];

        printf("\n%s: ",auxCurso.descripcion);
        for(int k = 0; k<tam; k++)
        {
            if(listado[k].estado == OCUPADO && listado[k].idCurso == auxCurso.idCurso)
            {
                cont += listadoCursos[i].duracion;
            }
        }
        printf(" Horas por curso: %d\n",cont);
        cont = 0;

    }


}



void promedioDeCurso(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{

    int acumNotas=0;
    int contadorAlumnos =0;
    char nombreCurso[20];




    int opc;
    printf("\n*********Seleccionar curso********\n1-java\n2-inkscape\n 3-office\n Ingrese opcion: ");
    scanf("%d",&opc);
    int idCurso;


    switch(opc)
    {

    case 1:

        idCurso = 100;
        break;

    case 2:
        idCurso = 101;
        break;

    case 3:
        idCurso = 102;
        break;

    default:
        printf("\nERROR! INGRESE OPCION VALIDA.\n");



    }

    for(int i= 0; i<tam; i++)
    {

        if( listado[i].estado == OCUPADO && listado[i].idCurso == idCurso)
        {





            acumNotas+= listado[i].nota2;
            contadorAlumnos++;
        }


    }


    for(int i = 0; i<tamCursos; i++)
    {

        if(listadoCursos[i].idCurso == idCurso)
        {

            strcpy(nombreCurso,listadoCursos[i].descripcion);


        }



    }


    printf("\nEl promedio de las notas  del curso de %s es de: %.2f",nombreCurso,(float)acumNotas/contadorAlumnos);



}

void cursoMasElegido(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos)
{


    int cont[tamCursos];
    char nombresCursos[tamCursos][20];
    int cantidadMax;
    char nombreCursoMasElegido[20];


    for(int i = 0; i<tamCursos; i++)
    {

        cont[i] = 0;
       strcpy(nombresCursos[i],listadoCursos[i].descripcion);
    }


    for(int i = 0; i< tamCursos; i++)
    {
      //  eCurso auxCurso;
      //  auxCurso= listadoCursos[i];


        for(int k = 0; k<tam; k++)
        {
            if(listado[k].estado == OCUPADO && listado[k].idCurso == listadoCursos[i].idCurso)
            {
                cont[i]++;
            }
        }


    }

   cantidadMax =  retornarMayor(cont,tamCursos);


   for(int i = 0; i<tamCursos; i++){

    if(cantidadMax == cont[i]){

    strcpy(nombreCursoMasElegido,nombresCursos[i]);


    }
   }




   printf("El curso mas elegido es %s con %d alumnos",nombreCursoMasElegido,cantidadMax);


}

int retornarMayor(int numeros[], int cant)
{

    int max;
    max = INT_MIN;
    for(int i = 0; i<cant; i++)
    {

        if(max < numeros[i])
        {

            max = numeros[i];
        }

    }
    return max;
}







