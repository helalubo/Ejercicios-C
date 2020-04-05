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

int isFloat(float number)
{

    int aux = 0;
    int flag = 0;

    aux = number;

    if(number - aux != 0)
    {

        flag = 1;

    }


    return flag;

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

