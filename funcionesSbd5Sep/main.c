#include <stdio.h>
#include <stdlib.h>

/*
Una función:
Realizar una función que reciba el precio float y el porcentaje de descuento como entero,
retornar el precio con el descuento al main

*/
float preciofinal (float precio , int descuento);

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

float preciofinal (float precio , int descuento)
{
    float soloDescuento;
    float precioConDescuento;

    soloDescuento = (precio * descuento) / 100; // UN CASTEO SE HACE CUANDO TENGO DOS ENTEROS Y DIVIDO ES0S.. EJEMPLO: PROMEDIO
    precioConDescuento = precio - soloDescuento;

    return precioConDescuento;

}
