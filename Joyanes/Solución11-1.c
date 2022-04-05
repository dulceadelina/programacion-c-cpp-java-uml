//15/08/2018
#include <stdio.h>

char texto[20][80];

int main()
{
    int i;

    for(i = 0; i < 2; i++)
    {
        puts("Introduce 80 caracteres por línea. ");
        gets(texto[i]);
    }
    for(i = 0; i < 2; i++)
    {
        puts(texto[i]);
    }
}

/*char *lineas[20];

char lee_linea(int i)
{
    int j;
    char entrada[80];
    puts("Introduce 80 caracteres por línea. ");
    gets(entrada);
    lineas[i] = entrada;
}

int main()
{
    int i;

    for(i = 0; i < 1; i++)
    {
        lee_linea(i);
    }

    for(i = 0; i < 1; i++)
    {
        printf("\n%s", lineas[i]);
    }
    printf("hola");
}

*/
