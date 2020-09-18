#include <stdio.h>
#include <stdlib.h>

#define TAM 5
// burbujeo 1

//void mostarVector(int x[] , int tam);

int main()
{

    int vec[] = {6 , 4, 2 , 9, 5};

    int aux;

    for(int i= 0 ; i < TAM - 1; i++)
    {


        for(int j = 0; j > TAM + 1 ; j++)
        {
            if(vec [i] > vec [j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }


    }

    return 0;
}
