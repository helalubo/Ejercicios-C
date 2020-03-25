#include <stdio.h>
#include <stdlib.h>

#define MULTIPLO 3
#define TAM 100

int main()
{

    for(int i=1;i<TAM; i++){

        if(i%MULTIPLO ==0){
            printf("%d \n",i);
        }
    }




    return 0;
}
