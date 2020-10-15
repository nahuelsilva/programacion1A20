#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

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

int main()
{
    eFecha f1 = {12,4,1996};

    ePersona p1 = {1234, "Maria", 'f', 1.56, f1/*{12,4,1996}*/, 0};
    /*
        p1.legajo = 1234;
        strcpy(p1.nombre , "juan");
        p1.sexo = 'm';
        p1.altura = 1.78;
        p1.isEmpty = 0;
        p1.fNacimiento.dia = 30;
        p1.fNacimiento.mes = 9;
        p1.fNacimiento.anio  = 2020;



        printf("ingrese legajo: ");
        scanf("%d" , &p1.legajo);

        printf("ingrese nombre: ");
        fflush(stdin);
        gets(p1.nombre);

        printf("ingrese sexo: ");
        fflush(stdin);
        scanf("%c" , &p1.sexo);

        printf("ingrese altura: ");
        scanf("%f" , &p1.altura);
    // 2°da PARTE DE como pedir fechas todos los campos juntos
        printf("ingrese fecha de nacimiento dd/mm/aaaa: ");
        scanf("%d/%d/%d" , &p1.fNacimiento.dia , &p1.fNacimiento.mes , &p1.fNacimiento.anio);

    // 1°era PARTE DE como pedir fechas campo a campo

        printf("ingrese dia de nacimiento: ");
        scanf("%d" , &p1.fNacimiento.dia);

         printf("ingrese mes de nacimiento: ");
        scanf("%d" , &p1.fNacimiento.mes);

         printf("ingrese anio de nacimiento: ");
        scanf("%d" , &p1.fNacimiento.anio);


        p1.isEmpty = 0;

    */
    printf("%d %s %c %.2f  %02d/%02d/%02d\n\n", p1.legajo, p1.nombre, p1.sexo, p1.altura, p1.fNacimiento.dia, p1.fNacimiento.mes, p1.fNacimiento.anio);

    return 0;
}
