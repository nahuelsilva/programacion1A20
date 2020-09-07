#include <stdio.h>
#include <stdlib.h>

// familia 1 recibe algo y devuelve algo
// familia 2 recibe algo y no devuelve nada
// familia 3 no recibe nada y devuelve algo
// familia 4 no recibe nada y no devuelve nada

// PRIMER EJEMPLOOO DE FUNCION

/*
int main()
{


    char x = 'A';               //
                                //
    printf("Hello world!\n");   // primer ejemploo de funcion
                                //
    x = tolower(x);             //Esta linea es de familia 1° xq recibe algo y devuelve algo


    //return 0;
}
*/

void saludar(); // PROTOTIPOO


int main() // ESTO SERIA LA LLAMADA A LA FUNCION LO Q EL PROGRAMA MOSTRARIA POR PANTALLA
{
    saludar();
    saludar();

    return 0;
}

void saludar() // ESTO ES LO Q QUEREMOS Q EL PROGRMA HAGA O REALICE(el desarrollo de la funcion)... aca no lleva RETURN 0;
{

    printf("Hola, buen dia..\n");

}





