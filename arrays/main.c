#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [7]; //= {23, 5, 6, 1, 99};esto del {} es para cargarlo secuencialmente y q no funcione el 1°er for


    for(int i = 0 ; i < 7 ; i++) // EL 1°er FOR ES PARA CARGARLO AL ARRAY
    {
        printf("ingrese sus numeros: ");
        scanf("%d" , &numeros[i]);
    }


    //printf("%d " , numeros[i]); esto no ejecutaria el mensaje ya q no esta camiando por el array


    printf("\nLos numeros son: ");

    for(int i = 6 ; i >= 0 ; i--)// EL 2°do FOR ES PARA LEERLO al ARRAY
    {
        printf("%d " , numeros[i]);//poner "los numeros: %d" eso va hacer q el mensaje se repita 5 veces
                                     //    las veces q iltere el for,,, ese mesaje tiene q ir antes 2do for
    }


    printf("\n\n");

    return 0;
}
