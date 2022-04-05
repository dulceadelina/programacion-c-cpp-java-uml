/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	14/03/2017 */
#include <stdio.h>

long f(int n);

int main()
{
    int a;
    long sentencia;

	printf("Hola\n");
	puts("Ingresa a: ");
	scanf("%d", &a);

	sentencia = f(a);
	printf("%ld \n", sentencia);
	system("PAUSE");
}

long f(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return 3 * f(n - 2) + 2 * f(n - 1);
}
