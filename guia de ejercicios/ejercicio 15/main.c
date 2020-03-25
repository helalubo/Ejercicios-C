#include <stdio.h>
#include <stdlib.h>

#define MULTIPLO 6
#define TAM 100

int main()
{

    for(int i=0;i<TAM; i++){

        if(i%MULTIPLO ==0){
            printf("%d \n",i);
        }
    }




    return 0;
}
