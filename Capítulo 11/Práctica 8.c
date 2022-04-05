/** Dulce Adelina Zuñiga Ramos
    19/11/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char* pc;
    char lin[100];

    printf("Ingrese una línea: ");
    gets(lin);

    int n = 0;
    n = strlen(lin) + 1;

    //pc = (char*)malloc(n*sizeof(char));

    //strcpy(pc, lin);

    printf("%s\n", *pc);

    return 0;
}
