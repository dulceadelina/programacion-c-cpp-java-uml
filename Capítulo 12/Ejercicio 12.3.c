/** Dulce 12/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    char f1[] = "SALAS.DAT";
    char f2[] = "SALAS.BIN";
    char buffer[121];
    FILE* p1, *p2;

    p1 = fopen(f1, "r");
    p2 = fopen(f2, "wb");

    if(p1 == NULL || p2 == NULL)
    {
        printf("Error at opening files. Bye");
        exit(-1);
    }
    while(fgets(buffer, 121, p1))
    {
        n = strlen(buffer);
        //fputs(buffer, p2);
        fwrite(&buffer, (n*(sizeof(char)+1)), n+1, p2);
    }
    fclose(p1);
    fclose(p2);
    printf("\nsuccess!");
    return 0;
}
