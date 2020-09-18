#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //char nombre[20] = {"juan"};
    char nombre2 [20];

    printf("igrese nimbre: ");
    fflush(stdin);
    gets(nombre2);

    printf("su nombre es: %s\n" , nombre2);



    //strcpy()


   // puts(nombre);// esta no sirve xq solo muestra el strim q estamos invocando
//    printf("Usted se llama: %s" , nombre);
    return 0;
}
