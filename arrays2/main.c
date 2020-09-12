#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [5];

    int mayor;
    int flagMayor = 1;
    int posicion;
    int mayores;
    int contadorMayores = 0;


    for(int i = 0; i < 5 ; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d" , &numeros[i]);

/*
    if(flagMayor == 1 || numeros[i] > mayor)
    {
        mayor = numeros[i];           ---------- esta bien pero es una manera de curso de ingreso
    }                                              ahora se hace cosas por separado
    flagMayor = 0;
*/
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        if(flagMayor == 1 || numeros[i] >= mayor)
        {
            mayor = numeros[i];
           // posicion = i; ---- los valores se cuentan desde 0 hasta 4 en este caso para nostrar el correcto seria:

          // posicion = i + 1;
        }
        flagMayor = 0;

    }



    printf("el mayor es: %d\n" , mayor);
    printf("la posicion es: %d" , posicion);

    for(int i = 0 ; i < 5 ; i++)
    {
        if(numeros [i] == mayor)
       printf("%d" , i);
    }
    return 0;
}
