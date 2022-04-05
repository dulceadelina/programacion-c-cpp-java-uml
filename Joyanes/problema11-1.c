#include <stdio.h>

int main()
{
    char arreglo[20];
    char linea[80];

    puts("Introduce 80 caracteres por línea. ");
    gets(linea);

    int i = 0, vocales = 0;

    while(linea[i] != '\0')
    {
        if(linea[i] == 'a' || linea[i] == 'A' || linea[i] == 'e' || linea[i] == 'E' || linea[i] == 'i' ||
           linea[i] == 'I' || linea[i] == 'o' || linea[i] == 'U' || linea[i] == 'u' || linea[i] == 'U' )
        {
            vocales++;
        }
        i++;
    }

    printf("El número de vocales en la línea son %d", vocales);
}
