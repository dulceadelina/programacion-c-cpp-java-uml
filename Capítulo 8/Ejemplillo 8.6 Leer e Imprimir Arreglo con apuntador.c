/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
#include <stdio.h>
#define L 100

void leerArray(double a[], int* num);
void imprimirArray (const double [], int n);

int main()
{
    double a[L];
    int n;//la variable n de elementos
    leerArray(a, &n);//pasa la dirección, el apuntador
    printf("El arreglo tiene %d elementos, estos son\n ", n);
    imprimirArray(a, n);
    return 0;
}
void leerArray(double a[], int* num)
{
    int n = 0;
    puts("Introduzca datos. Para terminar pulsar 0.\n");
    for(; n < L; n++)
    {
        printf("%d: ", n);
        scanf("%lf", &a[n]);
        if(a[n] == 0)
            break;
    };
    *num = n;
}
void imprimirArray(const double a[], int n)
{
    int i = 0;
    for(; i < n; i++)
        printf("\t%d: %lf\n", i, a[i]);
}
