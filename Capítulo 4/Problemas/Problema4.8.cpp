/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	#define PI 3.14159
	
	float radio, radiocuadrado, diametro, altura, circunferencia, arealateral, area, volumen;
	
	int main ()
	{
		puts("Ingresa el radio: ");
		scanf("%f", &radio);
		puts("Ingresa la altura: ");
		scanf("%f", &altura);
		
		radiocuadrado = radio * radio;
		diametro = radio * 2;
		circunferencia = PI * diametro;
		arealateral = circunferencia * altura;
		area = PI * radiocuadrado;
		volumen = area * altura;
		
		printf("\nÁrea lateral = %f, Volumen = %f", arealateral, volumen);
		return 0;
	}
