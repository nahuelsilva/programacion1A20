#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    char nombre [20];

    char auxCad[100];// lo q hace este auxiliar es medir lo q estan ingresando y no vuelca a nombre si menor a nombre

    printf("ingrese su nombre: ");
    fflush(stdin);
    gets(auxCad);

    while(strlen(auxCad) >= 20)
    {
        printf("nombre demasiado largo. Reingrese nombre: ");
        fflush(stdin);
        gets(auxCad);

    }

    strcpy(nombre , auxCad);

    printf("su nombre es: %s\n\n.. " , nombre);






    return 0;
}
