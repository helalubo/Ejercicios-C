#include <string.h>
#include <limits.h>

typedef struct
{
    int idCliente;
    char nombre[51];
    char apellido[51];
    char localidad[51];
    char telefono[20];
    int edad;
    char sexo;
    int estado;

} eCliente;


int eCliente_inicializarPunteros(eCliente** listadoCliente, int len); //1
int eCliente_getEmplyIndex(eCliente** listadoCliente, int len);
void eCliente_show(eCliente* pCliente);
void eCliente_printList(eCliente** listadoCliente, int len);
eCliente* eCliente_new();
eCliente* eCliente_newParametros(char* nombre,char* apellido,char* telefono, char* localidad,int edad, char sexo);

int eCliente_deleteIndexInArray(eCliente** listadoCliente,int limite, int indice);

int eCliente_buscarPorIdArray(eCliente** listadoCliente,int limite,int id);


void Alta(eCliente* listado[], int tam);
int eCliente_borrarPorIdArray(eCliente** listadoCliente,int limite);