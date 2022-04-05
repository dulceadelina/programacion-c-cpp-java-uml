/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	26/04/2017 */
#include <stdio.h>
#include <math.h>


float Media(float a[], int n);
float Varianza(float a[], int n, float m);
float Desviacion(float v);

int main()
{
    int i, n;
    float media, varianza, desviacion;

    printf("Ingresa cuántos elementos: ");
    scanf("%d", &n);

    float v[n];

    for(i = 0; i < n; i++)
    {
        printf("Ingresa el número %d: ", i+1);
        scanf("%f", &v[i]);
    }

    media = Media(v, n);
    varianza = Varianza(v, n, media);
    desviacion = Desviacion(varianza);

    printf("La Media = %f\n", media);
    printf("La Varianza = %f\n", varianza);
    printf("La Desviación Estándar = %f\n", desviacion);
}

float Media(float a[], int n)
{
    float media, suma = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        suma += a[i];
    }

    media = suma / n;

    return media;
}

float Varianza(float a[], int n, float m)
{
    float sumatoria = 0, var;
    int i;

    for(i = 0; i < n; i++)
    {
        sumatoria += pow((a[i] - m), 2);
    }

    var = sumatoria / n;
    return var;
}

float Desviacion(float v)
{
    float d;

    d = sqrt(v);

    return d;
}
