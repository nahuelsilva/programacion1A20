#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
pedir al usuario posicion y el valor mientras el quiera y luego mostralos el array
*/

int main()
{
    int numero [TAM] = {0};
    int posicion;
    char respuesta = 's';

    while(respuesta == 's')
    {

        printf("ingrese posicion del numero: \n");
        scanf("%d" , &posicion);
        while(posicion < 1 || posicion > 10)
        {
            printf("Error..Reingrese posicion del numero: \n");
            scanf("%d" , &posicion);

        }

        printf("ingrese valor:\n ");
        scanf("%d" , &numero[posicion - 1]);// digo posicion -1 xq para el usuario es 10 para el programador es 9


        printf("desea seguir: \n");
        fflush(stdin);
        scanf("%c" , &respuesta);

    }


    for(int i = 0 ; i < TAM ; i++)// EL 2°do FOR ES PARA LEERLO al ARRAY
    {
        printf("%d " , numero[i]);
    }


    return 0;
}
