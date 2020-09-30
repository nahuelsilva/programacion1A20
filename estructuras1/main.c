#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int nota1;
    int nota2;
    float promedio;

}lesAlumnos;

int main()
{
    //lesAlumnos unAlumno; //= {1234 , "juan" , 'm' , 7 , 8 , 7.5};

    //lesAlumnos otroAlumno = {2233 , "maria" , 'f' , 6 , 7 , 6.5};

    lesAlumnos lista[TAM];

    for(int i = 0; i < TAM ; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d" , &lista[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c" , &lista[i].sexo);

        printf("Ingrese nota 1er parcial: ");
        scanf("%d" , &lista[i].nota1);

        printf("Ingrese nota 2do parcial: ");
        scanf("%d" , &lista[i].nota2);

        lista[i].promedio = (float) (lista[i].nota1 + lista[i].nota2)/2;


    }

    // 3°RA Parte de estructuras--

    // unAlumno = otroAlumno; -- esto es si quiero copiar una ficha de la estructura en otra vacia-- ej: otroAlumno a unAlumno


    /*
    --- Perdir los datos para (unAlumno)--
    2°DA Parte de estructuras

    printf("Ingrese legajo: ");
    scanf("%d" , &unAlumno.legajo);

    printf("Ingrese nombre del alumno: ");
    fflush(stdin);
    gets(unAlumno.nombre);// para tomar STRING no es necesario el (&)

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c" , &unAlumno.sexo);

    printf("Ingrese nota 1er parcial: ");
    scanf("%d" , &unAlumno.nota1);

    printf("Ingrese 2da nota parcial: ");
    scanf("%d" , &unAlumno.nota2);

    unAlumno.promedio = (float) (unAlumno.nota1 + unAlumno.nota2) /2;
     */

     for(int i = 0 ; i < TAM ; i++)
     {
        printf("El legajo es: %d\n" , lista[i].legajo);
        printf("El nombre es: %s\n" , lista[i].nombre);
        printf("El sexo es: %c\n" , lista[i].sexo);
        printf("La nota del 1°er parcial es: %d\n" , lista[i].nota1);
        printf("La nota del 2°do parcial es: %d\n" , lista[i].nota2);
        printf("El promedio es: %.2f\n" , lista[i].promedio);

        printf("\n\n");


     }








    /*-- ESTO ES PARA MOSTRAR HARCODEADO UNALUMNO Y OTROALUMNO--
    1°ERA parte de estructura--

    printf("El legajo es: %d\n" , unAlumno.legajo);
    printf("El nombre es: %s\n" , unAlumno.nombre);
    printf("El sexo es: %c\n" , unAlumno.sexo);
    printf("La nota del 1°er parcial es: %d\n" , unAlumno.nota1);
    printf("La nota del 2°do parcial es: %d\n" , unAlumno.nota2);
    printf("El promedio es: %.2f\n" , unAlumno.promedio);

    printf("\n\n");

    printf("El legajo es: %d\n" , otroAlumno.legajo);
    printf("El nombre es: %s\n" , otroAlumno.nombre);
    printf("El sexo es: %c\n" , otroAlumno.sexo);
    printf("La nota del 1°er parcial es: %d\n" , otroAlumno.nota1);
    printf("La nota del 2°do parcial es: %d\n" , otroAlumno.nota2);
    printf("El promedio es: %.2f\n" , otroAlumno.promedio);
    */



    return 0;
}
