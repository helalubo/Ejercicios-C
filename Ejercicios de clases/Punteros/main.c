#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cliente.h"






int main()
{

    /*
        /////
        /////https://www.youtube.com/watch?v=sdo7miC8jSQ CLASE 0 PUNTEROS
        /////
        int auxInt = 10;
        char auxChar = 'a';

        //printf("%p",&auxInt);
        ///Imprimir direccion de memoria %p para imprimir punteros direcciones de memoria

        /// int 4b c
        ///char 2 bit y 1 de posicion de memoria)

        ///pasar las posiciones de memoria de un puntero a otro

        auxInt = (int) &auxChar;

        printf("auxInt %d",auxInt);

        ///ver direcciones de memoria, se accede a la direccion con el & si esta sin este simbolo significa que esta retornando el valor y no la direccion de memoria ... usar & para acceso a memoria

    */

    /////
    /////https://www.youtube.com/watch?v=pbjB6l4xMBQ CLASE 1 PUNTEROS
    /////


    //es buena practica inicializar los punteros en NULL


///   & ====>  PARA ALMACENAR UNA POSICION DE MEMORIA EN UN PUNTERO A LA HORA DE IGUALAR
/// %p ====> PARA IMPRIMIR VALOR DE PUNTERO (EL NUMERO DE POSICION DE MEMORIA EL VALOR)
/// * ====>OPERADOR DE DIRECCION (NO CONFUNDIR CON EL DE PUNTERO) ESTE OPERADOR DEVUELVE EL CONTENIDO EN LA POSICION APUNTADA POR EL PUNTERO.



//int* puntero;
//int variableInt;

//variableInt = 4;

//puntero = &variableInt; ///PASO LA DIRECCION DE MEMORIA DE VARIABLEINT AL PUNTERO, CON ESTA LINEA DE CODIGO ALMACENO EL 4 EN EL PUNTERO

//printf("%d",*punteroInt); ///ACA OBTENGO LO QUE HAY EN LA DIRECCION DE MEMORIA Y LO PASO CON EL OPERADOR DE DIRECCION QUE HACE QUE LA DIRECCION DE MEMORIA GUARDADA EN PUNTEROS SE PUEDA PASAR A INT.

/// * hace referencia al valor al que apunta el puntero y debo utilizarlo para igualar o configurar o operar de algunaforma el valor, el valor de el puntero se obtiene con * que es el operador de direccion.




///la idea seria apuntar a una variable, poder configurarla con el puntero(accediendo a el valor con el operador de direccion),directamente tocando la memoria.

    /*

    int* punteroInt = NULL;
    char* punteroChar = NULL;
    float* punteroFloat = NULL;

    int auxInt = 10;
    char auxChar = 'b';
    float auxFloat = 3.14;

    punteroInt = &auxInt;
    punteroChar= &auxChar;
    punteroFloat =&auxFloat;



    printf("%d\n",*punteroInt);


    printf("%c\n",*punteroChar);

    printf("%.2f\n",*punteroFloat);

    printf("\n******************\n");


    *punteroInt = 22;
    *punteroChar ='A';
    *punteroFloat = 7.7;


    printf("%d\n",*punteroInt);
    //punteroInt = 22; ///ERROR , SIEMPRE EN PUNTEROS PARA CONFIGURAR EL VALOR UNA VEZ OBTENIFO USAR EL * PARA CONFIGURAR EL  DATO.

    printf("%d\n verificacion",*punteroInt);

    printf("%c\n",*punteroChar);

    printf("%.2f\n",*punteroFloat);

    */
///////////////////////////////////////
////////////////////////////https://www.youtube.com/watch?v=xujd4olvCK0
//////////////////////////////////////// PARTE 2

    /*

        eCliente* auxCliente;
        eCliente* auxCliente2;

     auxCliente2=  eCliente_newConParametros("Rodriguez","21-47061127-4");
        auxCliente=  eCliente_newConParametros("De Moraiz","20-39068081-4");
        //showCliente(auxCliente);


        auxCliente2=  eCliente_newConParametros("Rodriguez","21-47061127-4");
       // showCliente(auxCliente2);
    */
    //printf("%p",&auxCliente);



    ///COMO HACER UN CONSTRUCTOR?
    /// puede o no tener argumentos


    ///Crear un array de punteros de clientes, inicializar sus valores, crear alta baja modificacion y baja


    eCliente** pListadoDeClientes = NULL;
    eCliente** pAux = NULL;

    int sizeListadoDeClientes =2;
    pListadoDeClientes = (eCliente**) malloc(sizeof(eCliente*)*sizeListadoDeClientes);
    int index =0;







    eCliente* auxCliente;
    auxCliente =  eCliente_newConParametros("Magali","22-566998847-8");
    eCliente* auxCliente2;
    auxCliente2 =  eCliente_newConParametros("Maite","22-99548847-8");
    eCliente* auxCliente3;
    auxCliente3 =  eCliente_newConParametros("Alejandro","22-39068081-4");

  eCliente* auxCliente4;
    auxCliente4=  eCliente_newConParametros("Daiana","22-37065081-2");



   pListadoDeClientes[index]= auxCliente;
   index++;
    pListadoDeClientes[index]= auxCliente2;
    index++;


   imprimirClientes(pListadoDeClientes,sizeListadoDeClientes);///


    if(index ==sizeListadoDeClientes)
    {

        pAux = (eCliente**) realloc(pListadoDeClientes,2);
        if(pAux != NULL)
        {

        printf("\nSE AGRANDO LA MEMORIA\n");
        pListadoDeClientes = pAux;

        sizeListadoDeClientes +=2;

        }
    }

      pListadoDeClientes[index]= auxCliente3;
      index++;
      pListadoDeClientes[index]= auxCliente4;


  //  showCliente(pListadoDeClientes[1]);
    // showCliente(auxCliente2);


   // printf("\nEl size es de %d",sizeListadoDeClientes);



    imprimirClientes(pListadoDeClientes,sizeListadoDeClientes);







    return 0;
}
