#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "validar.h"
#include "utn.h"
#include "numbers.h"
#include "search.h"

#define CANT 20
int sumarArray(int array[], int tam);

int main()
{

    typedef char cadena[50];
    cadena nombre[CANT];
    cadena apellido[CANT];

    int pXInteligencia[CANT];
    int pXCultura[CANT];
    int pXBelleza[CANT];

    int pXGeneral[CANT];

    char rta;
    int i = 0;
    int max = INT_MIN;
    int indexMax;

    int totalCultura;
    int totalInteligencia;
    int totalBelleza;


    printf("*******Concurso de belleza*******\n");

    do
    {


        rta = verificarSN("Desea ingresar participante? s/n: ");

        if(rta == 's')
        {

            getString(&nombre[i],"\nIngrese nombre del participante: ");
            getString(&apellido[i],"\nIngrese apellido del participante: ");

            pXInteligencia[i] = getInt("\nIngrese puntos por inteligencia: ");
            pXCultura[i] = getInt("\nIngrese puntos por Cultura: ");
            pXBelleza[i] = getInt("\nIngrese puntos por Belleza: ");


            pXGeneral[i]=  pXInteligencia[i] + pXCultura[i] + pXBelleza[i];


            i++;







        }

        if(i == 20)
        {
            printf("Ya se han ingresado los 20 integrantes");
            rta = 'n';
            break;
        }

    } while(rta == 's');


max = getMax(pXGeneral,max,i);



indexMax = searchIndex(max,pXGeneral,i);




    printf("El concursante con mayor puntaje en general es: ");
    printf("\nNOMBRE: %s \t APELLIDO: %s \t PUNTAJE: %d\n",nombre[indexMax],apellido[indexMax],max);



totalCultura = sumarArray(pXCultura,i);
totalInteligencia = sumarArray(pXInteligencia,i);
totalBelleza = sumarArray(pXBelleza,i);

printf("cantidad total de puntos por belleza en general %d. \n",totalBelleza);

printf("cantidad total de puntos por inteligencia en general %d. \n",totalInteligencia);

printf("cantidad total de puntos por cultura en general %d. \n",totalCultura);




    return 0;
}


int sumarArray(int array[], int tam)
{

    int total = 0;

    for(int i = 0; i<tam; i++)
    {


        total+= array[i];
    }

    return total;




}
