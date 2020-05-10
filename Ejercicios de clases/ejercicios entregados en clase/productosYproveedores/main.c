#include <stdio.h>
#include <stdlib.h>

#include "proveedorProductos.h"

#define TPROD 10
#define TPROV 10

int main()
{

eProducto listaProductos[TPROD];
inicializarEstado(listaProductos,TPROD);
HardcodeoProductos(listaProductos,TPROD);

///////////////////////////////////////////////////
eProveedor listaProveedores[TPROV];
inicializarEstadoProveedor(listaProveedores,TPROV);
HardcodeoProveedores(listaProveedores,TPROV);

///////////////////////////////////////////
mostrarListaProveedoresyProductos(listaProveedores,TPROV,listaProductos,TPROD);

   return 0;
}
