

#include "proveedor.h"



int cont = 1;

int MostrarProveedorPorLegajo(eProveedor listado[], int tam)
{

    int index = buscarLegajoProveedor(listado,tam);


    if(index != -1)
    {

        mostrarProveedor(listado[index]);
    }
    else
    {

        printf("\nNo existen resultados para la busqueda.\n");
    }



    return index;
}


void HardcodeoProveedores(eProveedor listado[], int tam)
{


    int ids[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][20] = {"Coca-cola","Quilmes","Brahma","Heineken","Corona","Lager","Antares","Grolsch","Patagonia","Palermo"};
    char localidad[10][20] = {"Barracas","Quilmes","Quilmes","La Paternal","Palermo","San Telmo","Cordoba Capital","La Boca","Patagonia","Palermo"};



    for(int i = 0; i< 5; i++)
    {


        listado[i].idProveedor =ids[i];
        strcpy(listado[i].nombre,nombres[i]);
        strcpy(listado[i].localidad,localidad[i]);
        listado[i].estado = OCUPADO;

    }


}


int buscarLegajoProveedor(eProveedor listado[], int tam)
{

    int index  = -1;
    int legajo;
    legajo = getInt("\nIngrese legajo: ");




    for(int i = 0; i<=tam; i++)
    {

        if(listado[i].estado == OCUPADO)
        {

            if(listado[i].idProveedor == legajo)
            {


                index = i;
                break;


            }



        }


    }








    return index;

}







void mostrarListaDeProveedores(eProveedor listado[],int tam)
{

    printf("%16s%16s%16s\n","Id","Nombre","Localidad");


    for(int i = 0; i<tam; i++)
    {

        if(listado[i].estado == OCUPADO)
        {

            mostrarProveedor(listado[i]);


        }


    }


}



void mostrarProveedor(eProveedor proveedor)
{

    printf("%16d%16s%16s\n",proveedor.idProveedor,proveedor.nombre,proveedor.localidad);






}





int buscarIndiceLibreProveedor(eProveedor listado[], int tam)
{


    int index = -1;
    int i;

    for( i = 0; i< tam; i++)
    {
        if(listado[i].estado == LIBRE )

            index =i;


    }





    return index;


}

void inicializarEstadoProveedor(eProveedor listado[], int tam)
{


    int i;
    for( i = 0; i< tam; i++)
    {


        listado[i].estado = LIBRE;

    }


}

