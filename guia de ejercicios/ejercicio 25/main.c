#include <stdio.h>
#include <stdlib.h>

#define CANTIDADEMPLEADOS 3

int main()
{

    int salir;
    int vendedor[]= {0,0,0};
    float ventas[]= {0,0,0};
    float importe;
    int id;

    do
    {
        printf("Ingrese boleta: \n");


        printf("Ingrese numero de vendedor: ");


        scanf("%d",&id);

        while(id> CANTIDADEMPLEADOS)
        {
            printf("error, solo existen %d empleados, vuelva a ingresar: ",CANTIDADEMPLEADOS);

            scanf("%d",&id);

        }

        vendedor[id-1] = id;


        printf("Ingrese importe: ");
        fflush(stdin);
        scanf("%f",&importe);

        ventas[id-1] += importe;







        printf("Boleta ingresada con exito, ingrese 0 para salir o 1 para continuar: ");

        scanf("%d",&salir);




    }
    while(salir != 0);







    for(int i = 0; i<CANTIDADEMPLEADOS; i++ )
    {

        printf("La comision del vendedor %d es de %.2f \n",vendedor[i],ventas[i]*0.05);



    }

//FALTA TERMINAR, NO ME CARGA EL NUMERO 1 CUANDO INGRESO LOS 3 VENDEDORES.
//************SOLUCION=> extra;amente me toma bien el primer vendedor
//cuando no especifico el tama;o del array.
//
//    int vendedor[]= {0,0,0};    float ventas[]= {0,0,0}; funciona
////    int vendedor[2]= {0,0,0};    float ventas[]= {0,0,0}; NO funciona
//



    return 0;
}
