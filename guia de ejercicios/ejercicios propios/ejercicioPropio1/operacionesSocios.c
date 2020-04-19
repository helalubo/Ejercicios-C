
typedef char cadena [30];

float promedioDeEdadesDeFutbol (int estados[], int edades[],int deportes[],int tam, int valorDeInicio )
{

    float promedio;
    int acum = 0;
    int totalEdades = 0;


    for(int i = 0; i< tam; i++)
    {

        if( estados[i] != valorDeInicio)
        {

            if(deportes[i] == 1)
            {

                acum++;
                totalEdades += edades[i];



            }




        }




    }





    promedio = (float)totalEdades / acum;

    if(totalEdades == 0)
    {

        printf("No hay socios que practiquen ese deporte");
    }








    return promedio;
}



void deporteConMenosSocios(int deportes[], int tam, int estados[],int valorInicial)
{


    int cantidades[] = {0,0,0,0,0};



    int min;
    int indexMin;




    for(int i = 0; i< tam; i++ )
    {


        if(deportes[i] == 1)
        {
            cantidades[0]++;


        }

        if(deportes[i] == 2)
        {
            cantidades[1]++;


        }
        if(deportes[i] == 3)
        {
            cantidades[2]++;

        }
        if(deportes[i] == 4)
        {
            cantidades[3]++;

        }

        if(deportes[i] == 5)
        {
            cantidades[4]++;

        }


    }






    min = retornarMenor(cantidades,tam,valorInicial);


    for(int i=0; i<tam ; i++)
    {




        if(min == cantidades[i])
        {

            indexMin = i;
            break;


        }








    }



    if(indexMin == 0)
    {
        printf("\nEl deporte es  futbol\n");

    }


    if(indexMin == 1)
    {

        printf("\nEl deporte es basquet\n");
    }



    if(indexMin == 2)
    {
        printf("\nEl deporte  es tenis\n");
    }



    if(indexMin == 3)
    {
        printf("\nEl deporte es natacion\n");
    }

    if(indexMin == 4)
    {
        printf("\n El deporte es boxeo\n");
    }



}









