#include <stdio.h>
#include <stdlib.h>

void swap(int* a , int* b);

int main()
{
    int x = 5;
    int y = 10;

    printf("a = %d -- b = %d\n" , x , y);

    swap(&x , &y);

    printf("a = %d -- b = %d" , x , y);


    return 0;
}

void swap(int* a , int* b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;


}
