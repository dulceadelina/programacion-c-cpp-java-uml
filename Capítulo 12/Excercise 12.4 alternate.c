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
}PERSONA;

void entrada(PERSONA* p);

int main()
{
    FILE *pff;
    char nf[] = "PERSONAS.DAT";
    char r = 'S';

    if((pff = fopen(nf, "a")) == NULL)
    {
        puts("Error al abrir los archivos. ");
        exit(-1);
    }
    while(toupper(r) == 'S')
    {
        PERSONA pt;
        entrada(&pt);
        printf("%s\n%s\n", pt.nm, pt.add);
        fprintf(pff, "%s\n%s\n", pt.nm, pt.add);
        printf("Otro registro?: "); scanf("%c%*c", &r);
    }
    fclose(pff);
    return 0;
}
/** Se leen los atributos de una persona  por teclado */
void entrada(PERSONA* p)
{
    char bf[81];
    char bf2[81];
    printf("Nombre: "); gets(bf);
    p->nm = (char*)malloc((strlen(bf)+1)*sizeof(char));
    strcpy(p ->nm, bf);
    printf("Domicilio: "); gets(bf2);
    p->add = (char*)malloc((strlen(bf2)+1)*sizeof(char));
    strcpy(p ->add, bf2);
}
