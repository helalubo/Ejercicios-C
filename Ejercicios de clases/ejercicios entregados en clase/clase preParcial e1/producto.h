#define OCUPADO 1
#define LIBRE 0

//tamanios


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

/** \brief Hardcodea un listado definido
 *
 * \param listado[] eAbonado donde se carga el hardcodeo
 * \param tam int tamanio del array
 * \return void
 *
 */
void HardcodeoProductos(eProducto listado[], int tam);
/** \brief Inicializa un array poniendolo como estado LIBRE 0
 *
 * \param listado[] eProducto listado a inicializar
 * \param tam int tamanio
 * \return void
 *
 */
void inicializarEstado(eProducto listado[], int tam);
/** \brief Busca indice libre
 *
 * \param listado[] eAbonado listado donde buscar
 * \param tam int tamanio de listado
 * \return int retorna el indice libre o -1 si todos los indices estan ocupados
 *
 */
int buscarIndiceLibre(eProducto listado[], int tam);
/** \brief Da de alta una entidad
 *
 * \param listado[] eAbonado listado donde se agregara la entidad
 * \param tam int tamanio de listado
 * \return void
 *
 */
void Alta(eProducto listado[], int tam);
/** \brief Muestra una entidad
 *
 * \param abonado eAbonado entidad a mostrar
 * \return void
 *
 */
void mostrarProducto(eProducto abonado);
/** \brief muestra toda la lista de abonados
 *
 * \param listado[] eAbonado lista a mostrar
 * \param tam int   tamanio de la lista
 * \return void
 *
 */
void mostrarListaDeProductos(eProducto listado[],int tam);
/** \brief Busca un legajo/ id
 *
 * \param listado[] eAbonado listado donde buscara
 * \param tam int tamanio de listado
 * \return int retorna posicion en el array donde se encuentra el id o -1 si no lo encuentra.
 *
 */
int buscarLegajo(eProducto listado[], int tam);
/** \brief Modifica la entidad
 *
 * \param listado[] eAbonado lista donde se encuentra la entidad a modificar
 * \param tam int tamanio de listado
 * \return void
 *
 */
void modificarProducto(eProducto listado[], int tam);
/** \brief Da de baja una entidad cambiando su estado de OCUPADO 1 a LIBRE 0
 *
 * \param listado[] eAbonado listado donde buscar entidad
 * \param tam int   tamanio de listado
 * \return void
 *
 */
void baja(eProducto listado[], int tam);
/** \brief Menu de modificacion de netidades
 *
 * \return void
 *
 */
void menuModificacion();
/** \brief Muestra una entidad ingresando el legajo
 *
 * \param listado[] eAbonado listado donde buscar
 * \param tam int   tamanio de entidad
 * \return int devuelve posicion donde se encuentra el legajo de la entidad o -1 si no la encuentra
 *
 */
int MostrarProductoPorLegajo(eProducto listado[], int tam);

/** \brief Indica la cantidad de abonados en estado ocupado
 *
 * \param listado[] eProducto lista a verificar
 * \param tam int tamanio de listado
 * \return int cantidad de abonados activos
 *
 */
int cantidadDeProductosActivos(eProducto listadoProductos[],int tam);

int retornarMayor(int numeros[], int cant);
