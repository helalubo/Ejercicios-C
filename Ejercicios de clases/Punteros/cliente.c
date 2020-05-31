#include "cliente.h"


int contIdCliente =1;

void showCliente(eCliente* pCliente)
{

    if(pCliente != NULL)
    {

        printf("id: %d\nApellido: %s \n cuil: %s\n",pCliente->idCliente,pCliente->apellido,pCliente->cuil);


    }



}






eCliente* eCliente_new()
{

    eCliente* cliente;
    cliente = (eCliente*) calloc(sizeof(eCliente),1);



    return cliente;
}
eCliente* eCliente_newConParametros(char apellido[],char cuil[])
{


    eCliente* pCliente;

    pCliente = eCliente_new();

    if(pCliente != NULL)
    {

        pCliente->idCliente = contIdCliente++;
        strcpy(pCliente->apellido,apellido);
        strcpy(pCliente->cuil,cuil);

    }



    return pCliente;






}


int initArray(int* pArray, int limite, int valor)
{

    int retorno= -1;
    if(pArray !=NULL && limite>0)
    {
        retorno =0;
        for(int i = 0; i<limite; i++)
        {

            *(pArray+i) = valor;
        }

    }

    return retorno;


}


int imprimirClientes(eCliente** pListaCliente,int limite)
{



    int retorno =-1;

    if(pListaCliente != NULL && limite >0)
    {

        for(int i=0; i<limite; i++)
        {

            showCliente(*(pListaCliente+i));


        }
    }



    return retorno;



}

