/** Dulce 05/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char mode;//65 82 87
    char nf[121];
    FILE* pf;

    printf("Enter the route of access of the text file to open: ");
    gets(nf);
    while((mode != 65) && (mode != 82) && (mode != 87))
    {
        printf("Enter the mode of access for the file: (w, r, a)");
        scanf("%c", &mode);putchar(mode);
        mode = toupper(mode);putchar(mode);
    }
    //putchar(mode);
}
