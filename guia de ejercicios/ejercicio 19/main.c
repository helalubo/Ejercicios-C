#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num;
   int acum =0;

   printf("ingresar numero: ");

   scanf("%i",&num);

   for(int i =0; i<num; i++){

    acum += i;

   }
    printf("%i",acum);


    return 0;
}
