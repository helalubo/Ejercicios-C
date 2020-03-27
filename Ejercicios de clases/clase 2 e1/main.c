#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TAM 5
int main()
{
   int numero;
   int acum =0;
   int max = INT_MIN;
   int min = INT_MAX;


   for(int i = 0 ; i < TAM; i++)
   {
    numero = getInt("Ingrese numero: ");

    acum += numero;

    if(numero> max){

        max = numero;
    }


        if(numero< min){

        min = numero;
    }

   }


    printf("El promedio es de: %d \n el numero maximo es: %d \n y el numero minimo es %d",
           getPromedio(acum,TAM),max,min);

    return 0;
}


/**
*brief muestra un mensaje y pide un entero
*param mensaje = mensaje a mostrar
*return intero pedido
*/

int getInt(char mensaje[]){

   int aux;
   printf("%s",mensaje);

   scanf("%d",&aux);

   return aux;



}
/**
*brief saca el promedio
*param num = numero a promediar
*param cant = cantidad para sacar promedio
*return intero pedido
*/


int getPromedio(int num, int cant){

    int promedio;

    promedio = num/cant;

    return promedio;
}
