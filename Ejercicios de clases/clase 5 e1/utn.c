#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int getInt(char mensaje[])
{
    char aux[60];
    int verificar = 0;
    int respuesta;



    while(verificar == 0)
    {

        getString(aux,mensaje);
        verificar= isNumber(aux);

        if(verificar == 1)
        {

            respuesta = atoi(aux);
            break;




        }

        else
        {

            printf("Error, debe ingresar un numero");


        }



    }



    return respuesta;



}

int isFloat(float number)
{

    int aux = 0;
    int flag = 0;

    aux = number;

    if(number - aux != 0)
    {

        flag = 1;

    }


    return flag;

}


float getFloat(char mensaje[])
{

    float aux;

    printf("%s",mensaje);
    scanf("%f",&aux);




    return aux;



}



char getChar(char mensaje[])
{


    char aux;

    printf("%s",mensaje);
    aux = getche();

    return aux;


}






void getString(char* cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);
    scanf("%s",&aux);

    strcpy(cadena,aux);
    fflush(stdin);





}


int isNumber(char cadena[])
{

    int i = 0;
    int flag = 0;

  //  printf("\n*********%s ********",cadena);


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if(cadena[i] >= '0' && cadena [i]<='9' || cadena[0] == '-')
            {

                flag = 1;
            }
	 else{
                flag = 0;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = 0;


    }



    return flag;
}




