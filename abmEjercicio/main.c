#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char menu();


int main()
{
    char seguir = 's';
    char confirma;

    do
    {
        switch(menu())
        {

        case 'a':


            break;
        case 'b':


            break;
        case 'c':

            break;
        case 'd':


            break;
        case 'e':


            break;
        case 'f':

            break;


        case 'g':
            printf("Confirma salida?: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }

            break;
        default:
            printf("Opcion invalida!!!\n");

        }

        system("pause");

    }
    while( seguir == 's');


    return 0;
}


char menu()
{
    char opcion;
    system("cls");

    printf("*** ABM Personas ***\n\n");
    printf("a Alta\n");
    printf("b Baja\n");
    printf("c Modificion\n");
    printf("d Listar\n");
    printf("e Ordenar\n");
    printf("f Informes\n");
    printf("g Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());

    return opcion;
}
