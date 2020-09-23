#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define ASC 1
#define DEC 0

void ordenarVectorEntero(int victor[] , int tam , int ascendente);
void mostrarVectorEntero(int x [] , int tam);
int main()
{
    int vec[] = {8 , 3, 1, 9, 5};

    mostrarVectorEntero(vec , TAM);

    ordenarVectorEntero(vec , TAM , DEC);

    mostrarVectorEntero(vec , TAM);




    return 0;
}

void ordenarVectorEntero(int victor[] , int tam , int ascendente)
{
    int aux;


        for(int i = 0 ; i < tam - 1 ; i++)
        {

            for(int j = i +1 ; j < tam ; j++)
            {
                if(ascendente)
                {

                    if(victor[i] > victor[j])
                    {
                        aux = victor[i];
                        victor[i] = victor[j];
                        victor[j] = aux;


                    }
                }
                else
                {
                     if(victor[i] < victor[j])
                    {
                        aux = victor[i];
                        victor[i] = victor[j];
                        victor[j] = aux;

                    }

                }

            }

            printf("\n\n");

    }

}

void mostrarVectorEntero(int x [] , int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        printf("%d " , x[i]);
    }
}
