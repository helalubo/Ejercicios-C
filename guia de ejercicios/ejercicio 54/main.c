#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

int main()
{

    int anio;
    int flag = 0;


    anio = getInt("Ingrese anio: ");


    if(anio % 4 ==0 )
    {


    flag = 1;





    }

    if(anio % 100 == 0)
    {

        flag = 0;

        if(anio % 400 == 0){

            flag = 1;

        }
    }


    if(flag == 1){

          printf("El anio %d es bisiesto. \n",anio);
    }
    else{

          printf("El anio %d NO es bisiesto. \n",anio);
    }



    return 0;
}
