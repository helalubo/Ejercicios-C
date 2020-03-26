#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;
    int aux;

    printf("Ingrese valor de numeros: ");
    scanf("%d %d",&num1,&num2);



    if(num1 != "" && num2 != ""){

        aux = num1;
        num1 =num2;
        num2 = aux;


    }

    printf("El primer numero es igual a %d\n",num1);

    printf("El segundo numero es igual a %d",num2);



    return 0;
}
