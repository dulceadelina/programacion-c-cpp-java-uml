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
    printf("La direcci�n de memoria de ese entero est� en %p", p);

    return 0;
}
