#include "fechas.h"
#include "sport.h"
#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float altura;
    eFecha fNacimiento;
    int idDeportes;
   // edeportes Deportes;
    int isEmpty; // 1 esta vacia -- 0 esta ocupado

}ePersona;

#endif // PERSONAS_H_INCLUDED

#define ASC 0
#define DESC 1

int mostrarPersonas(ePersona personas[], int tam , edeportes sports[] , int tamD);
void mostrarPersona(ePersona unaPersona, edeportes sports[] , int tam);
int inicializarPersonas(ePersona personas[], int tam);
int altaPersona(ePersona personas[], int tam, int legajo);
int buscarLibre(ePersona personas[], int tam);
int buscarPersona(ePersona personas[], int tam, int legajo);
int bajaPersona(ePersona personas[], int tam , edeportes sports[] , int tamD);
int modificarPersona(ePersona persona[], int tam , edeportes sports[] , int tamD);// recibe eDeportes xq en la funcion mostrarpersonas agregamos un campo de deportes
int ordenarPersonasNombre(ePersona personas[], int tam, int criterio);
int ordenarPersonasSexo(ePersona personas[], int tam, int criterio);
int ordenarPersonasSexoAltura(ePersona personas[], int tam, int criterioS, int criterioA);
int harcodearPersonas(ePersona personas[], int tam , int cantidad);
