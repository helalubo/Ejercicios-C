
void inicializarArray(int numeros[], int cant, int valorDeInicio)
{

    for(int i = 0; i<cant; i++)
    {

        numeros[i] = valorDeInicio;

    }



}
void mostrarArray(int numeros[], int cant)
{
    for(int i = 0; i<cant; i++)
    {

        printf("numeros en la posicion #%d: %d\n",i+1,numeros[i]);
    }

}
int CantidadCargadaArray(int numeros[], int cant,int valorDeInicio)
{

    int aux = 0;


    for(int i = 0; i<cant; i++)
    {

        if(numeros[i] != valorDeInicio)
        {

            aux++;
        }
    }

    return aux;


}
int CantidadNoCargadaArray(int numeros[], int cant,int valorDeInicio)
{

    int aux = 0;


    for(int i = 0; i<cant; i++)
    {

        if(numeros[i] == valorDeInicio)
        {

            aux++;
        }
    }

    return aux;


}
int retornarMayor(int numeros[], int cant)
{

    int max;
    max = numeros[0];

    for(int i = 0; i<cant; i++)
    {

        if(max < numeros[i])
        {

           max = numeros[i];
        }

    }
    return max;
}

int retornarMenor(int numeros[], int cant,int valorDeInicio)
{

    int min;
    min = numeros[0];

    for(int i = 0; i<cant; i++)
    {

        if(min > numeros[i] && numeros[i] != valorDeInicio)
        {

            min = numeros[i];
        }

    }
    return min;
}

int indiceLibre(int numeros[],int cant)
{

    int i;

    for( i =0; i<cant; i++)
    {

        if(numeros[i] == -1)
        {

            break;

        }

    }

    if(i == cant)
    {

        i = -1;
    }

    return i;
}

float promedio(int numeros[],int cant, int valorDeInicio )
{

    float promedio;
    int cantidadCargada = 0;
    int acum = 0;


    for( int i =0; i<cant; i++)
    {

        if(numeros[i] != valorDeInicio)
        {

            acum += numeros[i];
            cantidadCargada++;

        }

        promedio = (float)acum / cantidadCargada;







    }

        return promedio;
}
