#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

typedef struct{

    int dia;
    int mes;
    int anio;


}eFecha;

typedef struct{

    int legajo;
    char nombre[20];
    char sexo;
    float altura;
    eFecha fNacimiento;
    int isEmpty; // 1 esta vacia -- 0 esta ocupado


   }ePersona;

int main()
{
    ePersona p1;

    p1.legajo = {1234};
    strcpy(p1.nombre , "juan");
    p1.sexo = 'm';
    p1.altura = 1.78;
    p1.isEmpty = 0;
    p1.fNacimiento.dia = 30;
    p1.fNacimiento.mes = 9;
    p1.fNacimiento.anio  = 2020;

    printf("ingrese legajo: ");
    scanf("%f" , &p1.legajo);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(p1.nombre);

    printf("ingrese sexo: ");
    fflush(stdin);
    scanf("%c" , &p1.sexo);

    printf("ingrese altura: ");
    scanf("%f" , &p1.altura);

    printf("ingrese fecha de nacimiento dd/mm/aaaa: ");
    scanf("%d/")

    printf("ingrese dia de nacimiento: ");
    scanf("%d" , &p1.fNacimiento.dia);

     printf("ingrese mes de nacimiento: ");
    scanf("%d" , &p1.fNacimiento.mes);

     printf("ingrese año de nacimiento: ");
    scanf("%d" , &p1.fNacimiento.anio);

    p1.isEmpty = 0;


    printf("%d  ")

    return 0;
}
