#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int factorial = 1;
    printf("Ingrese numero: ");
    scanf("%d",&numero);


    for(int i = 0; i<numero; i++){


        factorial *= numero-i;

    }

    printf("%d",factorial);


    return 0;
}
