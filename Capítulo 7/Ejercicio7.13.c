/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	21/03/2017 */
#include <stdio.h>

int Producto(int a, int b);

int main()
{
    int num1, num2;
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    printf("El producto de %d y %d mediante recursividad es = %d", num1, num2, (num1 < num2) ? Producto(num1, num2) : Producto(num2, num1));
}

int Producto(int a, int b)
{
    //static int suma = 0;
    if(a ==1)
    {
        return b;
    }
    else
    {
        return Producto(a-1, b+b);
    }
}
