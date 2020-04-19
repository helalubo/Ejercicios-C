/*
ARRAYS PARALELOS
/Crear modelo de club atletico,
cargar usuarios
nombre
apellido
edad
sexo
fecha de antiguedad
deportes que practican y contemplar mas de uno

se pide alta socio
,baja de socio
poder modificar datos segun legajo
mostrar usuarios
promedio de edades de socios
promedio de edades que practican futbol
el deporte que menos socios,
ordenar socios por nombre.


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrays.h"
#include "input.h"
#include "validate.h"
#include "ordering.h"
#include "socios.h"
#include "mostrar.h"
#include "operacionesSocios.h"

#define TAM 7
#define VALORINICIAL -1


typedef char  cadena [30];

int main()
{

    int legajos[TAM];
    int cont = 1;
    cadena nombres[TAM];
    cadena apellidos[TAM];
    int edades[TAM];
    char sexos[TAM];

    int deportes[TAM];
    int estados[TAM];
    int opc;
    int opcModificar;

    float promedioEdadesSocios ;
    float promedioEdadesSociosFutbol;



    inicializarArray(estados,TAM,VALORINICIAL);


    cadena auxString;
    int aux;
    cadena ordenados[TAM];



    do
    {

        menu();
        opc = getInt("Ingrese opcion: ");

        switch(opc)
        {

        case 1:

            alta(legajos,nombres,apellidos,edades,sexos,deportes,estados,TAM,cont++);

            break;


        case 2:
            mostrarSocios(legajos,nombres,apellidos,edades,sexos,deportes,estados,TAM);

            break;

        case 3:

            menuModificar();
            opcModificar = getInt("Ingrese opcion: ");

            switch(opcModificar)
            {

            case 1:
                setNombre(legajos,nombres,TAM);
                break;
            case 2:
                setApellido(legajos,apellidos,TAM);
                break;
            case 3:
                setEdad(legajos,edades,TAM);
                break;
            case 4:
                setDeporte(legajos,deportes,TAM);
                break;

            case 0:
                printf("\n Saliendo de menu de modificacion de socios\n ");
                break;



            }


            break;

        case 4:
            mostrarSocio(legajos,nombres,apellidos,edades,sexos,deportes,estados,TAM);
            break;

        case 5:

            promedioEdadesSocios = promedioDeArray(estados,edades,TAM,VALORINICIAL);



            // promedioEdades(edades,estados,TAM,-1);
            printf("\n El promedio de las edades es de %.2f\n ",promedioEdadesSocios);
            break;

        case 6:
            promedioEdadesSociosFutbol = promedioDeEdadesDeFutbol(estados,edades,deportes,TAM,-1);
            printf("\n El promedio de las edades de los socios que juegan futbol es de %.2f\n ",promedioEdadesSociosFutbol);

            break;
        case 7:

            deporteConMenosSocios(deportes,TAM,estados,VALORINICIAL);
            break;

        case 8:
            baja(legajos,nombres,apellidos,edades,sexos,deportes,estados,TAM,VALORINICIAL);

            break;

        case 9:



            for(int i = 0; i<TAM ; i++)
            {


                strcpy(ordenados[i],nombres[i]);

            }


            for(int i = 0; i<TAM-1; i++)
            {



                for(int j = i+1; j<TAM; j++)
                {

                    if(estados[i] != VALORINICIAL)
                    {

                        if(strcmp(nombres[j],nombres[i])<1)
                        {


                            strcpy(auxString,nombres[i]);

                            strcpy(nombres[i],nombres[j]);

                            strcpy(nombres[j],auxString);


                            aux = estados[i];
                            estados[i] = estados[j];
                            estados[j] = aux;




                        }
                    }

                }

            }


            for(int i = 0; i<TAM; i++)
            {

                if(estados[i] != VALORINICIAL)
                {

                    printf("%s \n",nombres[i]);


                }






            }

            break;

        case 0:
            break;






        }


    }
    while(opc != 0);









    return 0;
}








