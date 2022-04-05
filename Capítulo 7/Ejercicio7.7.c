/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	15/02/2017 */

	#include <stdio.h>

	float leer();
	float compara(float a, float b);

	int main ()
	{
	    float num1, num2;
	    puts("Ingresa el primer número");
		num1 = leer();
		puts("Ingresa el segundo número");
		num2 = leer();
		//printf("%f, %f", num1, num2);
		printf("\nEl mayor es %f", compara(num1, num2));
	}

	float leer()
	{
	    float numero;
	    scanf("%f", &numero);
	    return numero;
	}

	float compara(float a, float b)
	{
	    float mayor;
	    if(a > b)
            mayor = a;
        else if(b > a)
            mayor = b;
        else
            puts("Son iguales");

        return mayor;
	}
