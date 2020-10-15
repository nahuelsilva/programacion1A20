#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "fechas.h"
#include "personas.h"
#include "dataStore.h"
#include "sport.h"

int inicializarPersonas(ePersona personas[], int tam)
{
    int error = 1;

    if(personas != NULL && tam > 0)
    {
        for(int i = 0; i < tam ; i++)
        {
            personas[i].isEmpty = 1;
        }

        error = 0;
    }
    return error;

}

int mostrarPersonas(ePersona personas[], int tam , edeportes sports[] , int tamD)
{
    int error = 1;
    int flag = 0;

    if(personas != NULL && tam > 0)
    {
        system("cls");
        printf("        ** Listado de Personas **\n\n");
        printf("Legajo   Nombre    Sexo    Altura      Nacimiento   Deportes\n\n");
        printf("-----------------------------------------------------------------\n");
        for(int i = 0 ; i < tam ; i++)
        {
            if(personas[i].isEmpty == 0)
            {
                mostrarPersona(personas[i] , sports , tamD);
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

void mostrarPersona(ePersona unaPersona, edeportes sports[] , int tam)
{
    char descDeporte[20];
    for(int i=0 ; i<tam ; i++)
    {
        if(sports[i].id == unaPersona.idDeportes)
        {
            strcpy(descDeporte , sports[i].descripcion);
        }
    }
    printf("%4d     %7s    %2c     %2.2f        %02d/%02d/%d   %s\n", unaPersona.legajo, unaPersona.nombre, unaPersona.sexo, unaPersona.altura, unaPersona.fNacimiento.dia, unaPersona.fNacimiento.mes, unaPersona.fNacimiento.anio, descDeporte);
}

int altaPersona(ePersona personas[], int tam, int legajo)
{
    int error = 1;

    ePersona nuevaPersona;

    int indice;

    if(personas != NULL && tam > 0 && legajo > 0)
    {
        system("cls");
        printf("***** Alta Persona *****\n\n");
        indice = buscarLibre(personas, tam);
        if(indice == -1)
        {
            printf("Sistema completo..\n");
        }
        else
        {
            nuevaPersona.legajo = legajo;
            nuevaPersona.isEmpty = 0;
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevaPersona.nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &nuevaPersona.sexo);

            printf("Ingrese altura: ");
            scanf("%f", &nuevaPersona.altura);

            printf("ingrese fecha de nacimiento dd/mm/aaaa: ");
            scanf("%d/%d/%d", &nuevaPersona.fNacimiento.dia, &nuevaPersona.fNacimiento.mes, &nuevaPersona.fNacimiento.anio);

            personas[indice] = nuevaPersona;

            error = 0;

        }
    }
    return error;
}

int buscarLibre(ePersona personas[], int tam)
{
    int indice = -1;

    for(int i = 0 ; i < tam ; i++)
    {
        if(personas[i].isEmpty == 1)
        {
            indice = i;

            break; // el break es para cortar en la primera vuelta un indice vacio para llenarla
        }
    }

    return indice;
}

int buscaPersona(ePersona personas [], int tam, int legajo)
{
    int indice = -1;

    for(int i = 0 ; i < tam ; i++)
    {
        if(personas[i].legajo == legajo && personas[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int bajaPersona(ePersona personas[], int tam , edeportes sports[] , int tamD)
{
    int error = 1;
    int indice;
    int legajo;
    char confirma;

    if(personas != NULL && tam > 0)
    {
        mostrarPersonas(personas, tam , sports , tamD);
        printf("ingrese legajo: ");
        scanf("%d", &legajo);

        indice = buscaPersona(personas, tam, legajo);

        if(indice == -1)// es indice -1 xq, esta buscando un legajo en un ARRAY y estos arrancan con un indice 0
        {
            printf("No hay ninguna persona con este legajo..\n");
        }
        else
        {
            mostrarPersona(personas[indice], sports , tamD);
            printf("confirma baja?: ");
            fflush(stdin);
            scanf("%c", &confirma);
            if(confirma == 's')
            {
                personas[indice].isEmpty = 1;
                error = 0;
            }
            else
            {
                error = 2;
            }

        }

    }

    return error;
}


int modificarPersona(ePersona persona[], int tam , edeportes sports[] , int tamD)
{
    int error = 1;
    int legajo;
    int indice;
    int opcion;
    ePersona cambiarInfo;

    if(persona != NULL && tam > 0)
    {
        mostrarPersonas(persona, tam , sports , tamD);
        printf("Ingrese ID del empleado a modificar: ");
        scanf("%d", &legajo);

        for(int i = 0; i < tam ; i++)
        {
            indice = buscaPersona(persona, tam, legajo);
        }
        if(indice == -1)
        {
            printf("No hay personas con ese ID");
        }
        else
        {
            mostrarPersona(persona[indice], sports , tamD);
            printf("\nElija una opcion a modificar: \n");
            printf("1- Nombre.\n");
            printf("2- Sexo.\n");
            printf("3- Altura.\n");
            printf("4- Fecha de Nacimiento:\n");
            printf("Elija opcion:\n\n");
            scanf("%d", &opcion);
            switch(opcion)
            {
            case 1:

                printf("Ingrese nombre a cambiar: ");
                fflush(stdin);
                gets(cambiarInfo.nombre);
                strcpy(persona[indice].nombre, cambiarInfo.nombre);

                break;

            case 2:
                printf("Ingrese sexo a cambiar: ");
                fflush(stdin);
                scanf("%c",&cambiarInfo.sexo);
                persona[indice].sexo = cambiarInfo.sexo;

                break;

            case 3:
                printf("Ingrese altura a cambiar: ");
                scanf("%f", &cambiarInfo.altura);
                persona[indice].altura = cambiarInfo.altura;

                break;

            case 4:
                printf("Ingrese fecha de nacimiento a cambiar dd/mm/aaaa: ");
                scanf("%d/%d/%d", &cambiarInfo.fNacimiento.dia, &cambiarInfo.fNacimiento.mes, &cambiarInfo.fNacimiento.anio);
                persona[indice].fNacimiento = cambiarInfo.fNacimiento;

                break;


            default:
                printf("Opcion invalida.\n");

            }
            error = 0;
        }


    }
    return error;
}

int ordenarPersonasNombre(ePersona personas[], int tam, int criterio)
{
    int error = 1;
    ePersona auxPersona;

    if(personas != NULL && tam > 0 && criterio >= 0 && criterio <= 1)
    {
        for(int i = 0 ; i < tam-1 ; i++)
        {
            for(int j = i+1 ; j < tam ; j++)
            {
                if((strcmp(personas[i].nombre, personas[j].nombre) > 0) && criterio == 0)
                {
                    auxPersona = personas[i];
                    personas[i] = personas[j];
                    personas[j] = auxPersona;
                }
                else
                {
                    if(strcmp(personas[i].nombre, personas[j].nombre) < 0 && criterio == 1)
                    {
                        auxPersona = personas[i];
                        personas[i] = personas[j];
                        personas[j] = auxPersona;
                    }

                }
            }
        }
        error = 0;
    }
    return error;
}

int ordenarPersonasSexoAltura(ePersona personas[], int tam, int criterioS, int criterioA)
{
    int error = 1;
    ePersona auxPersona;

    if(personas != NULL && tam > 0 && criterioS >= 0 && criterioS <= 1 && criterioA >= 0 && criterioA <= 1)
    {
        for(int i = 0 ; i < tam-1 ; i++)
        {
            for(int j = i+1 ; j < tam ; j++)
            {
                if(criterioS == 0 && personas[i].sexo > personas[j].sexo)
                {
                    auxPersona = personas[i];
                    personas[i] = personas[j];
                    personas[j] = auxPersona;
                }
                else
                {
                    if(criterioS == 1 && personas[i].sexo < personas[j].sexo)
                    {
                        auxPersona = personas[i];
                        personas[i] = personas[j];
                        personas[j] = auxPersona;
                    }
                    else
                    {
                        if(personas[i].sexo == personas[j].sexo && personas[i].altura > personas[j].altura && criterioA == 0)
                        {
                            auxPersona = personas[i];
                            personas[i] = personas[j];
                            personas[j] = auxPersona;
                        }
                        else
                        {
                            if(personas[i].sexo == personas[j].sexo && personas[i].altura < personas[j].altura && criterioA ==1)
                            {
                                auxPersona = personas[i];
                                personas[i] = personas[j];
                                personas[j] = auxPersona;
                            }
                        }
                    }
                }

            }
        }
        error = 0;
    }


    return error;
}

int harcodearPersonas(ePersona personas[], int tam , int cantidad)
{
    int retorno = -1;

    if(personas != NULL && tam > 0 && cantidad <= tam)
    {
        for(int i = 0 ; i<cantidad ; i++)
        {
            personas[i].legajo = legajos[i];
            strcpy(personas[i].nombre , nombres[i]);
            personas[i].sexo = sexo[i];
            personas[i].altura = alturas[i];
            /*
            personas[i].fNacimiento.dia = dias[i];
            personas[i].fNacimiento.mes = meses[i];
            personas[i].fNacimiento.anio = anios[i];
            */
            personas[i].fNacimiento = fechas[i];
            personas[i].idDeportes = idDeportes[i];
            personas[i].isEmpty = 0;

            retorno++;

        }
    }


    return retorno;
}

