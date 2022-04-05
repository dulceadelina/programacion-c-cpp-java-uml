//15/08/2018
#include <stdio.h>

int main()
{
    int n = 10;
    int *p;
    p = &n;

    printf("n = %d", n);
    printf("\n&n = %d", &n);
    printf("\nDirección a la que apunta p %d", p);
    printf("\nContenido de la dirección que apunta p %d", *p);
    printf("\np %d", &p);

}
