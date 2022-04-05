/** Dulce 12/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos
    Generar un archivo de empleados**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    char* nm;
    char* add;
}EMPLEADO;
void entry_person(EMPLEADO *e);
int main()
{
    FILE* pf;
    char nf[] = "EMPLEA.DAT";
    char a = 'y';
    if((pf = fopen(nf, "a")) == NULL)
    {
        printf("Error at opening file. Exit");
        exit(-1);
    }
    while(toupper(a) == 'Y')
    {
        EMPLEADO em;
        entry_person(&em);
        printf("%s\n%s\n", em.nm, em.add);
        fprintf(pf, "%s\n%s\n",em.nm, em.add);
        printf("\nAnother employee?(y/n): ");
        scanf("%c*c", &a);
    }
    fclose(pf);
    return 0;
}
void entry_person(EMPLEADO* e)
{
    char name[80];
    char address[80];
    printf("Enter the name of the employee: ");gets(name);
    e->nm  = (char*)malloc((strlen(name)+1)*sizeof(char));
    strcpy(e ->nm, name);
    printf("Enter the address of the employee: ");gets(address);
    e->add = (char*)malloc((strlen(address)+1)*sizeof(char));
    strcpy(e ->add, address);
}
