#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a;
    char espacio = '    ';

    printf("Ingrese letra: ");
    scanf("%c",&a);



    for(int j = 0; j<5; j++ )
    {

        for(int k = 0; k<5; k++){

            printf("%c",espacio);
        }



        for(int i = 0; i< 5 ; i++)
        {

            for(int f = 0; i<5; i++){
                printf("%c",a);
            }



        }


    }


    return 0;
}
