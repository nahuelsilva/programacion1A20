#include <stdio.h>
#include <stdlib.h>

/*

1)De 5  personas que ingresan al hospital se deben tomar y
validar los siguientes datos.
nombre , temperatura, sexo y edad.
a)informar la cantidad de personas de cada sexo.
b)la edad promedio en total
c)la mujer con más temperatura(si la hay)

*/

int main()
{
    int i;
    char nombre;
    float temperatura;
    char sexo;
    int edad;
    float promedio;
    float mujer_mas_temperatura;
    char nombre_mujer_temperatura;

    int flag_Temperatura_mujer;

    int contador_mujer;
    int contador_varones;
    int aculador_edad;

    contador_varones = 0;
    contador_mujer = 0;
    aculador_edad = 0;

    flag_Temperatura_mujer = 1;

    i = 0;

    for(i = 0 ; i < 3 ; i = i+1)
    {
        system("cls");

        printf("ingrese carcater de un nombre: \n");
        fflush(stdin);
        scanf("%c" , &nombre);

        printf("ingrese temperatura: \n");
        fflush(stdin);
        scanf("%f" , &temperatura);

        printf("ingrese sexo: \n");
        fflush(stdin);
        scanf("%c" , &sexo);

        while(sexo != 'm' && sexo != 'f')
        {
         printf("Error...Ingrese sexo de nuevo: \n");
         fflush(stdin);
         scanf("%c" , &sexo);

        }

        printf("ingrese edad: \n");
        fflush(stdin);
        scanf("%i" , &edad);

        if(sexo == 'f')
        {
              if(flag_Temperatura_mujer == 1 || temperatura > mujer_mas_temperatura)
                {
                    mujer_mas_temperatura = temperatura;
                    nombre_mujer_temperatura = nombre;
                }
                flag_Temperatura_mujer = 0;
                contador_mujer++;
        }
        else
        {
            if(sexo == 'm')
            {
              contador_varones++;
            }
        }

        aculador_edad = aculador_edad + edad;

        /*
        if(flag_Temperatura_mujer == 1 || temperatura > mujer_mas_temperatura)
        {
            mujer_mas_temperatura = temperatura;
            nombre_mujer_temperatura = nombre;
        }
        flag_Temperatura_mujer = 0;
        */

    }


    promedio = (float) aculador_edad / 5;

    printf("La cantidad de mujeres es: %i \n" , contador_mujer);

    printf("La cantidad de hombres es: %i \n" , contador_varones);

    printf("El promedio de edad es: %.2f \n" , promedio);

    printf("La mujer con mas temperatura es: %c" , nombre_mujer_temperatura);

    return 0;
}
