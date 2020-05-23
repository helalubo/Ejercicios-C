#include <stdio.h>
#include <stdlib.h>


/*


Actividad: Realicen una funcion que reciba como parametro un entero, lo modifique, y retorne si pudo realizar la modificacion o no*/

int recibe (int* entero);
int main()
{

    int numero = 10;
    /*
   int modifica =  recibe(&numero);

   switch(modifica)
   {
       case 1: printf("Se realizo modificacion");
       break;

        case 0:printf("No se realizo modificacion");
       break;
   }
   */
   if(recibe(&numero)){
       printf("Se realizo modificacion");
   }else{

       printf("No se realizo modificacion");
   }





    return 0;
}

int recibe (int* entero)
{



    int flag = 0;

   if(entero!=NULL)
    {
        *entero= 400;
        flag =1;

    }









    return flag;





}
