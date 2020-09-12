#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char opcion;
    float resultado;
    char respuesta;

    respuesta = 's';

    do{
    system("cls");

    printf("--PRIMERA CALCULADORA--\n");
    printf("a -- sumar--\n");
    printf("b -- restar--\n");
    printf("c -- multiplicar--\n");
    printf("d -- dividir--\n");
    printf("e -- salir--\n");
    fflush(stdin);
    scanf("%c" , &opcion);



    switch(opcion)
    {
      case 'a':
        printf("ingrese un numero: ");
        scanf("%d" , &num1);

        printf("Ingrese otro numero: ");
        scanf("%d" , &num2);

        resultado = num1 + num2;
        printf("EL resultado es: %.2f\n" , resultado);

        break;

      case 'b':
        printf("ingrese un numero: ");
        scanf("%d" , &num1);

        printf("Ingrese otro numero: ");
        scanf("%d" , &num2);

        resultado = num1 - num2;
        printf("La resta es: %.2f\n" , resultado);

        break;

      case 'c':
        printf("ingrese un numero: ");
        scanf("%d" , &num1);

        printf("Ingrese otro numero: ");
        scanf("%d" , &num2);

        resultado = num1 * num2;
        printf("El resultado de la multiplicacon es: %.2f\n" , resultado);

        break;

      case 'd':
        printf("ingrese un numero: ");
        scanf("%d" , &num1);

        printf("Ingrese otro numero: ");
        scanf("%d" , &num2);

        resultado = num1 / num2;
        printf("la division es: %.2f\n" , resultado);

        break;

      case 'e':
        printf("chauuu\n");
        respuesta = 'n';

        break;

      default :
        printf("ese caracter es invalido\n");
        break;


    }

    system("pause");

    }while(respuesta == 's');
    return 0;
}
