/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
#include <stdio.h>
/*prototipos funcionales*/
void leer(int a[][5]);
void visualizar(const int a[][5]);

int main()
{
    int a[3][5];
    leer(a);
    visualizar(a);
    return 0;
}
void leer(int a[][5])
{
    int i, j;
    puts("Introduzca 15 números enteros, 5 por fila");
    for(i = 0; i < 3; i++)
    {
        printf("Fila %d: ", i);
        for(j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
}
void visualizar(const int a[][5])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf(" %d", a[i][j]);
        }
            printf("\n");

    }
}
