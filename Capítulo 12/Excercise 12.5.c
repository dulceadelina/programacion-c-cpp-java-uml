/** Dulce 04/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
struct punto
{
    int x, y;
};
typedef struct punto PUNTO;
int main()
{
    PUNTO p;
    char *nom = "PUNTOS.DAT";
    FILE *pp;
    if((pp = fopen(nom, "wb")) == NULL)
    {
        puts("\nError en la operación de abrir archivo.");
        return -1;
    }
    puts("\nIntroduce coordenadas de puntos, para acabar: (0,0) ");
    do{
        scanf("%d %d", &p.x, &p.y);
        while(p.x<0 || p.y<0)
        {
            printf("Coordenadas deben ser >= 0: ");
            scanf("%d %d", &p.x, &p.y);
        }
        if(p.x > 0 || p.y>0)
        {
            fwrite(&p, sizeof(PUNTO), 1, pp);
        }
    }while(p.x>0 || p.y>0);
    fclose(pp);
    return 0;
}
