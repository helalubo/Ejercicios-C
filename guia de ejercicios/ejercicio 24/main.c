#include <stdio.h>
#include <stdlib.h>

#define PESO 80
int main()
{
    int contHasta = 0;
    int contMasDe = 0;
    char r;
    char nombre [20];
    int peso;


    int empleado;

    do
    {
        printf("*****Ingreso de empleados*****\n");
        printf("Desea ingresar algun empleado? s/n  \n");
        scanf("%c",&r);
        fflush(stdin);


        if(r == 's')
        {
            printf("Ingrese nombre del empleado\n");
            scanf("%s",&nombre);
            fflush(stdin);

            printf("Ingrese peso del empleado\n");
            scanf("%d",&peso);

            fflush(stdin);

            printf("Empleado ingresado con exito!\n");

            if(peso <= PESO){
                contHasta++;
            }
            else{
                contMasDe++;
            }



        }

    if(r == 'n'){

        printf("Gracias por usar la app\n");
    }

    }
    while(r == 's');


    printf("la cantidad de empleados que pesan igual o menos de 80kg es de %d\n",contHasta);
    printf("la cantidad de empleados que pesan mas de 80kg es de %d\n",contMasDe);
    return 0;
}
