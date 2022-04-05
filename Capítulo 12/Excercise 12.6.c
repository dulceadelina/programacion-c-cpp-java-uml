/** Dulce 04/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
struct punto
{
    int i, j;
};
typedef struct punto PUNTO;
FILE *pp;
int cuenta_pto(PUNTO w);

int main()
{
    PUNTO p;
    char *nom = "C:PUNTOS DAT";
    float media, nmd, dnm;

    if((pp = fopen(nom, "rb")) == NULL)
    {
        puts("\nError al abrir archivo para lectura");
        return -1;
    }
    printf("\nIntroduce coordenadas de punto a buscar: ");
    scanf("%d %d", &p.i, &p.j);
    printf("\nRepeticiones del punto (%d, %d: %d\n)", p.i, p.j, cuenta_pto(p));
    /**Cálculo d ela media i para un valor j */
    printf("Valor de j: "); scanf("%d", &p.j);
    media = nmd = dnm = 0.0;

    for(p.i = 1; p.i <= 100; p.i++)
    {
        int st;
        rewind(pp);
        st = cuenta_pto(p);
        nmd += (float)st*p.i;
        dnm += (float)st;
    }
    if(dnm > 0.0)
        media = nmd/dnm;
    printf("\nMedia de los valores de i para %d = %.2f", p.j, media);
    return 0;
}
/** Cuenta el númerod e veces del punto */
int cuenta_pto(PUNTO w)
{
    PUNTO p;
    int r = 0;
    while(!feof(pp))
    {
        fread(&p, sizeof(PUNTO), 1, pp);
        if(p.i == w.i && p.j == w.j) r++;
    }
    return r;
}
