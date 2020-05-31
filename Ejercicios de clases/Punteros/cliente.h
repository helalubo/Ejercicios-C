#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    int idCliente;
    char apellido[21];
    char cuil [21];


} eCliente;


/** \brief Constructor por defecto para un cliente
 *
 * \return eCliente*
 *
 */
eCliente* eCliente_new();
/** \brief Constructor con parametros permitiendo crear el cliente ya con sus valores pasados por parametros
 *
 * \param apellido[] char apellido del cliente
 * \param cuil[] char   cuil del cliente
 * \return eCliente*
 *
 */
eCliente* eCliente_newConParametros(char apellido[],char cuil[]);
/** \brief Muestra el cliente
 *
 * \param pCliente eCliente* cliente a mostrar
 * \return void
 *
 */
void showCliente(eCliente* pCliente);

int initArray(int* pArray, int limite, int valor);

int imprimirClientes(eCliente** pListaCliente,int limite);


