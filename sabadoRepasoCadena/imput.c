#include <stdio.h>
#include <string.h>
#include "imput.h"
void getNombre(char vec[] , char mensaje[] , char mensajeError[] , int cantidadCarateres)
{
    char buffer[1024];

    printf("%s" , mensaje);
    gets(buffer);

    while(strlen(buffer) > cantidadCarateres-1)
    {
        printf("%s" , mensajeError);
        gets(buffer);

    }

    strcpy(vec , buffer);
}
