#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* cp;
    char c;

    printf("Ingrese un caracter: ");
    scanf("%c", &c);

    cp = &c;

    printf("cp = %p\n", cp);
    printf("*p = %c", *cp);

    return 0;
}
