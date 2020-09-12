#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [7];

    for(int i = 0 ; i < 7 ; i++)
    {
        printf("ingrese sus numeros");
        scanf("%d" , &numeros [i]);
    }

    printf("los numeros ingresados son: ");
    for(int i = 6 ; i >= 7  ; i--)
    {
        printf("%d" , numeros[i]);
    }



    return 0;
}
