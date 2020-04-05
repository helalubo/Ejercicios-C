#include <stdio.h>
#include <stdlib.h>

#include "utn.h"
#include "validate.h"

void sumar ();
void restar ();
void multiplicar ();
void dividir ();

int main()
{
    char rta;
    int opc;


    do
    {
        rta =   verificarSN("\n Desea usar calculadora? s/n: ");


        if(rta == 's')
        {


            opc = menu();

            switch(opc)
            {

            case 1:
                sumar();
                break;

            case 2:
                restar();
                break;

            case 3:
                multiplicar();
                break;

            case 4:
                dividir();
                break;



        default: printf("\nError Ingrese opcion valida\n.");

            }

        }
        if(rta == 'n'){

            printf("\n \n \n Gracias por usar la calculadora e.e \n \n \n");
        }


    }
    while(rta == 's');


    return 0;
}

int  menu ()
{

    int opc;

    opc = getInt("\n1-suma\n2-resta\n3-multiplicacion\n4-division\n Ingrese opcion: ");

    return opc;






}
void sumar (){

    int a;
    int b;

    a = getInt("Ingrese primer numero: ");
    b = getInt("Ingrese segundo numero: ");

    printf("El resultado es : %d ", a+b);


}

void restar (){

    int a;
    int b;

    a = getInt("Ingrese primer numero: ");
    b = getInt("Ingrese segundo numero: ");

    printf("El resultado es : %d ", a-b);


}

void multiplicar (){

    int a;
    int b;

    a = getInt("Ingrese primer numero: ");
    b = getInt("Ingrese segundo numero: ");

    printf("El resultado es : %d ", a*b);


}

void dividir (){

    int a;
    int b;

    a = getInt("Ingrese primer numero: ");
    b = getInt("Ingrese segundo numero: ");

    if(b != 0){
    printf("El resultado es : %d ", a/b);

    }else{

      printf("La division por 0 es indeterminada");
    }



}
