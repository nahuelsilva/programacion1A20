#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TAM 7

#define ASC 0
#define DESC 1

typedef struct //una estructura dentro de otra anidadas tienen q estar de ante manos primero la q vamos a poner en la siguiente estructura
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float altura;
    eFecha fNacimiento;
    int isEmpty; // 1 esta vacia -- 0 esta ocupado

} ePersona;

char menu();
int mostrarPersonas(ePersona personas[], int tam);
void mostrarPersona(ePersona unaPersona);
int inicializarPersonas(ePersona personas[], int tam);
int altaPersona(ePersona personas[], int tam, int legajo);
int buscarLibre(ePersona personas[], int tam);
int buscarPersona(ePersona personas[], int tam, int legajo);
int bajaPersona(ePersona personas[], int tam);
int modificarPersona(ePersona personas[], int tam);
int ordenarPersonasNombre(ePersona personas[], int tam, int criterio);
int ordenarPersonasSexo(ePersona personas[], int tam, int criterio);
int ordenarPersonasSexoAltura(ePersona personas[], int tam, int criterioS, int criterioA);

int main()
{

    char seguir = 's';
    char confirma;
    ePersona lista[TAM] =
    {
        {1000, "juan", 'm', 1.76, {7,3,1999}, 0},
        {1001, "tomas", 'm', 1.91, {18,8,2000}, 0},
        {1002, "ana", 'f', 1.54, {31,12,1995}, 0},
        {1003, "liliana", 'f', 1.50, {15,7,2001}, 0},
        {1004, "pepe", 'm', 1.85, {3,1,2001}, 0},
        {1005, "fani", 'f', 1.52, {9,6,1992}, 0},
        {0, "wasaa", 'f', 1.52, {9,6,1992}, 1},
    };

    int proximoLegajo = 1006;
    int rtaBaja;
    int rtaModifica;
    /*
        if(inicializarPersonas(lista,  TAM) == 0)
        {
            printf("inicialzacion exitosa..\n\n");
        }
        else
        {
            printf("Fallo al inicializar..\n\n");
        }
    */
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

            mostrarPersonas(lista, TAM);

            break;

        case 'b': // baja
            rtaBaja = bajaPersona(lista, TAM);
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

            mostrarPersonas(lista, TAM);



            break;

        case 'c': // modificar
            system("cls");
            mostrarPersonas(lista, TAM);
            rtaModifica = modificarPersona(lista, TAM);

            if(rtaModifica == 0)
            {
                printf("Modificacion con exito.\n");
            }
            else
            {
                printf("No se pudo modificar.\n");
            }

            mostrarPersonas(lista, TAM);


            break;

        case 'd': // listar
            mostrarPersonas(lista, TAM);
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

        case 'g': // salir
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
    printf("g Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());

    return opcion;
}

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

int mostrarPersonas(ePersona personas[], int tam)
{
    int error = 1;
    int flag = 0;

    if(personas != NULL && tam > 0)
    {
        system("cls");
        printf("        ** Listado de Personas **\n\n");
        printf("Legajo   Nombre    Sexo    Altura      Nacimiento \n\n");
        printf("-----------------------------------------------------\n");
        for(int i = 0 ; i < tam ; i++)
        {
            if(personas[i].isEmpty == 0)
            {
                mostrarPersona(personas[i]);
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

void mostrarPersona(ePersona unaPersona)
{
    printf("%4d     %7s    %2c     %2.2f        %02d/%02d/%d\n", unaPersona.legajo, unaPersona.nombre, unaPersona.sexo, unaPersona.altura, unaPersona.fNacimiento.dia, unaPersona.fNacimiento.mes, unaPersona.fNacimiento.anio);
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

int bajaPersona(ePersona personas[], int tam)
{
    int error = 1;
    int indice;
    int legajo;
    char confirma;

    if(personas != NULL && tam > 0)
    {
        mostrarPersonas(personas, tam);
        printf("ingrese legajo: ");
        scanf("%d", &legajo);

        indice = buscaPersona(personas, tam, legajo);

        if(indice == -1)// es indice -1 xq, esta buscando un legajo en un ARRAY y estos arrancan con un indice 0
        {
            printf("No hay ninguna persona con este legajo..\n");
        }
        else
        {
            mostrarPersona(personas[indice]);
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


int modificarPersona(ePersona persona[], int tam)
{
    int error = 1;
    int legajo;
    int indice;
    int opcion;
    ePersona cambiarInfo;

    if(persona != NULL && tam > 0)
    {
        mostrarPersonas(persona, tam);
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
            mostrarPersona(persona[indice]);
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
