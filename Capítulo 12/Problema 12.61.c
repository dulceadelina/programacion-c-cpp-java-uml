/** Dulce 12/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos
    Generar un archivo de empleados**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char* nm;
    char* address;
}EMPLEADO;
void entry_person(EMPLEADO *e);
int main()
{
    char nf[] = "EMPLEA.DAT";
    FILE* pf;
    char ans = 'y';
    pf = fopen(nf, "a");
    if(pf == NULL)
    {
        printf("Error at opening file. Exit");
        exit(-1);
    }
    while(tolower(ans) == 'y')
    {
        EMPLEADO em;
        entry_person(&em);
        fputs(em.nm,pf);fprintf(pf, "\n");
        fputs(em.address, pf);fprintf(pf, "\n");
        printf("\nAnother address?: ");
        scanf("%c*c", &ans);
    }
    printf("success!");
    fclose(pf);
    return 0;
}
void entry_person(EMPLEADO* e)
{
    char buff[120];
    char buff2[120];
    printf("Enter the name of the employee: ");
    gets(buff);
    e->nm  = (char*)malloc((strlen(buff)+1)*sizeof(char));
    strcpy(e->nm, buff);
    printf("Enter the address of the employee: ");
    gets(buff2);
    e->address = (char*)malloc((strlen(buff2)+1)*sizeof(char));
    strcpy(e->address, buff2);
}
