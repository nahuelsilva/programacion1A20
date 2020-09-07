#include <stdio.h>
#include <stdlib.h>

/*
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado
el mínimo ingresado
el promedio
la cantidad de edades ingresadas

*/

int main()
{
    int edad;
    char respuesta = 's';
    int contador_edad = 0;
    int acumulador_edad = 0;
    float promedio;
    int flag_edad = 1;
    int maximo;
    int minimo;


    while(respuesta == 's')
    {

        printf("Ingrese edad: ");

        scanf("%d", & edad);

        if(contador_edad == 0)
        {
            maximo = edad;
            minimo = edad;

        }
        else
        {
            if(edad > maximo)
            {
                maximo = edad;
            }
            else
            {
                if(edad < minimo)
                {
                    minimo = edad;
                }

            }

        }


        /*
        if(flag_edad == 1 || edad > maximo )
        {
            maximo = edad;
        }
        flag_edad = 0;


        if(flag_edad == 1 || edad < minimo)
        {
            minimo = edad;
        }

        flag_edad = 0;
        */

        contador_edad ++;

        acumulador_edad = acumulador_edad + edad;




        printf("Desea seguir ingresando edades s o n: ");
        fflush(stdin);
        scanf("%c", &respuesta);

    }


    promedio = (float) acumulador_edad / contador_edad;

    printf("El promedio de edades es: %2f \n ", promedio );

    printf("El numero maximo es: %d \n" , maximo);

    printf("El numero minimo es: %d \n" , minimo);
    return 0;
}
