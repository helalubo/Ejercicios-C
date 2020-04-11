#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "validate.h"


/*
Agregar a la biblioteca utn.h funciones para obtener
y validar diferentes tipos de valores:

- Solo números, ej. 123436679 v
- Solo letras, ej. abBD
- Alfanumericos, ej. ab555gT6
- Teléfonos, ej. 4XXX-XXXX

Realizar un programa que pida al usuario el ingreso de
un dato y determine con cuales de los tipos cumple.
*/


int main()
{

    char valor[60];
    int esNumero;
    int esLetras;
    int esAlfanumerico;
    int esTelefono;

    getString(valor,"Ingrese valor a verificar: ");

    esNumero = onlyNumbers(valor);
    esLetras = onlyLetters(valor);
    esAlfanumerico = onlyAlphanumeric(valor);
    esTelefono = onlyPhoneNumbers(valor);

    if(esNumero == 1){

        printf("\nEs dato de solo numeros");
    }else{
     printf("\nNO es dato solo numeros");
    }

      if(esLetras == 1){

        printf("\nEs dato de solo letras");
    }else{
     printf("\nNO es dato de solo letras");
    }


    if(esAlfanumerico == 1){

        printf("\nEs dato de solo alfanumericos");
    }else{
     printf("\nNO es dato solo alfanumericos");
    }

      if(esTelefono == 1){

        printf("\nEs dato de telefono");
    }else{
     printf("\nNO es dato de telefono");
    }









    return 0;
}

