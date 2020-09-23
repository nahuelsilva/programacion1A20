 #include <stdio.h>
#include <stdlib.h>

void duplicar(int* p);
//void duplicarVector(int vector[] , int tam);
//void mostrarVector(int vec[] , int tam);

int main()
{
    /*

    int victor[] = {2 , 4, 6};

    mostrarVector(victor , 3);

    duplicarVector(victor , 3);

     mostrarVector(victor , 3);

    */



    int x = 20;

    printf("x vale: %d\n" , x);

    duplicar(&x);

    printf("*p vale: %d" , x);




    return 0;
}

void duplicar(int* p)
{
   // printf("z vale: %d\n" , z);

    *p = *p *2;

   // printf("z2 vale: %d\n" , z);
}

/*
void duplicarVector(int vector[] , int tam)
{
    for(int i=0 ; i < tam ; i++)
    {
        vector[i] = vector[i]*2;
    }


}

void mostrarVector(int vec[] , int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        printf("%d " , vec[i]);
    }

    printf("\n\n");


}
*/
