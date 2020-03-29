#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "utn.h"

int main()
{
    int a;
    int b;
    int c;
    int numbers [2];
    int max = INT_MIN;
    int acum = 0;


    a = getInt("Ingrese lado A: ");
    b = getInt("Ingrese lado B: ");
    c = getInt("Ingrese lado C: ");

    numbers[0] = a;
    numbers[1] = b;
    numbers[2] = c;


    for(int i = 0; i< 3; i++)
    {
        if(numbers[i]> max)
        {
            max = numbers[i];
        }

    }
    for(int i = 0; i< 3; i++)
    {

        if(numbers [i] <= max)
        {

            acum += numbers[i];

        }

    }

    if(acum > max)
    {

        printf("Teniendo en cuenta que la suma de los 2 lados menores es mayor al lado mayor se puede decir que es un triangulo");



        if( a == b && a==c && b==c )
        {

            printf("En un triangulo equilatero *lados iguales*");
        }

        else if (a != b && a!=c && b!=c)
        {
            printf("En un triangulo escaleno *lados diferentes*");

        }
        else
        {

            printf("Es un triangulo isoceles *2 lados iguales* ");
        }


    }else{

    printf("No es un triangulo debido a que la suma de sus lados menores es menor al lado mayor");



    }






    return 0;

}
