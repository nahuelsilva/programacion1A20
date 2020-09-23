#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarVectorEntero(int vec[] , int tam);
void sumarVetores(int a[] , int b[] , int c[] , int tam);
int main()
{
    int vec1 [] = {2,1,4,5,2};
    int vec2 [] = {5,7,2,4,1};
    int total[TAM];

    /*

    -- LO COMENTAMOS XQ HICIMOS UNA FUNCION PARA SUMAR LOS VECTORES Y NO USAR EL MAIN()

    for(int i = 0 ; i < TAM ; i++)
    {
        total[i] = vec1[i] + vec2[i];

    }
    */

    sumarVetores(vec1 , vec2 , total , TAM);



    mostrarVectorEntero(vec1 , TAM);

    mostrarVectorEntero(vec2 , TAM);

    mostrarVectorEntero(total , TAM);

    return 0;
}

void mostrarVectorEntero(int vec[] , int tam)
{
    for(int i = 0; i < tam ; i++)
    {
        printf("%d " , vec[i]);

    }
    printf("\n\n");
}

void sumarVetores(int a[] , int b[] , int c[] , int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        c[i] = a[i] + b[i];
    }


}
