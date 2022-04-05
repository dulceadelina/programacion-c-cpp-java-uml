/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>

	float conversion (float gradosc);

	int main ()
	{
	    float temperatura;
		puts("Introduce la temperatura en °C: ");
		scanf("%f", &temperatura);
		printf("De %f °C = %f °F\n\n", temperatura, conversion(temperatura));
    }

    float conversion(float gradosc)     // repetir la declaración
    {
        float fahrenheit;
        fahrenheit = (1.8 * gradosc) + 32;
        return fahrenheit;
    }
