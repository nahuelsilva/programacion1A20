#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

#define TAM 30

int main()
{
    char nombre[TAM];
    char apellido[TAM];
    char nombreApellido[61];
    int i = 0;

    getNombre(nombre, "ingrese nombre: " , "Error. Reingrese nombre: " , TAM );

    getApellido(apellido , "ingrese apellido: " , "Reingrese apellido: " , TAM);


    strcpy(nombreApellido , apellido);// sILva SILva

    strcat(nombreApellido , ","); //siLvA,

    strcat(nombreApellido , nombre);// sILVa, naHUEl

    strupr(nombreApellido);

    nombreApellido[0] = toupper(nombreApellido[0]);

    while(nombreApellido[i] != '/0')
    {
        if(nombreApellido[i] == ' ')
        {
            nombreApellido[i + 1] = toupper(nombreApellido[i + 1]);
        }
      i++;
    }

    puts(nombreApellido[i]);

    /*
    for(int = 0 ; i < strlen(nombreApellido) ; i++)
    {

    }
    */


    //printf("usted es: %s , %s" , apellido , nombre);



    return 0;
}
