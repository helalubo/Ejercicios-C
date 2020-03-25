#include <stdio.h>
#include <stdlib.h>

#define CANT 5

int main()
{

    int num;
    int acum =0;
    int media;


    for(int i=0; i<CANT; i++){

        printf("Ingrese numero %d: \t", i+1);
        scanf("%d",&num);

        acum = acum + num;

    }
    media = acum/CANT;

    printf("La media es de: %d",media);

    return 0;
}
