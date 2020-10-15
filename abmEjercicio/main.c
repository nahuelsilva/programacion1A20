#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 5

typedef struct
{
    int idem;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty; // 1 esta vacia --- 0 esta ocupado

} eEmpleado;

char menu();
void mostrarEmpleado(eEmpleado unEmpleado);
int inicializarEmpleados(eEmpleado empleados[], int tam);
int altaEmpleados(eEmpleado empleados[], int tam, int legajo);
int mostrarEmpleados(eEmpleado empleados[], int tam);
int buscarLibre(eEmpleado empleados[], int tam);



int main()
{
     int legajo = 2000;
    eEmpleado lista[TAM];

    char seguir = 's';
    char confirma;

    if(inicializarEmpleados(lista, TAM) == 0)
    {
        printf("Inicializacion con exito..\n");
    }
    else
    {
        printf("Error al inicializar\n");
    }


    do
    {
        switch(menu())
        {

        case 'a':// alta
            if(altaEmpleados(lista, TAM, legajo)== 0)
            {
                legajo++;
                printf("Alta exitosa..\n\n");
            }
            else
            {
                printf("Error. No se pudo hacer el alta.\n");
            }
            mostrarEmpleados(lista, TAM);


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

int inicializarEmpleados(eEmpleado empleados[], int tam)
{
    int error = 1;

    if(empleados != NULL && tam > 0)
    {
        for(int i = 0 ; i < tam ; i++)
        {
            empleados[i].isEmpty = 1;

            error = 0;
        }
    }

    return error;
}

int altaEmpleados(eEmpleado empleados[], int tam, int legajo)
{
    int error = 1;

    eEmpleado nuevoEmpleado;
    int indice;

    if(empleados != NULL && tam > 0 && legajo > 0)
    {
        indice = buscarLibre(empleados, tam);
        if(indice == -1)
        {
            printf("Sistema completo..\n");
        }
        else
        {
            nuevoEmpleado.idem = legajo;
            nuevoEmpleado.isEmpty = 0;
            printf("Ingrese nombre del empleado: ");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);
            printf("Ingrese apellido: ");
            fflush(stdin);
            gets(nuevoEmpleado.apellido);
            printf("Ingrese salario: ");
            scanf("%f", &nuevoEmpleado.salario);
            printf("Ingrese sector del empleado: ");
            scanf("%d", &nuevoEmpleado.sector);

            empleados[indice] = nuevoEmpleado;

            error = 0;
        }
    }

    return error;
}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%4d   %20s     %20s      %9.2f    %2d\n", unEmpleado.idem, unEmpleado.nombre, unEmpleado.apellido, unEmpleado.salario, unEmpleado.sector);
}

int mostrarEmpleados(eEmpleado empleados[], int tam)
{
    int error = 1;
    int flag = 0;
    if(empleados != NULL && tam > 0)
    {
        printf(" ID                 Nombre                   Apellido       Salario   Sector  \n\n");
        printf("-----------------------------------------------------------------------------\n");
        for(int i = 0; i < tam; i++)
        {
            if(empleados[i].isEmpty == 0)
            {
                mostrarEmpleado(empleados[i]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("No hay personas todavia..");
        }
        else
        {
            printf("\n\n");
        }

        error = 0;
    }

    return error;
}


int buscarLibre(eEmpleado empleados[], int tam)
{
    int indice = -1;

    if(empleados != NULL && tam > 0)
    {
        for(int i = 0; i < tam ; i++)
        {
            if(empleados[i].isEmpty == 1)
            {
                indice = i;
                break; // este break es para q en la 1°era vuelta encuentre el lugar vacio, entre y no siga ilterando
            }
        }
    }

    return indice;
}

