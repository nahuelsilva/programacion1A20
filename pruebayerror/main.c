#include <stdio.h>
#include <stdlib.h>

void menu();
int sumar(int x , int y);
int restar(int x , int y);
int multiplicar(int x , int y);
int dividir(int x , int y);

int main()
{
    menu();

    return 0;
}
void menu()
{
    char opcion;

    printf("--Calculadora--\n\n");

    printf("a-- sumar\n");
    printf("b-- restar\n");
    printf("c-- multiplicar\n");
    printf("d-- dividir\n");

    printf("elija lo q desea realizar: \n");
    fflush(stdin);
    scanf("%c" , &opcion);

    int x;
    int y;

    int rdo;

    printf("ingrese 1er numero: \n");
    scanf("%d" , &x);

    printf("ingrese 2do numero: \n");
    scanf("%d" , &y);

    switch(opcion)
    {
        case 'a':
            rdo = sumar(x , y);
            printf("El resultado es: %d" , rdo);
            break;

        case 'b':
            rdo = restar(x , y);
            printf("La resta es: %d" , rdo);
            break;

        case 'c':
            rdo = multiplicar(x , y);
            printf("La multiplicacion es: %d" , rdo);
            break;

        case 'd':
            rdo = dividir(x , y);
            printf("Su division es: %d" , rdo);
            break;

        default :
            printf("Caracter incorrecto");

    }

}

int sumar(int x , int y)
{
    int resultado;

    resultado = x + y;

    return resultado;
}

int restar(int x , int y)
{
    int resultado;

    resultado = x - y;

    return resultado;
}

int multiplicar(int x , int y)
{
    int resultado;

    resultado = x * y;

    return resultado;
}

int dividir(int x , int y)
{
    int resultado;

    resultado =  x / y;

    return resultado;
}
