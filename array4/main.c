#include <stdio.h>
#include <stdlib.h>

#define TAM 6
int main()
{
    int numero [TAM] = {0};


    int acumulador = 0;

    for(int i = 0; i < TAM-1 ; i++)
    {
        printf("ingrese sus numeros: ");
        scanf("%d" , &numero[i]);

    }

    for(int i = 0 ; i < TAM ; i++ )
    {
        if(i != 5)
        {
            acumulador = acumulador + numero[i];
        }
        else
        {
            numero[i] = acumulador;
        }

    }

    for(int i = 0 ; i < TAM ; i++)
    {
        printf("%d " , numero[i]);
    }

    printf("\n\n");


    return 0;
}
