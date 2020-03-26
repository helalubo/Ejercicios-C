#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{

    int max = INT_MIN;
    // importante inicializar con la variable mas peque;a permitida,
    //en este casi INT_MIN viene de la libreria limits.h.


    for(int i = 0; i< 3; i++)
    {

        int num;

        printf("ingrese numero: ");
        fflush(stdin);
        scanf("%d",&num);

        if(num>max)
        {
            max=num;
        }

    }

printf("El numero mas grande es %d",max);


    return 0;
}
