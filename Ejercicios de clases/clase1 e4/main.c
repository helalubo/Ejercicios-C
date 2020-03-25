#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int contN =0;
    int contP =0;

    printf("********************Ingresar numeros***************\n");

    for(int i = 0; i<10; i++){

          printf("ingrese numero %d: \n",i+1);
            scanf("%d",&num);

            if(num >0){
                contP++;
            }else{
                contN++;
            }

    }
    //system("cls");


    printf("la cantidad de numeros positivos es de %d y la de numeros negativos es de %d",contP,contN);


    return 0;
}
