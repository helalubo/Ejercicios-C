#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contador =0;
    int num;
    printf("ingresar numero: ");

    scanf("%d",&num);

   for(int i =0; i< num;i++){

    if(i%3 ==0){

        contador++;
    }
   }

printf("la cantidad de numeros multiplos de 3 es de: %d",contador);



    return 0;
}
