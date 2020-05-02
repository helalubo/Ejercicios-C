#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char cadena [30];




void menu()
{

    printf(" \n1-Dar alta a socio\n 2-Mostrar usuarios\n 3-Modificar usuarios\n 4-buscar usuario \n 5-Promedio de edades de socios \n 6-Promedio de edades de futbol\n 7-Mostrar deporte con menos socios\n 8-baja de socio\n 9-Ordenar por nombre\n 0-salir\n");


}


void mostrarSocios (int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam)
{

    char nombreDeporte[20];


    for(int index = 0; index< tam; index++)
    {

        if(estados[index] != -1)
        {



            switch(deportes[index])
            {

            case 1:
                strcpy(nombreDeporte,"futbol");
                break;

            case 2:
                strcpy(nombreDeporte,"basquet");
                break;



            case 3:
                strcpy(nombreDeporte,"tenis");
                break;



            case 4:
                strcpy(nombreDeporte,"natacion");
                break;

            case 5:
                strcpy(nombreDeporte,"boxeo");
                break;




            }


            printf("\tLegajo\tNombre\tApellido\tEdad\tsexo\tdeporte\t\n");
            printf("\t%d\t%s\t%s\t%d\t%c\t%s\t\n",legajos[index],nombres[index],apellidos[index],edades[index],sexos[index],nombreDeporte);
        }
    }



}


void menuModificar()
{

    printf("1-Modificar nombre\n2-Modificar Apellido\n3-Modificar edad\n4-Modificar deporte \n 0-cancelar\n ");

}



int  mostrarSocio (int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam)
{

    char nombreDeporte[20];
    int buscar;

    int flag = 0;
    buscar = getInt("Ingrese legajo de usuario: ");




    for(int index = 0; index< tam; index++)
    {




        if(estados[index] != -1)
        {

            if(buscar == legajos[index])
            {



                flag = 1;

                switch(deportes[index])
                {

                case 1:
                    strcpy(nombreDeporte,"futbol");
                    break;

                case 2:
                    strcpy(nombreDeporte,"basquet");
                    break;



                case 3:
                    strcpy(nombreDeporte,"tenis");
                    break;



                case 4:
                    strcpy(nombreDeporte,"natacion");
                    break;

                case 5:
                    strcpy(nombreDeporte,"boxeo");
                    break;




                }


                printf("Legajo\tNombre\tApellido\tEdad\tsexo\tdeporte\n");
                printf("%d\t%s\t%s\t%d\t%c\t%s\n",legajos[index],nombres[index],apellidos[index],edades[index],sexos[index],nombreDeporte);
            }
        }
    }
    if(flag == 0 )
    {

        printf("\nLegajo no encontrado\n");
        buscar = -1;

    }

    return buscar;

}
