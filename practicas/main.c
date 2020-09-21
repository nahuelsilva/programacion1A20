#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int mayor;

    int flagMayor = 1;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("ingrese sus numeros: ");
        scanf("%d" , &numeros[i]);

    }


    for(int i = 0 ; i < 5 ; i++)
    {
         if(flagMayor == 1 || numeros[i] > mayor)
        {

            mayor = numeros[i];


        }
        flagMayor = 0;

    }


     printf("el mayor es: %d" , mayor);



    return 0;
}
