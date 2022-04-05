/** Dulce 05/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char mode;
    char nf[121];
    char cad[] = " test six";
    FILE* pf;

    printf("Enter the route of the file to be open: ");
    gets(nf);

    do{
        puts("Enter the mode of access (w, r, a): ");
        scanf("%c%*c", &mode);
        mode = tolower(mode);
    }while (mode != 'w' && mode !=  'r' && mode != 'a');
    switch(mode)
    {
        case 'w':
            pf = fopen(nf, "w");
            break;
        case 'r':
            pf = fopen(nf, "r");
            break;
        case 'a':
            pf = fopen(nf, "a");
            break;
        default:
            break;
    }
    if(pf == NULL)
    {
        printf("\nError at opening file, it would be open by writing mode");
        pf = fopen(nf, "w");
    }
    if(pf == NULL)
    {
        printf("\nError at opening file, bye.");
        exit(-1);
    }
    puts("success");
    fputs(cad, pf);
    fclose(pf);
    return 0;
}
