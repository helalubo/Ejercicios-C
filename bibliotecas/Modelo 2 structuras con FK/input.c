

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validate.h"

int isNumber(char cadena[])
{

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-')
            {

                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = 0;


    }


    return flag;
}





void getString(char cadena[], char mensaje[],char Emensaje[])
{


    char aux[50];
    printf(mensaje);
    fflush(stdin);
    gets(aux); // a prueba

    strcpy(cadena,aux);

    while(strcmp(cadena,"")==0)
    {

        printf(Emensaje);
        printf(mensaje);
        // scanf("%s",aux);
        fflush(stdin);
        gets(aux); // a prueba

        strcpy(cadena,aux);

    }


}


int getInt(char mensaje[],char Emensaje[])
{
    char aux[60];
    int verificar = 0;
    int respuesta;



    while(verificar == 0)
    {

        getString(aux,mensaje,Emensaje);
        verificar= isNumber(aux);

        if(verificar == 1)
        {

            respuesta = atoi(aux);
            break;




        }

        else
        {

            printf("\n********Error********\n");


        }



    }



    return respuesta;



}

int isFloat(char cadena[])
{

    int flag;
    int i = 0;

    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-' || cadena[i] == '.')
            {

                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = 0;


    }






    return flag;

}


float getFloat(char mensaje[],char Emensaje[])
{

    char aux[60];
    int verificar = 0;

    float resultado;



    while(verificar == 0)
    {



        getString(aux,mensaje,Emensaje);

        verificar = isFloat(aux);


        if(verificar == 1 )
        {


            resultado = atof(aux);
            break;



        }
        else
        {

            printf("\n********Error********\n");



        }

    }











    return resultado;



}



char getChar(char mensaje[])
{


    char aux;

    printf("%s",mensaje);
    aux = getche();

    return aux;


}








void getEmail(char cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);

    fflush(stdin);
    gets(aux);


    while(isEmail(aux) == 0)
    {
        printf("\nError! ingresar email valido: ");
        printf(mensaje);
        fflush(stdin);
        gets(aux);


    }


    strcpy(cadena,aux);

}




void getStringWithDefineSize(char cadena[], char mensaje[],int tam,char Emensaje)
{


    getString(cadena,mensaje,Emensaje);



    while(isStringWithDefinedSize(cadena,tam) == 0)
    {
        printf("\n Error! Cadena supera el limite establecido");
        getString(cadena,mensaje,Emensaje);
    }



}

int getNumberWithDefinedRange(char mensaje[], int maximo, int minimo, char Emensaje[]){


    int rta;

    rta = getInt(mensaje,Emensaje);

    while(isNumberWithDefinedRange(rta,maximo,minimo)== 0){

            printf(Emensaje);
            rta = getInt(mensaje,Emensaje);

    }


    return rta;

}

void getPhoneNumber(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyPhoneNumbers(cadena) == 0)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}

void getOnlyLetters(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyLetters(cadena) == 0)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}


void getonlyAlphanumeric(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyAlphanumeric(cadena) == 0)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}



void getCuil(char cadena[],char mensaje[],char Emensaje[]){


 getString(cadena,mensaje,Emensaje);



    while(onlyCuil(cadena) == 0)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}

void getArchivo(char cadena[],char mensaje[],char Emensaje[]){


 getString(cadena,mensaje,Emensaje);



    while(isArchivo(cadena) == 0)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }





}

