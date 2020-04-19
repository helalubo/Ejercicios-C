#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 20

int main()
{
    char edad[20];
    char nombre[20];
    char apellido[20];
    char legajo[20];


    char aux[20];

    char rta;
    int tamanio;
    int flag = 0;


    do
    {
        printf("\n Desea ingresar usuario s/n: ");
        rta = getche();

        if(rta == 's')
        {
            while(flag == 0)
            {
                printf("\nIngrese nombre: ");
                gets(aux);

                tamanio = strlen(aux);





                if(tamanio < MAX-1)
                {




                    for(int i = 0; i< tamanio; i++)
                    {

                        if((aux[i]>= 'a' && aux[i]<= 'z') || (aux[i]>= 'A' && aux[i]<= 'Z') )
                        {

                            strcpy(nombre,aux);
                            flag = 1;
                            break;


                        }
                        else
                        {

                            printf("Error, nombre solo con letras");
                            flag = 0;
                            break;

                        }



                    }

                }


                else
                {
                    printf("Error,nombre demasiado largo");
                    flag = 0;

                }






            }

            flag = 0;





            while(flag == 0)
            {
                printf("\nIngrese apellido: ");
                gets(aux);

                tamanio = strlen(aux);





                if(tamanio < MAX-1)
                {




                    for(int i = 0; i< tamanio; i++)
                    {

                        if((aux[i]>= 'a' && aux[i]<= 'z') || (aux[i]>= 'A' && aux[i]<= 'Z') )
                        {

                            strcpy(apellido,aux);
                            flag = 1;
                            break;


                        }
                        else
                        {

                            printf("Error, nombre solo con letras");
                            flag = 0;
                            break;

                        }



                    }

                }


                else
                {
                    printf("Error,nombre demasiado largo");
                    flag = 0;

                }






            }

            flag = 0;





            while(flag == 0)
            {
                printf("\nIngrese edad: ");
                gets(aux);

                tamanio = strlen(aux);





                if(tamanio < MAX-1)
                {




                    for(int i = 0; i< tamanio; i++)
                    {

                        if(aux[i]>= '0' && aux[i]<= '9' )
                        {

                            strcpy(edad,aux);
                            flag = 1;
                            break;


                        }
                        else
                        {

                            printf("Error, nombre solo con edad");
                            flag = 0;
                            break;

                        }



                    }

                }


                else
                {
                    printf("Error,nombre demasiado largo");
                    flag = 0;

                }






            }



            flag = 0;





            while(flag == 0)
            {
                printf("\nIngrese legajo: ");
                gets(aux);

                tamanio = strlen(aux);





                if(tamanio < MAX-1)
                {




                    for(int i = 0; i< tamanio; i++)
                    {

                        if(aux[i]>= '0' && aux[i]<= '9' )
                        {

                            strcpy(legajo,aux);
                            flag = 1;
                            break;


                        }
                        else
                        {

                            printf("Error, nombre solo con legajo");
                            flag = 0;
                            break;

                        }



                    }

                }


                else
                {
                    printf("Error,nombre demasiado largo");
                    flag = 0;

                }






            }
        }
    }
    while(rta == 's');


    printf("\n Nombre: %s \n  Apellido: %s \n edad: %s \n legajo: %s ",nombre,apellido,edad,legajo);



    return 0;


}
