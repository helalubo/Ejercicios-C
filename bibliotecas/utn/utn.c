#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "validar.h"





int getInt(char mensaje[])
{

    int aux;

    printf("%s",mensaje);
    scanf("%d",&aux);

    return aux;



}



float getFloat(char mensaje[], char Emensaje[])
{

    float aux;

    printf("%s",mensaje);
    scanf("%f",&aux);

    while(isFloat(aux) != 1 ){

    printf("\n %s \n",Emensaje);
    printf("%s",mensaje);
    scanf("%f",&aux);

    }



    return aux;



}



char getChar(char mensaje[])
{


    char aux;

    printf("%s",mensaje);
    aux = getche();

    return aux;


}






void getString(char* cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);
    scanf("%s",&aux);

    strcpy(cadena,aux);





}
