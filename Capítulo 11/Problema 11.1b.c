/** Dulce 29/02/2020
    CAPÍTULO 11: Apuntadores (punteros) **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define L 81
#define B 20

int ContarVocales(char *cadena);

int main()
{
    char *book[B];
    int i;
    printf("\nEnter 20 strings of characters...\n");
    for(i = 0; i < B; i++)
    {
        int n, vowels;
        char line[L];

        gets(line);

        n = strlen(line);
        book[i] = (char*) malloc(n+1 * sizeof(char));
        strcpy(book[i], line);
        //printf("%c", book[i][2]);

        vowels = ContarVocales(book[i]);
        printf("\nNumber of vowels in this line are %d\n", vowels);
    }


    return 0;

}
int ContarVocales(char *cadena)
{
    int i, n, vocales = 0;
    char aux;

    n = strlen(cadena);

    for(i = 0; i < n; i++)
    {
        aux = toupper(cadena[i]);

        if(isalpha(aux))
        {
            if(aux == 'A' || aux == 'E' || aux == 'I' || aux == 'O' || aux == 'U')
                vocales++;
        }
    }
    return vocales;
}
