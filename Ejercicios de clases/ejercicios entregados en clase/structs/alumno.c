#include <stdio.h>
typedef struct
{
    int legajo;
    char nombre[20];
    int primeraNota;
    int segundaNota;
    float promedio;

} eAlumno;



void MostrarAlumno(eAlumno parametroAlumno)
{



    printf("\nsu legajo es: %d ",parametroAlumno.legajo);
    printf("\nsu nombre es: %s ",parametroAlumno.nombre);
    printf("\nsu primera nota es: %d ",parametroAlumno.primeraNota);
    printf("\nsu segunda nota  es: %d ",parametroAlumno.segundaNota);
    printf("\nsu promedio es: %.2f ",parametroAlumno.promedio);





}
float calcularPromedio(eAlumno alumno)
{

    int sumarNotas;

       sumarNotas = alumno.primeraNota + alumno.segundaNota;


    return (float) sumarNotas /2;


}


eAlumno CargarAlumno()
{
    eAlumno alumnoParaRetornar;



    printf("\ningrese su legajo :");
    scanf("%d",&alumnoParaRetornar.legajo);
    fflush(stdin);
    printf("\ningrese su nombre: ");
    gets(alumnoParaRetornar.nombre);
    fflush(stdin);


    printf("Ingrese primera nota: ");
    scanf("%d",&alumnoParaRetornar.primeraNota);

    printf("Ingrese segunda nota: ");

    scanf("%d",&alumnoParaRetornar.segundaNota);

    alumnoParaRetornar.promedio = calcularPromedio(alumnoParaRetornar);


    return alumnoParaRetornar;

}
int CompararAlumnos(eAlumno primerParametro,eAlumno segundoParametro)
{
    //return primerParametro.legajo==segundoParametro.legajo;
    int retorno=1;
    if(primerParametro.legajo==segundoParametro.legajo)// && primerParametro.promedio==segundoParametro.promedio)
    {
        retorno=0;
    }
    return retorno;

}





