/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/** declaración de tipo global estructura */
typedef struct{
    char* nm;
    char* add;
}EMPLOYEE;
void entry(EMPLOYEE* e);
int main()
{
    FILE *pff;
    char nf[] = "EMPLEA.DAT";
    char r = 'Y';

    if((pff = fopen(nf, "a")) == NULL)
    {
        puts("Error al abrir los archivos. ");
        exit(-1);
    }
    while(toupper(r) == 'Y')
    {
        EMPLOYEE em;
        entry(&em);
        printf("%s\n%s\n", em.nm, em.add);
        fprintf(pff, "%s\n%s\n", em.nm, em.add);
        printf("Otro registro?: "); scanf("%c%*c", &r);
    }
    fclose(pff);
    return 0;
}
/** Se leen los atributos de una persona  por teclado */
void entry(EMPLOYEE* e)
{
    char bf[81];
    char bf2[81];
    printf("Nombre: "); gets(bf);
    e->nm = (char*)malloc((strlen(bf)+1)*sizeof(char));
    strcpy(e ->nm, bf);
    printf("Domicilio: "); gets(bf2);
    e->add = (char*)malloc((strlen(bf2)+1)*sizeof(char));
    strcpy(e ->add, bf2);
}
