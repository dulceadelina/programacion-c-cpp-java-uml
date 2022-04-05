/** Dulce 05/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char asg[41];
    int curso;
}ASGTA;
typedef struct
{
    char nom[41];
    int nal, aprob, susp;
}PROFS;
typedef struct
{
    char nom[41];
    float nota;
}ALMNO;

void entrada(ALMNO* a);
void main(void)
{
    ASGTA a;
    PROFS h = {" ", 0, 0, 0};
    ALMNO t;
    FILE* pf;
    int i;
    fpos_t* p = (fpos_t*)malloc(sizeof(fpos_t));
    pf = fopen("CURSO.DAT", "wb+");
    if(pf == NULL)
    {
        printf("Error al abrir el archivo, modo wb+");
        exit(-1);
    }
    printf("Asignatura: ");
    gets(a.asg);
    printf("Curso: ");
    scanf("%d%*c", &a.curso);
    fwrite(&a, sizeof(ASGTA), 1, pf);
    printf("Nombre del profesor: ");
    gets(h.nom);
    printf("Número de alumnos: ");
    scanf("%d%*c", &h.nal);
    fgetpos(pf, p); /// Guarda en p la posición actual
    fwrite(&h, sizeof(PROFS), 1, pf);

    for(i = 0; i <= h.nal; i++)
    {
        entrada(&t);
        if(t.nota <= 4.5)
            h.susp++;
        else
            h.aprob++;
        fwrite(&h, sizeof(ALMNO), 1, pf);
    }
    fflush(pf);
    fsetpos(pf, p); ///Se situa en registro del profesor
    fwrite(&h, sizeof(PROFS), 1, pf);
    fclose(pf);
}
void entrada(ALMNO* a)
{
    printf("Nombre: ");
    gets(a -> nom);
    printf("Nota: ");
    scanf("%f%*c", &(a ->nota));
}
