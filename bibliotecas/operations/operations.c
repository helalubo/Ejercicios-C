int sumarArray(int array[], int tam)
{

    int total = 0;

    for(int i = 0; i<tam; i++)
    {


        total+= array[i];
    }

    return total;




}


float sumarArrayF(float array[], int tam)
{

    float total = 0;

    for(int i = 0; i<tam; i++)
    {


        total+= array[i];
    }

    return total;




}




float getAverage(float total, int cant){

float aux;

aux = total / cant;

return aux;


}
