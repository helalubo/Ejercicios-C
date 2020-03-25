#include <stdio.h>
#include <stdlib.h>

#define CANT 10

int main()
{
    char caracter;
    int a =0;
    int e=0;
    int i =0;
    int o =0;
    int u =0;

    for(int i = 0 ; i< CANT; i++)
    {
        printf("Ingrese letra para posicion %d: ",i+1);
        fflush(stdin);
        scanf("%c",&caracter);

        switch(caracter)
        {

        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;

        }



    }

    printf("*****contadores******\n");
    printf("A: %i\n",a);
    printf("E: %i\n",e);
    printf("I: %i\n",i);
    printf("O: %i\n",o);
    printf("U: %i\n",u);



    return 0;
}
