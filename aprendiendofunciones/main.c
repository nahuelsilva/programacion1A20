#include <stdio.h>
#include <stdlib.h>

// EMPEZANDO FUNCIONES.. TE VEO COMPLICADO..

int funcionamiento(); // PROTOTIPOO..

int main() // es el cuerpo del programa..
{
    //al empezar el programa a correr..

    funcionamiento(); //1° ESTO ES LO PRIMERO Q SE EJECUTA. y busca FUNCIONAMIENTO q es al cual estamos llamndo.

    printf("Estamos dentro del MAIN..\n\n"); // 3° una vez q sale del FUNCIONAMIENTO(Linea 21).. SE EJECUTA ESTA LINEA..


    system("pause");
    return 0;
}

int funcionamiento()
{
    printf("Estamos dentro del FUNCINAMIENTOO..\n\n"); // 2° ESTO ES LO SEGUNDO Q HACE EL PROGRAMA.. una vez q aplica el return vuelve a MAIN.



    return 0;
}
