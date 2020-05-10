#define OCUPADO 1
#define LIBRE 0




#include <string.h>

#include "input.h"
#include "validate.h"





typedef struct
{
    int idProducto;
    char nombre[20];
    float precio;
    int stock;
    int idProveedor;
    int estado;

} eProducto;


void inicializarEstado(eProducto listado[], int tam);

int buscarIndiceLibre(eProducto listado[], int tam);

void mostrarProducto(eProducto producto);

void mostrarListaDeProductos(eProducto listado[],int tam);

int buscarLegajo(eProducto listado[], int tam);

void HardcodeoProductos(eProducto listado[], int tam);

int MostrarProductoPorLegajo(eProducto listado[], int tam);
