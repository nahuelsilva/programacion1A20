#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "fechas.h"
#include "personas.h"
#include "sport.h"
//#include "dataStore.h"

#define TAM 10
#define TAM_D 6

char menu();

int mostrarXsexo(ePersona personas[], int tam, edeportes sports[], int tamD, char sexo);
int mostrarXanio(ePersona personas[], int tam, edeportes sports[], int tamD, int anio);

int main()
{

    // int isEmpty;  1 esta vacia -- 0 esta ocupado

    char seguir = 's';
    char confirma;
    char sexo;
    int anio;
    ePersona lista[TAM];
    edeportes deportes[TAM_D] =
    {
        {1000, "No practica"},
        {1001, "Bicicleta"},
        {1002, "Patin"},
        {1003, "Esqui"},
        {1004, "Surf"},
        {1005, "Parapentes"}
    };


    int proximoLegajo = 1000;
    int rtaBaja;
    int rtaModifica;
    if(inicializarPersonas(lista,  TAM) == 0)
    {
        printf("inicialzacion exitosa..\n\n");
    }
    else
    {
        printf("Fallo al inicializar..\n\n");
    }

    proximoLegajo = (proximoLegajo+1) + harcodearPersonas(lista, TAM, 5);


    do
    {
        switch(menu())
        {

        case 'a': // alta
            if(altaPersona(lista, TAM, proximoLegajo) == 0)
            {
                proximoLegajo++;
                printf("Alta exitosa\n");
            }
            else
            {
                printf("NO se pudo hacer el alta..\n");
            }

            mostrarPersonas(lista, TAM , deportes , TAM_D);

            break;

        case 'b': // baja
            rtaBaja = bajaPersona(lista, TAM , deportes , TAM_D);
            if(rtaBaja == 0)
            {
                printf("se realizo la baja correctamente..\n\n");
            }
            else
            {
                if(rtaBaja == 1)
                {
                    printf("problema al raliazar la baja..\n\n");
                }
                else
                {
                    printf("baja cancelado por el usuario.\n\n");
                }
            }

            mostrarPersonas(lista, TAM , deportes , TAM_D);



            break;

        case 'c': // modificar
            system("cls");
            mostrarPersonas(lista, TAM , deportes , TAM_D);
            rtaModifica = modificarPersona(lista, TAM , deportes , TAM_D);

            if(rtaModifica == 0)
            {
                printf("Modificacion con exito.\n");
            }
            else
            {
                printf("No se pudo modificar.\n");
            }

            mostrarPersonas(lista, TAM , deportes , TAM_D);


            break;

        case 'd': // listar
            mostrarPersonas(lista, TAM , deportes , TAM_D);
            break;


        case 'e': // ordenar
            if(ordenarPersonasSexoAltura(lista, TAM, DESC, DESC) == 0)
            {
                printf("Se ordeno la lista\n");
            }
            else
            {
                printf("Problemas al ordenar el vector\n");
            }


            break;


        case 'f': // informes


            break;


        case 'g': // ordenar por sexo

            printf("Ingrese sexo: \n");
            fflush(stdin);
            scanf("%c", &sexo);
            mostrarXsexo(lista, TAM, deportes , TAM_D , sexo);


            break;

        case 'h': // ordenar por anio

            printf("Igrese anio: \n");
            scanf("%d", &anio);
            mostrarXanio(lista, TAM, deportes , TAM_D , anio);


            break;
/*
        case 'i': // listar por deportes
            system("cls");
            mostrarDeportes(deportes , TAM_D);


            break;
*/
        case 'z': // salir
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

    printf("***************************************** ABM PERSONAS *******************************************\n\n");
    printf("a Alta\n");
    printf("b Baja\n");
    printf("c Modificacion\n");
    printf("d Listar\n");
    printf("e Ordenar\n");
    printf("f Informes\n");
    printf("g Mostrar por sexo\n");
    printf("h Mostrar por anio de nacimiento\n");
    printf("i Listar deportes\n");
    printf("z Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());

    return opcion;
}

int mostrarXsexo(ePersona personas[], int tam, edeportes sports[], int tamD, char sexo)
{
    int error = 1;
    int flag = 0;

    if(personas != NULL && tam > 0 && (sexo == 'f' || sexo == 'm'))
    {
        system("cls");
        printf("        ** Listado de Personas **\n\n");
        printf("Legajo   Nombre    Sexo    Altura      Nacimiento   Deportes\n\n");
        printf("--------------------------------------------------------------\n");
        for(int i = 0 ; i < tam ; i++)
        {
            if(personas[i].isEmpty == 0 && personas[i].sexo == sexo)
            {
                mostrarPersona(personas[i], sports , tamD);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("\n    No hay personas en la lista!!\n");
        }
        else
        {
            printf("\n\n");
        }
        error = 0;
    }

    return error;

}

int mostrarXanio(ePersona personas[], int tam, edeportes sports[], int tamD, int anio)
{
    int retorno = -1;
    int flag = 0;

    if(personas != NULL && tam > 0 && anio > 0)
    {
        system("cls");
        printf("        ** Listado de Personas **\n\n");
        printf("Legajo   Nombre    Sexo    Altura      Nacimiento   Deportes \n\n");
        printf("--------------------------------------------------------------\n");

        for(int i=0; i<tam ; i++)
        {
            if(personas[i].isEmpty == 0 && personas[i].fNacimiento.anio == anio)
            {
                mostrarPersona(personas[i], sports , tamD);

                flag = 1;
            }

        }
        if(flag == 0)
        {
            printf("No hay personas con ese anio.\n\n");
        }
        else
        {
            printf("\n\n");
        }

        retorno = 0;

    }


    return retorno;
}


