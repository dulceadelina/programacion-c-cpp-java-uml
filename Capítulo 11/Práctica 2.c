/** Dulce Zu�iga
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
    printf("La direcci�n de memoria de ese entero est� en %p\n", p);

    int** p2;
    p2 = &p;
    printf("El contenido al que apunta p: %d\n", *p);
    printf("La direcci�n de p: %p o %p\n", p2, &p);
    printf("El contenido de p2: %p\n", *p2);
    printf("La direcci�n de p2: %p", &p2);

    return 0;
}
