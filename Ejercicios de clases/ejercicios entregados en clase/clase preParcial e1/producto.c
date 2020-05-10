



#include "producto.h"


int cont = 1;

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
    int proveedores[] = {1,1,2,2,2,2,3,3,3,3};


    for(int i = 0; i< 5; i++)
    {


        listado[i].idProducto =ids[i];
        strcpy(listado[i].nombre,nombres[i]);
        listado[i].precio = precios[i];
        listado[i].stock = stocks[i];
        listado[i].idProveedor = proveedores[i];

        listado[i].estado = OCUPADO;

    }


}

/*


void baja(eProducto listado[], int tam)
{

    int index;
    char rta;

    index = buscarLegajo(listado,tam);


    if(index != -1)
    {

        printf("\n  Legajo encontrado \n ");
        mostrarProducto(listado[index]);
        rta = verificarSN("\nDesea dar de baja s/n: ");

        if(rta == 's')
        {


            listado[index].estado = LIBRE;


        }
        else
        {

            printf("\n LA BAJA A SIDO ABORTADA.");

        }







    }
    else
    {

        printf("\n LA BAJA A SIDO ABORTADA.");

    }





}

void modificarProducto(eProducto listado[], int tam)
{

    int opc;
    int index;
    char auxString[200];


    char rta;

    index = buscarLegajo(listado,tam);



   getOnlyLetters( aux.nombre,"\nIngrese nombre: ","\nNombre invalido");

        aux.precio = getFloat("Ingrese precio: ");

        aux.idProveedor = getInt("Ingrese id de proveedor: ");

        aux.stock = getInt("Ingrese stock: ");





    if(index != -1)
    {



        menuModificacion();
        opc = getInt("\nIngrese opcion: ");


        switch(opc)
        {


        case 1:

            getOnlyLetters(auxString,"\nIngrese nuevo nombre: ","\nNombre invalido");

            rta = verificarSN("\nEsta seguro que desea cambiar el nombre? s/n: ");

            if(rta == 's')
            {


                strcpy(listado[index].nombre,auxString);
                printf("\n Se ha cambiado el valor exitosamente.");

            }
            else
            {

                printf("\nCAMBIO ABORTADO.");
            }



            break;

        case 2:


              aux.precio = getFloat("Ingrese nuevo precio: ");

            rta = verificarSN("\nEsta seguro que desea cambiar el precio? s/n: ");

            if(rta == 's')
            {

                listado[index].precio = aux.precio;
                printf("\n Se ha cambiado el valor exitosamente.");

            }
            else
            {

                printf("\nCAMBIO ABORTADO.");
            }
            break;



        default:
            printf("\nOpcion invalida.\n");

        }

    }else{

        printf("\nLegajo no encontrado\n");

    }
    break;

     case 3:


            aux.stock = getInt("Ingrese nuevo stock: ");

            rta = verificarSN("\nEsta seguro que desea cambiar el precio? s/n: ");

            if(rta == 's')
            {

                listado[index].stock = aux.stock;
                printf("\n Se ha cambiado el valor exitosamente.");

            }
            else
            {

                printf("\nCAMBIO ABORTADO.");
            }
            break;



        default:
            printf("\nOpcion invalida.\n");

        }

    }else{

        printf("\nLegajo no encontrado\n");

    }
    break;

}




*/
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


/*

void Alta(eProducto listado[], int tam)
{

    eProducto aux;
    int index;
    char rta;

    index =  buscarIndiceLibre(listado,tam);

    if(index != -1)
    {



        aux.id = cont++;
        getOnlyLetters( aux.nombre,"\nIngrese nombre: ","\nNombre invalido");

        aux.precio = getFloat("Ingrese precio: ");

        aux.idProveedor = getInt("Ingrese id de proveedor: ");

        aux.stock = getInt("Ingrese stock: ");



        aux.estado = OCUPADO;


        rta = verificarSN("Esta seguro que desea ingresar este producto? s/n");

        if(rta='s')
        {



            listado[index] = aux;

            printf("\nOperacion exitosa\n");

        }
        else
        {
            printf("\nOperacion cancelada\n");
        }
    }
    else
    {
        printf("No hay lugar");

    }



}


*/



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
/*
void menuModificacion()
{

    printf("\n\t\t*******Menu de modificaciones*******\n1-Modificar Nombre\n2-Modificar stock \n3-Modificar Precio\n");

}

int cantidadDeAbonadosActivos(eProducto listadoProductos[],int tam)
{

    int cantProductosCargadas;
    for(int i = 0; i<tam; i++)
    {

        if(listadoAbonados[i].estado == OCUPADO )
        {
            cantProductosCargadas ++;

        }

    }

    return cantProductosCargadas;

}

int retornarMayor(int numeros[], int cant)
{

    int max;
    max = INT_MIN;
    for(int i = 0; i<cant; i++)
    {

        if(max < numeros[i])
        {

            max = numeros[i];
        }

    }
    return max;
}
*/

