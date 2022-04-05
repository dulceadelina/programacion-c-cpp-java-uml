#include <stdio.h>

char invierte(char palabra);

int main()
{
    char cadena[100];
    puts("Ingresa una cadena: ");
    gets(cadena);

    printf("La cadena inversa se imprime %s", invierte(cadena));
}

char invierte(char palabra)
{
    int i = 0, n, j;

    while(1 == 1)
    {
        if(palabra[i] == '\0')
        {
            break;
        }
        i++;
    }

    /*for(i = 0; ; i++)
    {
        if(palabra[i] == '\0')
        {
            break;
        }
    }*/
    n = i + 1;

    char invertida[n];

    for(i = n; i >= 0; i--)
    {
        j = 0;
        invertida[j] = palabra[i];
        j++;
    }

    return invertida;
}
