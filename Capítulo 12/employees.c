/** Dulce Adelina
    15/03/2020
    Generate name and address of employees**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    char* nm;
    char* add;
}EMPLOYEE;
void entry(EMPLOYEE* e);
int main()
{
    FILE *pff;
    char nf[] = "EMPLA.DAT";
    char r = 'Y';

    if((pff = fopen(nf, "a")) == NULL)
    {
        puts("The file cannot be open. Bye!");
        exit(-1);
    }
    while(toupper(r) == 'Y')
    {
        EMPLOYEE em;
        entry(&em);
        printf("%s\n%s\n", em.nm, em.add);
        fprintf(pff, "%s\n%s\n", em.nm, em.add);
        printf("Another record?(Y/N): ");scanf("%c%*c", &r);
    }
    fclose(pff);
    return 0;
}
//Función de entrada
void entry(EMPLOYEE* e)
{
    char bf[80];
    char bf2[80];
    printf("Name: "); gets(bf);
    e->nm = (char*)malloc((strlen(bf)+1)*sizeof(char));
    strcpy(e ->nm, bf);
    printf("Address: "); gets(bf2);
    e->add = (char*)malloc((strlen(bf2)+1)*sizeof(char));
    strcpy(e ->add, bf2);
}
