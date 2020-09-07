#include <stdio.h>
#include <stdlib.h>

/* ESTE ES DE LA FAMILA 2° -- XQ pide ingresar algo en MAIN,
   pero no lo devuelve, muestra el mensaje en el VOID, es decir no tiene un RETURN hacia MAIN--

   PREGUNTAR PARA QUE SIRVE ESTO DE MOSTRAR EL MENSAJE EN LUGARES DISTINTOS
*/
void sumar(int num1 , int num2);


int main()
{
    int a;
    int b;

    printf("Ingrese numero:\n");
    scanf("%d" , &a);

    printf("ingrese otro numero:\n");
    scanf("%d" , &b);

    sumar(a , b); // tengo q llamar a la funcion sumar -- cuando el programa llega aca, busca SUMAR--

    return 0;
}

void sumar(int num1 , int num2)
{
    int resultado;

    resultado = num1 + num2;

    printf("El resultado es: %d" , resultado);

}
