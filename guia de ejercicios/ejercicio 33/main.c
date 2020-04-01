#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"

int main()
{
    int mozo1 = 0;
    int mozo2 = 0;
    int mozo1Factura = 0;
    int mozo2Factura =0;
    int ingresoMesa;
    char rta = 's';
    float plus;



    do
    {




        ingresoMesa = getInt("\nIngrese que mozo atendio la mesa o 0 para terminar el dia: ");



        if(ingresoMesa == 1)
        {

            mozo1++;
            mozo1Factura += getInt("Ingrese monto que se cobro a la mesa atendida: ");

        }

        else if(ingresoMesa == 2)
        {

            mozo2++;
            mozo2Factura += getInt("Ingrese monto que se cobro a la mesa atendida: ");

        }

        rta = getChar("Desea ingresar otra mesa? s/n: ");

        if (rta == 'n')
        {


            if(mozo1 >mozo2)
            {

                plus =(float) mozo1Factura /3;
                printf("\nEl mozo numero 1 tiene mas mesas atendidas con un total de %d",mozo1);
                printf("\n obtiene un plus de %.2f",plus);

            }
            else if (mozo1 <mozo2)
            {
                plus =(float) mozo2Factura /3;
                printf("\nEl mozo numero 2 tiene mas mesas atendidas con un total de %d",mozo2);
                printf("\n obtiene un plus de %.2f",plus);

            }
            else{

                if(mozo1Factura > mozo2Factura){

                plus =(float) mozo1Factura /3;
                printf("\nAmbos tienen la misma cantidad de mesas atendidas pero el mozo 1 tuvo mas de facturacion por eso el obtiene un plus de %.2f",plus);
                }else{
                        plus =(float) mozo2Factura /3;
                printf("\nAmbos tienen la misma cantidad de mesas atendidas pero el mozo 2 tuvo mas de facturacion por eso el obtiene un plus de %.2f",plus);

                }

            }

            ingresoMesa =0;

        }


    }
    while(ingresoMesa !=0);








    return 0;
}
