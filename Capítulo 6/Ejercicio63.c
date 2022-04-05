/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */

#include <stdio.h>

float SerieFracciones(int n);
void Calificaciones();
int SumaEnteros(int x);

int main ()
{
    float suma;
    int f = 50, a = 50;;
    suma = SerieFracciones(f);
    printf("Suma = %f", suma);
    Calificaciones();
    SumaEnteros(a);
}

float SerieFracciones(int n)
{
    static float total;

    if(n == 2)
    {
        return n;
    }
    else
    {
        return total += 1/(SerieFracciones(n - 1));
    }
}

void Calificaciones()
{
    int i, n;

    printf("\nIngresa el número de calificaciones: ");
    scanf("%d", &n);

    float calif[n], suma, promedio;
    for(i = 0; i < n; i++)
    {
        printf("\n Ingresa la calificación %d:  ", i+1);
        scanf("%f", &calif[i]);
        suma += calif[i];
    }
    promedio = suma / n;
    printf("El promedio de %d calificaciones es: %.2f \n\n\n", n, promedio);
}

int SumaEnteros(int x)
{
    /*static int enteros;
    if(x == 11)
    {
        return x;
    }
    else
    {
        return enteros += (SumaEnteros(x - 1));
    }*/

    int i, enteros;

    for(i = 11; i <= 50; i++)
    {
        enteros += i;
        printf("%d + ", i);
    }
    printf(" = %d", enteros);
}
