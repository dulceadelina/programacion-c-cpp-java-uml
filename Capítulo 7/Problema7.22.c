/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	25/03/2017 */
#include <stdio.h>
#include <math.h>

void Trigonometricas(double n);

int main()
{
    double angulo;
    printf("Ingresa el ángulo: ");
    scanf("%lf", &angulo);
    Trigonometricas(angulo);
}

void Trigonometricas(double n)
{
    printf("%f\n", sin(n));
    printf("%f\n", cos(n));
    printf("%f\n", acos(n));
    printf("%f\n", asin(n));
    printf("%f\n", tan(n));
    printf("%f\n", atan(n));
    printf("%f\n", sinh(n));
    printf("%f\n", cosh(n));
    printf("%f\n", tanh(n));
}
