
#include <stdio.h>
#include <stdlib.h>


int getRandomNumber(int desde, int hasta)
{

    int rt;

    srand (time(NULL));

    rt= desde + (rand()% (hasta +1 - desde));

    return rt;

}


int getMax(int num[], int max, int tam)
{

    for(int i = 0; i<tam; i++)
    {

        if(num[i] > max)
        {

            max = num[i];
        }
    }





    return max;



}

float getMin(float num[], float min, int tam)
{


    for(int i = 0; i<tam; i++)
    {
        if(num[i] < min)
        {

            min = num[i];
        }

    }


    return min;

}
