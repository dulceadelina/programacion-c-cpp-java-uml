/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>
int mcd(int m, int n);

int main()
{
    int m, n;
    do{
        printf("Introduzca dos enteros positivos: ");
        scanf("%d %d", &m, &n);
    }while((n <= 0)||(m <= 0));

    printf("\nEl máximo común divisor es %d: ", mcd(m,n));
}
int mcd(int m, int n)
{
    if(n <= m && m%n == 0)
        return n;
    else if(m < n)
        return mcd(n, m);
    else if(mcd(n, m%n));
}
