#include <stdio.h>
#include <stdlib.h>



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
