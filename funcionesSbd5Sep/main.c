#include <stdio.h>
#include <stdlib.h>

#include "silva.h"

/*
Una función:
Realizar una función que reciba el precio float y el porcentaje de descuento como entero,
retornar el precio con el descuento al main
*/


int main()
{
    float precio;
    int descuento;
    float rdo;

    printf("Ingrese precio:\n");
    scanf("%f" , &precio);// cuando lo recibo

    printf("ingrese descuento: \n");
    scanf("%d" , &descuento);

    rdo = preciofinal(precio , descuento);

    printf("El precio final es: %f \n" , rdo);

    return 0;
}


