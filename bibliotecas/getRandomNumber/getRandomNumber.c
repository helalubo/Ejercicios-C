
#include <stdio.h>
#include <stdlib.h>


int getRandomNumber(int desde, int hasta)
{

    int rt;

    srand (time(NULL));

    rt= desde + (rand()% (hasta +1 - desde));

    return rt;

}
