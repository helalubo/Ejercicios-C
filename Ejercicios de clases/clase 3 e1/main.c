#include <stdio.h>
#include <stdlib.h>
float ingresarNumero();
float getArea(float radio);

int main()
{

    float num;
    float area;


    num = ingresarNumero("Ingrese numero: ");
    area =getArea(num);

    printf("el area es de %.2f", area);



    return 0;
}

/**
*@brief Permite ingresar un numero al usuario
*@param mensaje Que imprimir en pantalla antes de pedir
*@return Numero ingresado
*/

float ingresarNumero(char cadena[])
{
    float number;
    printf(cadena);
    scanf("%f",&number);

    return number;



}


/**
*@brief Calcular area de un circulo
*@param radio del circulo
*@return area calculada
*/

float getArea(float radio)
{

    float area;

    area =  3.14 * radio * radio;

    return area;

}

