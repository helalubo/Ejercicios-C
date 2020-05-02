typedef char cadena [30];
#include "arrays.h"
#include "validate.h"
#include "input.h"
#include "mostrar.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void alta(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int cont)
{



    int index;
    index = indiceLibre(estados,tam);


    legajos[index] = cont;

    char auxString[50];
    getString(auxString,"\nIngrese nombre del socio: ");
    strcpy(nombres[index],auxString);
    getString(auxString,"\nIngrese apellido del socio: ");
    strcpy(apellidos[index],auxString);

    int auxInt;
    auxInt = getInt("\nIngrese edad del socio: ");

    edades[index] = auxInt;

    char auxChar;
    auxChar = verificarMF("\nIngrese sexo del socio: ");

    sexos[index] = auxChar;

    auxInt = getInt("\n \n 1-futbol \n 2-basquet \n 3-tenis \n 4-natacion \n 5-boxeo \nIngrese deporte: ");

    deportes[index] = auxInt;

    estados[index] = -1;

    printf("\n Socio ingresado con exito\n");




}




void setNombre(int legajos[], cadena nombres[], int tam)
{

    int buscar;
    int flag = 0;
    char auxChar[20];
    buscar = getInt("\nIngrese legajo del socio a modificar: ");

    for(int i = 0; i<tam; i++)
    {

        if(buscar == legajos[i])
        {

            getString(auxChar,"\n Ingrese nuevo nombre: ");
            strcpy(nombres[i],auxChar);
            flag = 1;


        }

    }

    if(flag == 0)
    {

        printf("\n No se encontro el socio con el legajo ingresado \n ");


    }




}

void setApellido(int legajos[], cadena apellidos[], int tam)
{

    int buscar;
    int flag = 0;
    char auxChar[20];
    buscar = getInt("\nIngrese legajo del socio a modificar: ");

    for(int i = 0; i<tam; i++)
    {

        if(buscar == legajos[i])
        {

            getString(auxChar,"\n Ingrese nuevo apellido: ");
            strcpy(apellidos[i],auxChar);
            flag = 1;


        }

    }

    if(flag == 0)
    {

        printf("\n No se encontro el socio con el legajo ingresado \n ");


    }




}

void setEdad(int legajos[], int edades[], int tam)
{

    int buscar;
    int flag = 0;
    int auxInt;
    buscar = getInt("\nIngrese legajo del socio a modificar: ");

    for(int i = 0; i<tam; i++)
    {

        if(buscar == legajos[i])
        {

            auxInt = getInt("\n Ingrese nueva edad: ");
            edades[i] = auxInt;
            flag = 1;


        }

    }

    if(flag == 0)
    {

        printf("\n No se encontro el socio con el legajo ingresado \n ");


    }


}


void setDeporte(int legajos[], int deportes[], int tam)
{

    int buscar;
    int flag = 0;
    int auxInt;
    buscar = getInt("\nIngrese legajo del socio a modificar: ");

    for(int i = 0; i<tam; i++)
    {

        if(buscar == legajos[i])
        {


            auxInt = getInt("\n \n 1-futbol \n 2-basquet \n 3-tenis \n 4-natacion \n 5-boxeo \nIngrese deporte: ");
            deportes[i] = auxInt;
            flag = 1;


        }

    }

    if(flag == 0)
    {

        printf("\n No se encontro el socio con el legajo ingresado \n ");


    }


}

void baja(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int valorInicial)
{

    int aux;

    char rta;

    aux = mostrarSocio(legajos,nombres,apellidos,edades,sexos,deportes,estados,tam);

    if(aux != -1)
    {

        rta =verificarSN("\nSeguro que desea borrar este socio? s/n: ");

        if(rta == 's')
        {

            for (int i = 0; i<tam; i++ )
            {

                if(legajos[i] != valorInicial)
                {

                    if(legajos[i] == aux)
                    {

                        estados[i] = valorInicial;
                        printf("\nSe ha tomado la baja exitosamente\n");

                    }


                }



            }

        }


        if(rta == 'n')
        {

            printf("\nSe ha cancelado la solicitud de baja\n");

        }



    }


}
