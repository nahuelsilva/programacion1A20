#include <stdio.h>
#include <stdlib.h>

/*

para realizar un pedido, solicitar tres datos ,
código de tipo int , validar entre 100 y 200
cantidad de tipo entero(int), validar entre 1 y 20
una talle de tipo char validad entre('S' , 'M' , 'L')
a-mostrar el código y el talle  del que mas cantidad solicito
b-el promedio del total  de cantidades de talle 'M' con decimales
*/

int main()
{

    int codigo;
    int cantidad;
    char talle;
    char respuesta;
    int mayor_codigo;
    char talle_mayor;
    int mayor_cantidad;
    float acumulador_talle_m;
    int contador_talle_m;
    int flag_mayor_cantidad;
    float promedio;

    flag_mayor_cantidad = 1;
    contador_talle_m = 0;
    acumulador_talle_m = 0;

    respuesta = 's';

    do
    {
      system("cls");
      printf("Ingrese codido entre 100 y 200: \n");
      scanf("%d" , &codigo);

      while(codigo < 100 || codigo > 200)
      {
        printf("Error.. Ingrese nuevamente codigo: \n");
        scanf("%d" , &codigo);
      }

      printf("Ingrese cantidad de compra:\n");
      scanf("%d" , &cantidad);

      while(cantidad < 1 || cantidad > 20)
      {
        printf("Error.. Ingrese cantidad de compra:\n");
        scanf("%d" , &cantidad);
      }

      printf("Ingrese talla del producto (s , m , l):\n");
      fflush(stdin);
      scanf("%c" , &talle);

      while(talle != 's' && talle != 'm' && talle !='l')
      {
        printf("Error..Ingrese talla del producto (s , m , l):\n");
        fflush(stdin);
        scanf("%c" , &talle);
      }

      if(flag_mayor_cantidad == 1 || cantidad > mayor_cantidad)
      {
          mayor_cantidad = cantidad;
          mayor_codigo = codigo;
          talle_mayor = talle;
      }
      flag_mayor_cantidad = 0;

      if(talle == 'm')
      {
          acumulador_talle_m = acumulador_talle_m + cantidad;
          contador_talle_m++;
      }



    printf("desea seguir ingresando compras:");
    fflush(stdin);
    scanf("%c" , &respuesta);


    }while(respuesta == 's');

    if(contador_talle_m > 0)
    {
      promedio = (float) acumulador_talle_m / contador_talle_m;
    }
    else
    {
      printf("No se ingreso talle m\n ");
    }
    //promedio = (float) acumulador_talle_m / contador_talle_m;

    printf("El codigo que mas cantidad se solicito es: %i \n" , mayor_codigo);
    printf("El talle que mas cantiadad se solicito es: %c \n" , talle_mayor);
    printf("El promedio de los talles m es: %.2f" , promedio);

    return 0;
}
