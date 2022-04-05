/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	05/02/2019 */
#include <stdio.h>
#include <string.h>

int par(int n);
int impar(int n);

int main()
{
    int n;
    char rslt[12];

    do{
        printf("Introduzca un número: ");
        scanf("%d", &n);
    }while(n < 0);

    if(par(n))
        strcpy(rslt, " es par");
    else
        strcpy(rslt, " es impar");
    printf("\t %d %s", n, rslt);
    return 0;
}
int par(int n)
{
    if (n == 0)
        return 1;
    else
        return impar(n - 1);
}
int impar(int n)
{
    if(n == 0)
        return 0;
    else
        return par(n - 1);
}
