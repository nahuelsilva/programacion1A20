#include <stdio.h>
#include <stdlib.h>

#define TAM 5
int main()
{
    int legajo [TAM];;
    int nota1 [TAM];
    int nota2 [TAM];
    float promedio[TAM];
    char sexo[TAM];

    for(int i = 0; i < TAM ; i++)
    {
        printf("ingrese legajo : ");
        scanf("%d" , &legajo[i]);

        printf("ingrese nota del 1er parcial: ");
        scanf("%d" , &nota1[i]);

        printf("ingrese nota del 2do parcial: ");
        scanf("%d" , &nota2[i]);


        printf("ingrese sexo: ");
        scanf("%c" , &sexo[i]);

        promedio[i] = (float) (nota1 [i] + nota2[i])/2;

    }


    1140314482

    return 0;
}
