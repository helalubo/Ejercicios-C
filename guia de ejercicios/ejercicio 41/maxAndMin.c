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

int getMin(int num[], int min, int tam)
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
