#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief Da formato a nombre y apellido agregandoles mayusculas y una coma entre ellos
 *
 * \param nombre[] char nombre
 * \param apellido[] char apellido
 * \param nombreYApellido[] char variable donde se pasara nombre y apellido ya formateado
 * \return void
 *
 */
void formatoNombres(char nombre[], char apellido[], char nombreYApellido[]);

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreYApellido[20];


    printf("Ingrese nombre: ");
    gets(nombre);

    printf("Ingrese apellido: ");
    gets(apellido);


    formatoNombres(nombre,apellido,nombreYApellido);

    puts(nombreYApellido);



    return 0;
}

void formatoNombres(char nombre[], char apellido[], char nombreYApellido[]){


 int tam;

  strcpy(nombreYApellido,apellido);
    strcat(nombreYApellido, ", ");
    strcat(nombreYApellido,nombre);

    tam = strlen(nombreYApellido);
    strlwr(nombreYApellido);

    nombreYApellido[0] -= 32;

    for(int i = 0; i<tam; i++)
    {

        if(nombreYApellido[i] == ' ')
        {
            nombreYApellido[i+1] -=  32;
        }



    }


}
