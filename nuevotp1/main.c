#include <stdio.h>
#include <stdlib.h>

int menu(int , int);

int sumar(int num1 , int num2);// puedo o no poner los num1 y num2 xq no influyen en mi operacion
int restar(int num1 , int num2);
int multiplicacion(int num1 , int num2);
float division(int num1 , int num2);

int main()
{
    int num1 = -1;
    int num2 = -1;
    int opcion;

    int rdoS;
    int rdoR;
    int rdoM;
    float rdoD;



    opcion = menu(num1 , num2);

    while(opcion != 5)
    {


        switch(opcion)
        {

            case 1:
                printf("ingrese primer operador: \n");
                scanf("%d" , &num1);
                break;

            case 2:
                printf("ingrese 2do operador: \n");
                scanf("%d" , &num2);
                break;

            case 3:
                printf("realizando operaciones con exito:\n");
                rdoS = sumar(num1 , num2);
                rdoR = restar(num1 , num2);
                rdoM = multiplicacion(num1 , num2);
                rdoD = division(num1 , num2);
                break;

            case 4:
                printf("LA suma es: %d\n" , rdoS);
                printf("la resta es: %d\n" , rdoR);
                printf("la multiplicacion es: %d\n" , rdoM);
                printf("la division es: %.2f\n" , rdoD);
                break;


            default:
                printf("Error.. caracter invalido\n");
                break;

        }

        system("pause");
        opcion = menu(num1 , num2);// meto los numeros actualzados xq sino me estaria contado los -1 de cada num1 y num2

    }

    return 0;

    }



int menu(int num1 , int num2)
{
    int opcion;


        system("cls");

        printf("--Calculadora--\n\n");

        if(num1 >= 0 ) // num1 = -1 es para q me imprima el else y ya tome el valor num1 = 0
        {
            printf("1-Ingrese numero A = %d\n" , num1);

        }
        else
        {
            printf("1-Ingrese A = x\n");
        }

        if(num2 >= 0)
        {
            printf("2-Ingrese numero B = %d\n" , num2);
        }
        else
        {
            printf("2-Ingrese B = y\n");
        }

        printf("3- Calcular todas las operaciones\n");
        printf("4- Mostar resultado\n");
        printf("5- Salir\n\n");
        printf("Elija una opcion: ");
        scanf("%d" , &opcion);


    return opcion;

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
