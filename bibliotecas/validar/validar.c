
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "utn.h"


/**
* @brief Valida respuesta 's' o 'n' sin permitir otros valores
* @param mensaje = Mensaje de lo que se desea dar indicaciones de si o no
* @return respuesta de tipo char correspondiente a 's' o 'n'
*
*/



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


/**
*@brief Verifica si un string es un email o no
*@param string a verificar
*@return devuelve 1 como true y 0 como false
*/






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

/**
*@brief Verifica si un string es un numero o no
*@param string a verificar
*@return devuelve 1 como true y 0 como false
*/

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





