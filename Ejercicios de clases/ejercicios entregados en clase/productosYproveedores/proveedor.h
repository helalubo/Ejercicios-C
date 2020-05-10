#define OCUPADO 1
#define LIBRE 0

//tamanios


#include <string.h>

#include "input.h"
#include "validate.h"






typedef struct
{
    int idProveedor;
    char nombre[20];
   char localidad[20];
    int idProducto;
    int estado;

} eProveedor;

int MostrarProveedorPorLegajo(eProveedor listado[], int tam);


void HardcodeoProveedores(eProveedor listado[], int tam);

int buscarLegajoProveedor(eProveedor listado[], int tam);

void mostrarListaDeProveedores(eProveedor listado[],int tam);

void mostrarProveedor(eProveedor proveedor);


int buscarIndiceLibreProveedor(eProveedor listado[], int tam);


void inicializarEstadoProveedor(eProveedor listado[], int tam);


