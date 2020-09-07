#include <stdio.h>
#include <stdlib.h>

// 4° Familia: NO recibe nada y NO devuelve nada , solo hay q hacer el LLAMADO a la funcion

void sumar();

int main()
{
    sumar(); // proba comentando este codigo -- siempre hay q hacer el LLAMADO a la funcion--

    return 0;
}

void sumar()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese numero: \n");
    scanf("%d" , &num1);

    printf("Ingrese otro numero: \n");
    scanf("%d" , &num2);

    resultado = num1 + num2;

    printf("El resultado es: %d" , resultado);
}
