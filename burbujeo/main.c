#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostarVectorEntero(int vec[] , int tam);
void ordenarVectorAscendente(int x[] , int tam);

/*
int main()
{
    int a = 5;
    int b = 10;

    int aux;

    printf("a = %d -- b = %d\n" , a , b );


    //una forma de hacer pasaje pero no es valida--

    a = b;
    b = a;

    printf("a = %d -- b = %d" , b , a );


    aux = a;
    a = b;
    b = aux;

    printf("a = %d -- b = %d" , a , b);

    return 0;
}
*/

/*

int main()
{

    for(int i = 0 ; i < TAM - 1 ; i++)
    {

        for(int j = i+1 ; j < TAM ; j++)
        {
            printf("i : %d  j : %d \n" , i , j);
        }
        printf("\n\n");

    }


    return 0;
}
*/

int main()
{

    int vec[] = {6 , 2 , 9 , 1 , 3};

    //int aux;

    mostarVectorEntero(vec , TAM);
    /*

    for(int i = 0 ; i < TAM - 1 ; i++)
    {

        for(int j = i+1 ; j < TAM ; j++)
        {

            if(vec[i] > vec[j])// criterio de ordenamiento de menor a mayor -- o mayor a menor
            {
                // swap -- ordenamiento
               aux = vec[i];
               vec[i] = vec[j] ;
               vec[j] = aux;

            }

        }
        printf("\n\n");

    }
    */

    ordenarVectorAscendente(vec , TAM);

    mostarVectorEntero(vec , TAM);


    return 0;
}

void mostarVectorEntero(int vec[] , int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        printf("%d " , vec[i]);
    }
}

void ordenarVectorAscendente(int x[] , int tam)
{
    int aux;

     for(int i = 0 ; i < tam - 1 ; i++)
    {

        for(int j = i+1 ; j < tam ; j++)
        {


            if(x[i] > x[j])// criterio de ordenamiento de menor a mayor -- o mayor a menor
            {
                // swap -- ordenamiento
               aux = x[i];
               x[i] = x[j] ;
               x[j] = aux;



            }

        }
        printf("\n\n");



    }
}
