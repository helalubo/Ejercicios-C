
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "utn.h"





char verificarSN(char mensaje[])
{

    char respuesta;

    respuesta = tolower(getChar(mensaje));

    while(respuesta != 's' && respuesta != 'n')
    {

        printf("\nError, ingrese respuesta correcta.\n");
        respuesta = tolower(getChar(mensaje));

    }

    return respuesta;


}









int isEmail (char cadena[]){

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if(cadena[i] == '@')
            {

                flag = 1;
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



int isNumber(char cadena[])
{

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if(cadena[i] >= '0' && cadena [i]<='9')
            {

                flag = 1;
            } 
	 else{
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





