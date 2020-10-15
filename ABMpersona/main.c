#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

#define TAM 5


typedef struct{

    int legajo;
    char nombre[20];
    char sexo;
    float altura;
    int isEmpty; // 1 esta vacia -- 0 esta ocupado


   }ePersona;


int mostrarPersonas(ePersona personas[] , int tam);
void mostarPersona(ePersona unaPersona);
int inicializarPersonas(ePersona personas[] , int tam);
int altaPersona(ePersona personas[] , int tam , int legajo);
int buscarLibre(ePersona personas[] , int tam);
int buscaPersona(ePersona personas[] , int tam , int legajo);
int bajaPersona(ePersona personas[] , int tam);

int main()
{
   int proximoLegajo = 6000;
   int rta;

   ePersona lista[TAM] = {{1234 , "miguel" , 'm' , 1.80 , 0} , {2233 , "ana" , 'f' , 1.53 , 0} , {3124 , "juan" , 'm' , 1.78 , 0} , {4251 , "sofia" , 'f' , 1.58 , 0} , {4211 , "pepe" , 'm' , 1.97 , 0}};
/*
   if(inicializarPersonas(lista ,  TAM) == 0)
   {
       printf("inicialzacion exitosa..\n\n");
   }
   else
   {
       printf("Fallo al inicializar..\n\n");
   }

   mostrarPersonas(lista , TAM);


   if(altaPersona(lista , TAM , proximoLegajo) == 0)
   {
       proximoLegajo++;
       printf("Alta exitosa\n");
   }
   else
   {
       printf("NO se pudo hacer el alta..\n");
   }

    mostrarPersonas(lista , TAM);

    if(altaPersona(lista , TAM , proximoLegajo) == 0)
   {
       proximoLegajo++;
       printf("Alta exitosa\n");
   }
   else
   {
       printf("NO se pudo hacer el alta..\n");
   }
   */

    rta = bajaPersona(lista , TAM);

    if(rta == 0)
    {
        printf("se realizo la baja correctamente..\n\n");
    }
    else
    {
        if(rta == 1)
        {
            printf("problema al raliazar la baja..\n\n");
        }
        else
        {
            printf("baja cancelado por el usuario.\n\n");
        }
    }

    mostrarPersonas(lista , TAM);


    return 0;
}

int inicializarPersonas(ePersona personas[] , int tam)
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

int mostrarPersonas(ePersona personas[] , int tam)
{
    int error = 1;
    int flag = 0;

    if(personas != NULL && tam > 0)
    {
        printf("Legajo   Nombre    Sexo    Altura  \n\n");
        printf("----------------------------------------\n");
        for(int i = 0 ; i < tam ; i++)
        {
            if(personas[i].isEmpty == 0)
            {
                mostarPersona(personas[i]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("\nNo hay personas en la lista!!\n");
        }
        else
        {
            printf("\n\n");
        }
        error = 0;
    }

    return error;

}

void mostarPersona(ePersona unaPersona)
{
    printf("%4d     %7s    %2c     %2.2f\n" , unaPersona.legajo , unaPersona.nombre , unaPersona.sexo , unaPersona.altura);
}

int altaPersona(ePersona personas[] , int tam , int legajo)
{
    int error = 1;

    ePersona nuevaPersona;

    int indice;

    if(personas != NULL && tam > 0 && legajo > 0)
    {
        indice = buscarLibre(personas , tam);
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
            scanf("%c" , &nuevaPersona.sexo);
            printf("Ingrese altura: ");
            scanf("%f" , &nuevaPersona.altura);

            personas[indice] = nuevaPersona;

             error = 0;

        }
    }
    return error;
}

int buscarLibre(ePersona personas[] , int tam)
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

int buscaPersona(ePersona personas [] , int tam , int legajo)
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

int bajaPersona(ePersona personas[] , int tam)
{
    int error = 1;
    int indice;
    int legajo;
    char confirma;

    if(personas != NULL && tam > 0)// && legajo > 0)
    {
        mostrarPersonas(personas , tam);
        printf("ingrese legajo: ");
        scanf("%d" , &legajo);

        indice = buscaPersona(personas , tam , legajo);

        if(legajo == -1)
        {
            printf("No hay ninguna persona con este legajo..\n");
        }
        else
        {
            mostarPersona(personas[indice]);
            printf("confirma baja?: ");
            fflush(stdin);
            scanf("%c" , &confirma);
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
