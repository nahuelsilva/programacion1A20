#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

void mostrarNombres(char nombres[] [20] , int tam);
int main()
{
    char nombres [TAM] [20] = {"jose" , "liliana" , "benicio" , "morena" , "anahi"};
    char auxiliar[100];
    /*
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i])

    }
    */
    /*
    for(int i = 0; i < 5 ; i++)
    {
        printf("%s\n" , nombres[i]);
    }
    */

    mostrarNombres(nombres , TAM);

    // hacer el ordenamiento en un funcion

    for(int i = 0; i < TAM-1 ; i++)
    {

        for(int j = i+1 ; j < TAM ; j++)
        {
            if(strcmp (nombres[i] , nombres[j]) > 0)
            {
                strcpy(auxiliar , nombres[i]);
                strcpy(nombres[i] , nombres[j]);
                strcpy(nombres[j] , auxiliar);

            }

        }
        printf("\n\n");
    }
    mostrarNombres(nombres , TAM);




    /*
    char nombre [20] = "luciana";
    printf("%s\n" , nombre);//muestro cadena dentro de un vector
    printf("%c\n" , nombre[3]);// muestro el caracter del vector

     printf("%s\n" , nombres[3]);//muestro el array 3 de la matriz

    printf("%c\n" , nombres[4][2]);// muestro el caracter de la fila 4 y en la columna 2

    */

    return 0;
}

void mostrarNombres(char nombres[] [20] , int tam)
{
      for(int i = 0; i < 5 ; i++)
    {
        printf("%s\n" , nombres[i]);
    }

}
