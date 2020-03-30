#include <stdio.h>
#include <stdlib.h>

#include "utn.h"
int main()
{

    int ha;
    int ma;
    int sa;


    ha = getInt("Ingrese hora: ");
    ma = getInt("Ingrese minutos: ");
    sa= getInt("Ingrese segundos: ");



    for( int h = ha; h<= 23; h++)
    {

        for( int m = ma; m<=59; m++ )
        {

            for( int s = sa; s<=59; s++)
            {

                printf("%d : %d : %d \n",h,m,s);


            }

        }


    }



    return 0;
}
