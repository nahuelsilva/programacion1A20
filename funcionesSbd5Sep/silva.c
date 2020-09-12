
#include "silva.h"

float preciofinal (float precio , int descuento)
{
    float soloDescuento;
    float precioConDescuento;

    soloDescuento = (precio * descuento) / 100; // UN CASTEO SE HACE CUANDO TENGO DOS ENTEROS Y DIVIDO ES0S.. EJEMPLO: PROMEDIO
    precioConDescuento = precio - soloDescuento;

    return precioConDescuento;

}
