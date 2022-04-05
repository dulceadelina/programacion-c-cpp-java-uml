/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>

int sumaRecursiva(int n);
int sumaIterativa(int n);

int main()
{
    int n, resultado;

    printf("Ingrese n: ");
    scanf("%d", &n);

    printf("Resultado recursivo = %d", sumaRecursiva(n));
    printf("\nResultado iterativo = %d", sumaIterativa(n));
}
int sumaRecursiva(int n)
{
    if(n <= 9)
        return n;
    else
        return sumaRecursiva(n/10) + n%10;
}
int sumaIterativa(int n)
{
    int suma = 0;
    while(n > 9)
    {
        suma = suma + n%10;
        n /= 10;
    }
    return(suma+n);
}
