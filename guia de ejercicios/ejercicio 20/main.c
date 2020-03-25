#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("ingrese un numero: ");
    scanf("%d",&num);

    for(int i = 1; i<= num; i++){

        if(num>0){

            printf("numero natural: %d \n",i);
        }
    }




    return 0;
}
