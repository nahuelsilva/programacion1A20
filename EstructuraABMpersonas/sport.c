
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "sport.h"

void mostarDeporte(edeportes sport)
{
    printf(" %d   %s\n", sport.id, sport.descripcion);
}


int mostrarDeportes(edeportes sport[], int tam)
{
    int error = -1;

    if(sport != NULL && tam > 0)
    {
        printf("***** Listado de deportes ******\n");
        printf("----------------------------------\n");
        printf("  ID    Descripcion\n\n");
        printf("------------------------------------\n");
        for(int i=0; i<tam ; i++)
        {
            mostarDeporte(sport[i]);
        }
        printf("\n\n");
        error = 0;
    }

    return error;
}



