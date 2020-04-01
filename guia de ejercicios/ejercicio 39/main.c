#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "utn.h"

int main()
{

    int num [4];
    int max = INT_MIN;




    for(int i = 0; i<4; i++)
    {

        num[i] = getInt("\nIngrese numero: ");


        if(num[i] >  max)
        {

            max = num[i];
        }

    }




    printf("El mayor es: %d",max);
    return 0;
}
