#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main()
{
   int cont =0;


for(int i=0; i< TAM; i++)
{

    if(i%2){
         cont++;
  printf("%d \n",i);
    }
}

printf("La cantidad de impares es de %d",cont);


    return 0;
}
