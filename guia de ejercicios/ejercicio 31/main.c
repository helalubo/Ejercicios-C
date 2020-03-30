
/**
*Por teclado se ingresa el valor hora de un empleado.
*Posteriormente se ingresa el nombre del empleado, la antigüedad
* y la cantidad de horas trabajadas en el mes. Se pide calcular el
* importe a cobrar teniendo en cuenta que el total resulta de multiplicar
* el valor hora por la cantidad de horas trabajadas, hay que sumarle la
* cantidad de años trabajados multiplicados por $30, y al total de todas esas
* operaciones restarle el 13% en concepto de descuentos.
* Imprimir el recibo correspondiente con el nombre, la antigüedad,
* el valor hora, el total a cobrar en bruto, el total de descuentos y
*  el valor neto a cobrar
*/

#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

int main()
{

    int horaEntrada;
    int horaSalida;
    int horasTrabajadasAlDia= 0;
    int horasAlMes;
    int valorHora;
    int importeBruto;
    float importeNeto;
    float descuentos;
    char nombre [50];
    int antiguedad;


    int importeACobrar;

    horaEntrada = getInt("Ingrese hora de entrada: ");
    horaSalida = getInt("Ingrese hora de salida: ");


    for(int i= horaEntrada ; i< horaSalida; i++)
    {

        horasTrabajadasAlDia++;

    }

    horasAlMes = horasTrabajadasAlDia * 20;


    valorHora = getInt("Ingrese valor de empleado por hora: ");

    printf("Ingrese nombre del empleado: ");
    fflush(stdin);
    scanf("%s",&nombre);

    antiguedad = getInt("Ingrese antiguedad: ");

    importeBruto = (horasAlMes *valorHora) +( antiguedad * 30);

    importeNeto = (float)importeBruto * 0.87;


    descuentos = (float)importeBruto - importeNeto;

    printf(" nombre: %s \nla antigüedad: %d \nel valor hora: %d \nel total a cobrar en bruto: %d \n  el total de descuentos: %.2f  \n neto a cobrar: %.2f",nombre,antiguedad,valorHora,importeBruto,descuentos,importeNeto);









    return 0;
}
