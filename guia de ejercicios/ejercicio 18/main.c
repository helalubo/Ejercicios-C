#include <stdio.h>
#include <stdlib.h>

#define TAM 10
int main()
{

    int num;
    int contP =0;
    int productoN = 1;

    for(int i = 0; i< TAM; i++)
    {



            printf("ingrese numero : ");

            scanf("%d",&num);

            if(num>0)
            {
                contP += num;
            }
            else
            {
                productoN *= num;
            }

            if(num == 0)
            {
                printf("ERROR! ingrese numero diferente a 0: ");

                scanf("%d",&num);
            }




    }

    printf("la suma de los positivos es de %d \n y el producto de los negativos es de %d",contP,productoN);



    return 0;
}
