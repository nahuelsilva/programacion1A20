#include <stdio.h>
#include <stdlib.h>

// 3° Familia no recibe nada pero devuelve algo -- es decir que en MAIN no recibe nada de datos,
// solo recibe el RETURN RESULTADO para mostrarlo --

int sumar();

int main()
{
    int rto;

    rto = sumar();

    printf("El resultado es %d: " , rto);

    return 0;
}

int sumar()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero: \n");
    scanf("%d" , &num1);

    printf("Ingrese otr numero: ");
    scanf("%d" , &num2);

    resultado = num1 + num2;

    return resultado;

}
