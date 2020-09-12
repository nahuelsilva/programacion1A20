 #include <stdio.h>
#include <stdlib.h>

void menu();

int sumar(int num1 , int num2);
int restar(int num1 , int num2);
int multiplicacion(int num1 , int num2);
float division(int num1 , int num2);

int main()
{
    menu();

    return 0;
}

void menu()
{
    int num1;
    int num2;

    int rdoS;
    int rdoR;
    int rdoM;
    float rdoD;

    printf("---CALCULADORA---\n\n");

    printf("--Esta calculadora hara todos los calculos + - * /-- \n\n");
    printf("Ingrese 1er numero: ");
    scanf("%d" , &num1);

    printf("Ingrese 2do numero: ");
    scanf("%d" , &num2);

    rdoS = sumar(num1 , num2);
    rdoR = restar(num1 , num2);
    rdoM = multiplicacion(num1 , num2);
    rdoD = division(num1 , num2);

    printf("La suma de %d + %d es: %d\n" , num1 , num2 , rdoS);
    printf("El resta de %d - %d es: %d\n" , num1 , num2 , rdoR);
    printf("La multiplicacion de %d * %d es: %d\n" , num1 , num2 , rdoM);
    printf("La division de %d / %d es: %.2f" , num1 , num2 , rdoD);

}

int sumar(int num1 , int num2)
{
    int resultadoSuma;

    resultadoSuma = num1 + num2;

    return resultadoSuma;
}

int restar(int num1 , int num2)
{
    int resultadoResta;

    resultadoResta = num1 - num2;

    return resultadoResta;
}

int multiplicacion(int num1 , int num2)
{
    int resultadoM;

    resultadoM = num1 * num2;

    return resultadoM;
}

float division(int num1 , int num2)
{
    float resultadoD;

    resultadoD = (float) num1 / num2;

    return resultadoD;
}
