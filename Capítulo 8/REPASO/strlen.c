#include <stdio.h>
#include <string.h>
int main()
{
    char name[80];
    printf("Ingresa tu nombre: ");
    gets(name);
    int n;
    n = strlen(name);
    printf("n: %d", n);
}
