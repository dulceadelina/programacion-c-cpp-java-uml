/** Dulce 04/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
int main(void)
{
    FILE *pf;
    float x = 123.5;
    pf = fopen("CARTAS.TXT", "w");
    printf("Posición inicial: %ld\n", ftell(pf));
    fprintf(pf, "Caracteres de prueba");
    printf("Posición actual: %ld\n", ftell(pf));
    fwrite(&x, sizeof(float), 1, pf);
    printf("Posición actual: %ld\n", ftell(pf));
    fclose(pf);
    return 0;
}
