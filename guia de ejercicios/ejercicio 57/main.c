#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

int main()
{
    int distancia;
    float minutos;
    float segundos;

    float tiempo;






    float promedio = 0;

    distancia = getInt("Ingrese distancia recorrida en Kilometros: ");
    minutos = getInt("Ingrese minutos de recorrido: ");
    segundos = getInt("Ingrese segundos de recorrido: ");



    tiempo = (float)minutos + (segundos/100);


    promedio = (distancia /tiempo)*60;


    printf("Distancia: %d\n",distancia);
    printf("Minutos: %.0f\n",minutos);
    printf("segundos: %.0f\n",segundos);
    printf("promedio: %.2f\n",promedio);














    return 0;
}
