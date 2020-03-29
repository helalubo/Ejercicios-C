#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "utn.h"
#include "getRandomNumber.h"



int main()
{
    int numero;
    int numeroIngresado;
    char rta;

    numero = getRandomNumber(0,101);
    //printf("%d",numero);

    printf("**********ADIVINA EL NUMERO**********\n \n");





    do
    {







        numeroIngresado = getInt("\n Ingrese numero del 1 al 100 para jugar o ingrese un numero negativo para salir del juego: ");


        if(numero>numeroIngresado && numeroIngresado > 0)
        {

            printf("El numero a adivinar es mayor al que ingresaste! \n");
        }

        if(numero < numeroIngresado)
        {
            printf("El numero a adivinar es menor al que ingresaste! \n");
        }


        if(numero == numeroIngresado)
        {

            printf("CORRECTO! el numero era %d \n", numero);
            numeroIngresado =-1;
        }
        else
        {
            rta = tolower(getChar("\n Desea seguir jugando? s/n: "));

                  switch(rta)
            {
        case 's':

            break;

        case 'n':
            numeroIngresado = -1;
            break;


            }

        }






        if(numeroIngresado< 1)
        {

            printf("\n Saliendo de juego");
        }



    }
    while(numeroIngresado>0);



    return 0;
}

