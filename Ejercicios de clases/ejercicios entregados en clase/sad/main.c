
//codigo hecho en Code::Blocks
#include <stdio.h>
#include <string.h>

#define T 3
int otrostrlen(char cadena[]);

int main()
{

  //ejercicio 1



/*
    typedef struct{

        int entero;
        float flotante;
        char cadena[20];



    }eDatos;

    eDatos listaDatos[T] = {{25,2.5,"Heiniken"},{20,7.5,"Quilmes"},{20,8.5,"Corona"}};




    for(int i = 0; i<T-1; i++)
    {



        for(int j = i+1; j<T; j++)
        {

            if((listaDatos[i].entero> listaDatos[j].entero) || (listaDatos[i].entero == listaDatos[j].entero && strcmp(listaDatos[j].cadena,listaDatos[i].cadena)<1 ))
            {

                 eDatos aux;

                aux = listaDatos[i];
                listaDatos[i] = listaDatos[j];
                listaDatos[j] = aux;

            }


        }


    }


    for(int k = 0; k<T; k++)
    {
        printf("%8d %.2f %8s \n ",listaDatos[k].entero,listaDatos[k].flotante,listaDatos[k].cadena);
    }




**/

//2) Crear una función que simule el comportamiento de la función strlen (Sin usar esta función). Crear la función y probarla desde el main.

/////////////Ejercicio 2

/*
char cadena[] = "alejandro";

int cantidad;

    cantidad = otrostrlen(cadena);


    printf("La cadena tiene %d\n ",cantidad);

*/

///////ejercicio 3

//3) Crear un párrafo en donde se pueda ver la relación entre los siguientes términos: Código fuente*, Compilador*, Código objeto, Archivo ejecutable*, Linkeador*.


/*
Un COMPILADOR traduce programas en un lenguaje de alto nivel a código de archivo EJECUTABLE mientras que
El programa que combina la salida del compilador con varias bibliotecas de funciones para producir una imagen ejecutable se denomina LINKEADOR,  y , se llama código objeto al código que resulta de la compilación del código fuente.



**/

    return 0;
}


//ejercicio 2
/*

int otrostrlen(char cadena[]){

int cont = 0;
int i= 0;

 while(cadena[i] != '\0' )
        {

                cont++;

            i++;
        }

return cont;


}
*/
