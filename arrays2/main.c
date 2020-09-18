#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int numeros [TAM];
    int maximo;
    //int indice;
    int flagMaximo = 1;

    // 1°er for es para cargar los numeros en el ARRAY

    for(int i = 0 ; i < TAM ; i++)
    {
        printf("ingrese sus numeros: ");
        scanf("%d" , &numeros[i]);
    }

    // 2°do FOR es para encontar el maximo

    for(int i = 0 ; i < TAM ; i++)
    {
        //printf("%d " , numeros[i]); solo para mostrar el mensaje


        if(flagMaximo == 1 || numeros[i] >= maximo)
        {

            maximo = numeros[i];
           // indice = i;         // esto es para encontrar el indice donde se encuentra el numero maximo

        }

        flagMaximo = 0; //bajamos la bandera para q solo guarde una vez cuando entra el primer numero

    }

    printf("\nEl numero maximo es: %d y su indice es: " , maximo);

    // 3°er FOR es para encontrar el indice del maximo si hay mas de uno

    for(int i = 0 ; i < TAM ; i++)
    {
        if(numeros[i] ==  maximo)
        {
            printf("%d " , i +1);
        }

    }




    return 0;
}
