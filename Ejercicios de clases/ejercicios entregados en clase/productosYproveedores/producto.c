



#include "producto.h"


int contProducto = 1;

int MostrarProductoPorLegajo(eProducto listado[], int tam){

  int index = buscarLegajo(listado,tam);


    if(index != -1){

    mostrarProducto(listado[index]);
    }else{

    printf("\nNo existen resultados para la busqueda.\n");
    }



    return index;
}


void HardcodeoProductos(eProducto listado[], int tam)
{



    int ids[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][20] = {"Coca-cola","Quilmes","Brahma","Heineken","Corona","Lager","Antares","Grolsch","Patagonia","Palermo"};
    float precios[10] = {90,50,60.5,40,90,66,70,80,90,50};
    int stocks[10] = {120,80,90,50,30,24,24,12,8,30};
    int proveedores[10] = {1,1,2,2,2,2,3,3,3,3};


    for(int i = 0; i< 10; i++)
    {


        listado[i].idProducto =ids[i];
        strcpy(listado[i].nombre,nombres[i]);
        listado[i].precio = precios[i];
        listado[i].stock = stocks[i];
        listado[i].idProveedor = proveedores[i];

        listado[i].estado = OCUPADO;

    }


}


int buscarLegajo(eProducto listado[], int tam)
{

    int index  = -1;
    int legajo;
    legajo = getInt("\nIngrese legajo: ");




        for(int i = 0; i<=tam; i++)
        {

            if(listado[i].estado == OCUPADO)
            {

                if(listado[i].idProducto == legajo)
                {


                    index = i;
                    break;


                }



            }


        }








    return index;

}



void mostrarListaDeProductos(eProducto listado[],int tam)
{

    printf("%16s%16s%16s%16s\n","Id","Nombre","Precio","stock");


    for(int i = 0; i<tam; i++)
    {

        if(listado[i].estado == OCUPADO)
        {

            mostrarProducto(listado[i]);


        }


    }


}



void mostrarProducto(eProducto producto)
{

    printf("%16d%16s%16.2f%16d\n",producto.idProducto,producto.nombre,producto.precio,producto.stock);






}




int buscarIndiceLibre(eProducto listado[], int tam)
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

void inicializarEstado(eProducto listado[], int tam)
{
    int i;
    for( i = 0; i< tam; i++)
    {


        listado[i].estado = LIBRE;

    }


}

