#include <stdio.h>
#include <stdlib.h>

/** \brief busca cada ocurrencia de un caracter y lo reemplaza por otro
 *
 * \param vec[] char vector sobre el cual se realializa la busqueda
 * \param tam int tamanio del vector
 * \param a char caracter a buscar y reemplazar
 * \param b char caracter q reemplaza
 * \return int la cantidad de caracter reemplazado
 *
 */
int buscarRemplazar(char vec[] , int tam , char a , char b);

void  mostarVecatorChar(char vec[] ,int tam);

int main()
{
    char letras [] = {'s' , 'r' , 'u' , 'p' , 's' , 's' , 'a' , 'd' , 'f' , 's' , 'l'};

    char x = 's';

    char y = 'O';

    int ocurrencias;


     mostarVecatorChar(letras , 11);

    ocurrencias = buscarRemplazar(letras , 11 , x , y);

    mostarVecatorChar(letras , 11);

    printf("Se remplazaron %d caracteres: \n" , ocurrencias);

    return 0;
}
int buscarRemplazar(char vec[] , int tam , char a , char b)
{
    int contador = 0;

    for(int i = 0 ; i < tam ; i++)
    {
        if(vec[i] == a)
        {
            vec[i] = b;
            contador++;
        }

    }



    return contador;
}
void  mostarVecatorChar(char vec[] ,int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        printf("%c ", vec[i]);
    }
    printf("\n\n");

}
