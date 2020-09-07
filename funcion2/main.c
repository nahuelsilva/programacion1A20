#include <stdio.h>
#include <stdlib.h>

// --- ESTE ES DE LA FAMILIA 1° -- EL CUAL RECIBE ALGO Y DEVUELVE ALGO--

int sumar(int num1 , int num2);

int main()
{
    int a;
    int b;
    int rdo;

    printf("Ingrese un numero: \n");
    scanf("%d" , & a);

    printf("Ingrese otro numero: \n");
    scanf("%d" , & b);

    rdo = sumar(a , b);

    printf("El resultado es: %d\n" , rdo);

    return 0;
}

int sumar(int num1 , int num2)
{
    int resultado;

    resultado = num1 + num2;

    return resultado;

}
