#include <stdio.h>
#include <stdlib.h>

#define TAM 6
// ESTA ES LA FORMA DE HACER CON PUNTERO..

//  int x[] == int * x ---- char x[] == char *x

void mostrarVectorEnteros(int vec[] , int tam);

int main()
{
    int numero [TAM]; //= {0}; ESTE {} ES PARA COMPLETAR LOS LUGARES DEL ARRAY CON CEROS--


    int acumulador = 0;

    for(int i = 0; i < TAM-1 ; i++)
    {
        printf("ingrese sus numeros: ");
        scanf("%d" , &numero[i]); // --- CADA VEZ Q EL FOR CORRE &numero[i] SE COMPLETA CON CADA NUMERO Q PONEMOS

    }

    for(int i = 0 ; i < TAM ; i++ )
    {
        if(i != 5) // este IF me permite acumular los numeros
        {
            acumulador = acumulador + numero[i];
        }
        else
        {
            numero[i] = acumulador; // este ELSE es para guardar la suma de los ARRAY anterior
        }

    }

    // mostrar el vector

    mostrarVectorEnteros (numero , TAM);


    /*

    for(int i = 0 ; i < TAM ; i++)  // ESTE FOR ES PARA MOSTRAR LOS NUMEROS DEL ARRAY--
    {
        printf("%d " , numero[i]);
    }

    printf("\n\n");

*/
    return 0;
}

void mostrarVectorEnteros(int vec[] , int tam) // es para hacer una funcion--
{
        for(int i = 0 ; i < tam ; i++)
    {
        printf("%d " , vec[i]);
    }


}
