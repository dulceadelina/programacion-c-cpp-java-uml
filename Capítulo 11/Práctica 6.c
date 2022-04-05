/** Dulce Zuñiga
    29/09/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    printf("Manejo de apuntadores a cadenas\n\n");
    char* pc;
    int n = 100;
    char a[n];
    printf("Ingrese una cadena de 100 caracteres: ");
    gets(a);
    pc = &a[0];
    puts(pc);

    return 0;
}
