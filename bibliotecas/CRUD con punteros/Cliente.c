#include "Cliente.h"
eCliente* eCliente_new()
int contIdCliente = 1;
int contIndex =0;
int sizeListadoDeClientes = 2;
{

    eCliente* pNewCliente = NULL;

    pNewCliente = (eCliente*) malloc(sizeof(eCliente));

    return pNewCliente;

}


int eCliente_inicializarPunteros(eCliente** listadoCliente, int len)
{


    int rta = 1;
    if(listadoCliente != NULL && len >0)
    {

        rta=0;

        for(int i = 0; i<len; i++)
        {

            *(listadoCliente+i) = NULL; //OJO



        }
    }
    return rta;

}

int eCliente_getEmplyIndex(eCliente* listadoCliente[], int len)
{






    int index = -1;
    int i;

    for( i = 0; i< sizeListadoDeClientes; i++)
    {
        if(listadoCliente[i] == NULL && len>0)
	{

         index =i;
       	 break;
	}


    }





    return index;


}








void Alta(eCliente* listado[], int tam)
{

    eCliente* aux;
    int index;
    char rta;

    index =  eCliente_getEmplyIndex(listado,tam);



    if(index != -1)
    {
//(nombre, apellido,localidad,teléfono,edad,sexo) .
        aux = eCliente_new();

        if(aux != NULL)
        {



            aux->idCliente = contIdCliente++;
            getOnlyLetters( aux->nombre,"\nIngrese nombre: ","\nNombre invalido");
            getOnlyLetters( aux->apellido,"\nIngrese apellido: ","\apellido invalido");
            getOnlyLetters( aux->localidad,"\nIngrese localidad: ","\ndireccion invalida");
            getPhoneNumber(aux->telefono,"\nIngrese numero de telefono: ","\nNumero de telefono incorrecto");
            aux->edad = getInt("\nIngrese edad:","\nEdad indalida" );

            aux->sexo = verificarMF("\nIngrese sexo\nm o f: ");
            // aux.estado = OCUPADO;


            rta = verificarSN("\nEsta seguro que desea ingresar esta pantalla? s/n");

            if(rta=='s')
            {


                aux->estado = OCUPADO;
                listado[index] = aux;

                eCliente_show(listado[index]);

                printf("\nOperacion exitosa\n");

            }
            else
            {
                printf("\nOperacion cancelada\n");
            }

        }
    }
    else
    {
        printf("No hay lugar");

    }



}







void eCliente_show(eCliente* pCliente)
{

    if(pCliente != NULL)
    {

        printf("\n%d%16s%16s%16s%16s%16d%16c\n",pCliente->idCliente
               ,pCliente->apellido
               ,pCliente->nombre
               ,pCliente->localidad
               ,pCliente->telefono
               ,pCliente->edad
               ,pCliente->sexo);


    }




}

void eCliente_printList(eCliente** listadoCliente, int len)
{


    for(int i = 0.; i< len; i++)
    {

        eCliente_show(listadoCliente[i]);
    }




}

eCliente* eCliente_newParametros(char* nombre,char* apellido,char* telefono, char* localidad,int edad, char sexo)
{

    eCliente* aux = NULL;

    aux = eCliente_new();

    if(aux != NULL)
    {
        aux->idCliente = contIdCliente++;
        strcpy(aux->nombre,nombre);
        strcpy(aux->apellido,apellido);
        strcpy(aux->telefono,telefono);
        strcpy(aux->localidad,localidad);
        aux->edad = edad;
        aux->sexo =sexo;

    }


    return aux;





}

int eCliente_deleteIndexInArray(eCliente** listadoCliente,int limite, int indice)
{


//ES PARA ELIMITAR UN CLIENTE
///tiene que ver con el array, recibir el indice es la clave
///Free esta asiciado a liberar RAM, recordar luego de usar free esa misma posicion la pongo en NULL
    int rta =-1;

    if(listadoCliente != NULL && indice >0 && indice < limite &&listadoCliente[indice] != NULL)
    {
        free(listadoCliente[indice]);
        listadoCliente[indice] = NULL;

        rta = 0;
    }



    return rta;





}


int eCliente_buscarPorIdArray(eCliente** listadoCliente,int limite,int id)
{

    int rta = -1;

    if(listadoCliente != NULL && id >0 && limite >0)
    {

        for(int i=0; i<limite; i++)
        {
            if(listadoCliente[i] != NULL &&  listadoCliente[i]->idCliente == id)
            {

                rta = i;
                break;
            }

        }


    }


    return rta;



}


int eCliente_borrarPorIdArray(eCliente** listadoCliente,int limite)
{

    int index;
    int id;
    char confirmacion;
    int rta = -1;

    if(listadoCliente != NULL && limite> 0 )
    {
        rta = 0;

        eCliente_printList(listadoCliente,limite);

        id = getInt("\nIngrese id correspondiente a realizar eliminacion: ","\nError, ingrese id valido");

      index =  eCliente_buscarPorIdArray(listadoCliente,limite,id);

        eCliente_show(listadoCliente[index]);
        confirmacion=verificarSN("\nEsta seguro que desea eliminar este usuario? s/n");

        if(confirmacion == 's')
        {
            eCliente_deleteIndexInArray(listadoCliente,limite,index);

        }
        else
        {


            printf("\nSe ha cancelado la eliminacion");


        }
    }



    return rta;







}

