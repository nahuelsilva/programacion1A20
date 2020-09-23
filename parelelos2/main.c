#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarAlumno(int legajos , int nota1 , int nota2 ,float promedio, char sexo);
void mostrarAlumnos(int legajos[] , int notas1[] , int notas2[] , float promedios[] , char sexos[] , int tam);
int main()
{
    int legajo [TAM] = {1234, 4531, 135, 7422, 1357};// estos harcodeos es para acomodar esteticamente la pantalla
    int nota1 [TAM] = {4, 5, 1, 8, 9};
    int nota2 [TAM] = {6, 8, 4, 2, 4};
    float promedio[TAM] = {5, 7.5 , 2.5 , 6, 8.5};
    char sexo[TAM] = {'f' , 'm' , 'f' , 'f' , 'm'};

    float auxFloat;
    int auxLegajo;
    char auxSexo;
    int auxN1;
    int auxN2;
    /*

    for(int i = 0; i < TAM ; i++)
    {
        printf("ingrese legajo : ");
        scanf("%d" , &legajo[i]);

        printf("ingrese nota del 1er parcial: ");
        scanf("%d" , &nota1[i]);

        printf("ingrese nota del 2do parcial: ");
        scanf("%d" , &nota2[i]);


        printf("ingrese sexo: ");
        fflush(stdin);
        scanf("%c" , &sexo[i]);

        promedio[i] = (float) (nota1 [i] + nota2[i])/2;

        //printf("\n\n");
    }
    */

    mostrarAlumnos(legajo ,nota1 , nota2 , promedio , sexo , TAM);

    for(int i = 0; i < TAM-1 ; i++)
    {
        for(int j = i+1 ; j < TAM ; j++)
        {
            if((sexo[i] > sexo[j]) || (sexo[i] == sexo[j] && promedio[i] < promedio[j]))// este swap o ordenamieto es para poner los promedios de MAYOR a MENOR. Pero tenemos q acompañar con todos los VECTORES
            {
                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;

                auxLegajo = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxLegajo;


                auxSexo = sexo[i];
                sexo[i] = sexo[j];
                sexo[j] = auxSexo;


                auxN1 = nota1[i];
                nota1[i] = nota1[j];
                nota1[j] = auxN1;


                auxN2 = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = auxN2;

            }
          /*  else  -------- esto es de la forma larga de los 2 criterios sexo y promedio pero se puede hacer en un solo IF
            {

                if(sexo[i] == sexo[j] && promedio[i] < promedio[j])
                {

                     auxFloat = promedio[i];
                    promedio[i] = promedio[j];
                    promedio[j] = auxFloat;

                    auxLegajo = legajo[i];
                    legajo[i] = legajo[j];
                    legajo[j] = auxLegajo;


                    auxSexo = sexo[i];
                    sexo[i] = sexo[j];
                    sexo[j] = auxSexo;


                    auxN1 = nota1[i];
                    nota1[i] = nota1[j];
                    nota1[j] = auxN1;


                    auxN2 = nota2[i];
                    nota2[i] = nota2[j];
                    nota2[j] = auxN2;

                }


            }
             */

        }
    }


    mostrarAlumnos(legajo ,nota1 , nota2 , promedio , sexo , TAM);



    //1140314482

    return 0;
}

void mostrarAlumno(int legajos , int nota1 , int nota2 ,float promedio, char sexo)
{
    printf(" %4d    %2d    %2d    %2.2f    %c\n" , legajos , nota1 , nota2 , promedio, sexo);// eso de %4d etc es para q me los muetre con 4 valores
}

void mostrarAlumnos(int legajos[] , int notas1[] , int notas2[] , float promedios[] , char sexos[] , int tam)
{
    //system("cls");

    printf("Legajos Nota Nota2 Promedio Sexo\n\n"); // este pintf es para poner de encabezado.... hay q harcodear para ubicar todo por orden

    for(int i = 0 ; i < tam ; i++)
    {
        mostrarAlumno(legajos[i] , notas1[i] , notas2[i] , promedios[i] , sexos[i]);// aca estamos pasando escalares un cuadradito de ese vector


    }
    printf("\n\n");

}
