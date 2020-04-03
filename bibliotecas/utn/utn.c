#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/** \brief Pide numero entero y lo devuelve
 *
 * \param mensaje que indica que dato pedir.
 *
 * \return entero
 *
 */


int getInt(char mensaje[])
{

    int aux;

    printf("%s",mensaje);
    scanf("%d",&aux);

    return aux;



}

/** \brief Pide numero flotante y lo devuelve
 *
 * \param mensaje que indica que dato pedir.
 *
 * \return flotante
 *
 */

float getFloat(char mensaje[])
{

    float aux;

    printf("%s",mensaje);
    scanf("%f",&aux);

    return aux;



}

/** \brief Pide caracter y lo devuelve
 *
 * \param mensaje que indica que dato pedir.
 *
 * \return caracter
 *
 */

char getChar(char mensaje[])
{


    char aux;

    printf("%s",mensaje);
    aux = getche();

    return aux;


}



/**
*@brief Obtiene un string.
*@param cadena = puntero de string.
*@param mensaje = mensaje a mostrar al pedir el string
*/


void getString(char* cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);
    scanf("%s",&aux);

    strcpy(cadena,aux);





}