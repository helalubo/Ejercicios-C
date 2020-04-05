int searchIndex(int buscar, int array[],int tam )
{

    int index = -1;

    for(int i = 0; i< tam; i++)
    {

        if(array[i] == buscar)
        {

            index = i;




        }



    }

    if(index == -1)
    {


        printf("No se encontro resultados");

    }

    return index;

}