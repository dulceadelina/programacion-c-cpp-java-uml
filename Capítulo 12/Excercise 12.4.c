/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/** declaración de tipo global estructura */
typedef struct{
    char* nm;
    int dia;
    int ms;
    int aa;
    char mes[11];
}PERSONA;

void entrada(PERSONA* p);
char* mes_asci(short n);

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
        printf("%s %d-%d-%d %s\n", pt.nm, pt.dia, pt.ms, pt.aa, pt.mes);
        fprintf(pff, "%s %d-%d-%d %s\n", pt.nm, pt.dia, pt.ms, pt.aa, pt.mes);
        printf("Otro registro?: "); scanf("%c%*c", &r);
    }
    fclose(pff);
    return 0;
}
/** Se leen los atributos de una persona  por teclado */
void entrada(PERSONA* p)
{
    char bf[81];
    printf("Nombre: "); gets(bf);
    p->nm = (char*)malloc((strlen(bf)+1)*sizeof(char));
    strcpy(p ->nm, bf);
    printf("Fecha de nacimiento(dd mm aaaa): ");
    scanf("%d %d %d%*c", &p->dia, &p->ms, &p->aa);
    printf("\n %s\n", mes_asci(p->ms));
    strcpy(p->mes, mes_asci(p->ms));
}

char* mes_asci(short n)
{
    static char *mes[12] = {
        "Enero", "Febrero", "Marzo", "Abril",
        "Mayo", "Junio", "Julio", "Agosto",
        "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    if(n >= 1 && n <= 12)
        return mes[n-1];
    else
        return "Error mes";
}
