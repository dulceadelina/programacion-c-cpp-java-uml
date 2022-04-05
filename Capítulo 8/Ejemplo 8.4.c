/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
#include <stdio.h>
#define MAX 10
float muestra[MAX];
void main()
{
    int i;
    printf("\nIntroduzca una lista de %d elementos positivos.\n", MAX);
    for(i = 0; i < MAX; muestra[i] > 0 ? ++i:i)
    {
        scanf("%f", &muestra[i]);
    }
    printf("\nDatos leídos del teclado: ");
    for(i = 0; i < MAX; ++i)
        printf("%f\t", muestra[i]);
}
