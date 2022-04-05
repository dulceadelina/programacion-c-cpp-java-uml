/** Dulce Zuñiga
    29/09/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int contarvocales(char a[], int n);
void mostrarvocales(int v);

int main()
{
    char **p;
    int i, vocales;
    p = (char**) malloc(5*sizeof(*char));
    for(i = 0; i < 5; i++)
    {
        char linea[80];
        int n;
        printf("Ingresa la fila %d: ", i+1);
        gets(linea);
        n = strlen(linea);
        mostrarvocales(contarvocales(linea, n));
        p[i] = (char*)malloc(n*sizeof(char));
        p[i] = linea;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", *p[i]);
    }
    return 0;
}
int contarvocales(char a[], int n)
{
    int i, v = 0;
    char c;
    for(i = 0; i < n; i++)
    {
        c = toupper(a[i]);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') v++;
    }
    return v;
}
void mostrarvocales(int v)
{
    printf("Vocales encontradas: %d\n", v);
}
