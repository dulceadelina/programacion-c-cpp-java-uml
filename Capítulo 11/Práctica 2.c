/** Dulce Zuñiga
    29/09/2019 **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    int* p;
    printf("Ingrese un entero: ");
    scanf("%d", &v);
    p = &v;
    printf("La dirección de memoria de ese entero está en %p\n", p);

    int** p2;
    p2 = &p;
    printf("El contenido al que apunta p: %d\n", *p);
    printf("La dirección de p: %p o %p\n", p2, &p);
    printf("El contenido de p2: %p\n", *p2);
    printf("La dirección de p2: %p", &p2);

    return 0;
}
