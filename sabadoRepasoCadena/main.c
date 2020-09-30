#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#define N 15
#include "imput.h"

int main()
{
    char nombre[N];

    getNombre(nombre, "ingrese nombre: " , "Error. Reingrese nombre: " , N );
    /*
    char buffer[1024];

    printf("Ingrese nombre: ");
    gets(buffer);

    while(strlen(buffer) > 14)
    {
        printf("error. ingrese nuevamente nombre: ");
        gets(buffer);

    }

    strcpy(nombre , buffer);
    //fgets(nombre , 30 , stdin);
    */

    printf("su nombre es: %s" , nombre);


    return 0;
}
