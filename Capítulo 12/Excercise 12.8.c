/** Dulce 05/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#define MAX_LIN 120
void copia_archivo(FILE *, FILE*);

int main(int argc, char *argv[])
{
    FILE *pfe, *pfw;
    int i;
    if(argc < 3)
    {
        puts("Error en la línea de órdenes, archivos insuficientes.");
        return -2;
    }
    /** El último archivo es donde se realiza la concatenación */
    if((pfw = fopen(argv[argc-1], "w")) == NULL)
    {
        printf("Error al abrir el archivo %s ", argv[argc-1]);
        return -3;
    }
    for(i = 1; i < argc-1; i++)
    {
        if((pfe = fopen(argv[i], "r")) == NULL)
        {
            printf("Error al abrir el archivo %s ", argv[i]);
            return -1;
        }
        copia_archivo(pfe, pfw);
        fclose(pfe);
    }
    fclose(pfw);
    return 0;
}
/// Función copia un fichero en otro fichero
/// utiliza fputs() y fgets()
void copia_archivo(FILE* f1, FILE* f2)
{
    char cad[MAX_LIN];
    while(!feof(f1))
    {
        fgets(cad, MAX_LIN, f1);
        if(!feof(f1)) fputs(cad, f2);
    }
}
