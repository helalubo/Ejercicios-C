#include "proveedorProductos.h"


void mostrarListaProveedoresyProductos(eProveedor listadoProveedores[], int tamProveedores,eProducto listadoProductos[], int tamProductos)
{


    char flag;

    for(int i = 0; i< tamProveedores; i++)
    {

        if(listadoProveedores[i].estado == OCUPADO)
        {
            printf("\n*************************Proveedor************************************\n");
            mostrarProveedor(listadoProveedores[i]);
            flag = 'n';


        for(int k =0; k<tamProductos; k++)
        {

            if(listadoProductos[k].estado == OCUPADO)
            {


                if(listadoProveedores[i].idProveedor == listadoProductos[k].idProveedor)
                {
                    printf("\nProductos:\n");
                    flag = 's';
                    mostrarProducto(listadoProductos[k]);

                }



            }



        }


        if(flag == 'n')
        {

            printf("\nNo tiene productos.\n");

        }

        }
    }




}
