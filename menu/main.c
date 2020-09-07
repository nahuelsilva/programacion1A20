#include <stdio.h>
#include <stdlib.h>

char opcion();

int saludar();
int brindis(int saludo);

int main()
{

    char respuesta;

    int flag_bridar;
    int flag_despedir;


    flag_bridar = 0;
    flag_despedir = 0;

    respuesta = 'n';


    do
    {


        switch(opcion())
        {

        case 'a':
          saludar();
         // printf("holaa..\n");
          flag_bridar = 1;
          break;

        case 'b':
          if(!brindis(flag_bridar))
          {
              flag_bridar = 1;
          }
          break;

        case 'c':
          if(flag_bridar == 0)
          {
            printf("primero nos debemos saludar..\n");
          }
          else
          {
              if(flag_despedir == 1)
              {
                  printf("chauu... \n");
              }
              else
              {
                  printf("para despedirnos debemos brindar..\n");
              }
          }
          //printf("todo mal..\n");
          break;

        case 'd':
           printf("desea salir del programa?:");
           fflush(stdin);
           scanf("%c", &respuesta); // es asi xq cuando pido la respuesta me toma la n de no y sale del programa
           break;

        default :
          printf("caracter invalido \n");
          break;

        //system("pause");
        }
        system("pause"); // system("pause"); pausa el programa puede ir en cada case o al final del swhitch


    }while(respuesta == 'n');

    return 0;
}

char opcion()
{
      char menu;

       system("cls");
        printf("**ESTO ES EL MENU ELIJA SU OPCION**\n\n");

        printf("a.. saludar \n");
        printf("b.. brindar \n");
        printf("c.. despedir \n");
        printf("d.. salir \n");
        printf("Elija su opcion: \n");
        fflush(stdin);
        scanf("%c", &menu);

        return menu;
}

int saludar()
{
    int cant;
    int error;

    error = 0;

    cant = printf("holaa..\n");

    if(cant != 8)
    {
        error = 1;
    }

    return error;
}

int brindis(int saludo)
{
    int error;
    error = 0;

    if(saludo)
    {
      printf("chin chiin..\n");

    }
    else
    {
        printf("primero saludar..\n");
    }

    return error;
}
