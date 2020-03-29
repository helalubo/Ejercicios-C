#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont = 0;

    printf("100 primeros de 5\n");
    for(int i = 0;  i<1000000; i++)
    {


        if(i % 5 == 0 )
        {

            printf("%d \n",i);
            cont++;

            if(cont == 100)
            {
                printf("100 primeros de 7");
                cont =0;
                break;
            }


        }
    }

    printf("100 primeros de 5");
    for(int i = 0;  i<1000000; i++)
    {

        if(i % 7 == 0 )
        {

            printf("%d \n",i);
            cont++;

            if(cont == 100)
            {
                cont =0;
                break;

            }


        }
    }

    printf("100 primeros de 5 y 7");
    for(int i = 0;  i<1000000; i++)
    {

        if(i % 5 == 0 && i % 7 ==0)
        {

            printf("%d \n",i);
            cont++;

            if(cont == 100)
            {
                cont =0;
                break;
            }


        }

    }



    return 0;
}
