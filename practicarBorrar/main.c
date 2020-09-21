#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main()
{
    int edad [MAX];
    float sueldo [MAX];
    float suma = 0;
    float promedio;
    float auxiliar;

    for(int i = 0; i < MAX ; i++)
    {
        printf("ingrese la edad para el legajo %d : " , i+1);
        scanf("%d" , &edad[i]);

        printf("ingrese sueldo para el legajo %d: " , i+1);
        scanf("%f" , &auxiliar);

        //sueldo[i] = auxiliar;

    }

    for(int i = 0 ; i < MAX ; i++)
    {
        suma = (float)suma + sueldo[i];
    }


    promedio = suma / MAX;

    printf("el sueldo promedio es %.2f: " , promedio);











    /*

    int v[5];

    for(int i = 0 ; i < 5; i++)
    {
        printf("ingrese valores para cada vector: ");
        scanf("%d" , &v[i]);

    }


*/

    return 0;
}




