/**
*@author Alejandro De Moraiz 1ro B

*Pedirle al usuario que ingrese 2
 números enteros y que muestre:
 La suma de los dos números.
 Disminuir del segundo, el primero.
 El producto de ambos números.
Promedio de ambos números.
*
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{




    int a;
    int b;
    float promedio;

    printf("ingrese primer numero ");
    scanf("%d",&a);

    printf("ingrese segundo numero ");
    scanf("%d",&b);


    printf("Los numeros ingresados son %d y %d \n",a,b);

    printf("la suma de los numeros es de %d \n",b+a);

    printf("la resta del segundo numero por el primero es de %d \n", b-a);

    printf("la multiplicacion de los numeros es de %d \n", a*b);

    promedio = (float)(a+b)/2;

    printf("el promedio de los numeros es de %.2f \n",promedio);






    return 0;
}
