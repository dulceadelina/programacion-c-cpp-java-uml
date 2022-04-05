/** Dulce 12/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    FILE *pf1 = NULL;
    FILE *pf2 = NULL;
    char nf1[] = "CARTA.TXT";
    char nf2[] = "EMPLA.DAT";
void gen_letter();
void fline(FILE* f);
int main()
{
    pf1 = fopen(nf1, "r");
    pf2 = fopen(nf2, "r");

    if(pf1 == NULL || pf2 == NULL)
    {
        puts("Neither file can be open");
        exit(-1);
    }
    while(!feof(pf2))
    {
        gen_letter();
    }
    fclose(pf2);
    fclose(pf1);
    puts("done!");
    return 0;
}
void gen_letter()
{
    FILE *pf3;
    char* nf3;
        char c[] = "carta-";
        char t[] = ".txt";
        char bf1[50];// Name
        char bf2[50];// Address
        fgets(bf1, 50, pf2);
        nf3 = (char*)malloc((strlen(c)+strlen(bf1)-1)*sizeof(char));
        strcat(nf3, c);
        strncat(nf3, bf1, (strlen(bf1)-1));
        nf3 = realloc(nf3, (((strlen(c)+strlen(bf1)+strlen(t))-1)*sizeof(char)));
        strcat(nf3, t);
        fgets(bf2, 50, pf2);
        if((pf3 = fopen(nf3, "w")) == NULL)
            {
                puts("Error. Bye!");
                exit(-1);
            }
        fputs(bf1, pf3);fline(pf3);
        fputs(bf2, pf3);fprintf(pf3, "\n");
        fclose(pf3);
        pf3 = fopen(nf3, "a");
        while(!feof(pf1))
        {
            char bf3[50];// Letter
            fgets(bf3, 50, pf1);
            fputs(bf3, pf3);
        }
        rewind(pf1);
        fclose(pf3);
}
void fline(FILE* f)
{
    fprintf(f, "\n");
}
