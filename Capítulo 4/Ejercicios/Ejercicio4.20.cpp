/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	//Carácter alfabético, dígito, de puntuación, especial o no imprimible
	
	#include <stdio.h>
	
	unsigned char caracter;
	
	int main ()
	{
		puts("Introduce un valor del 0 al 255: ");
		scanf("%c", &caracter);
		
		// if para alfabético
		if((caracter >= 'A' && caracter <= 90) || (caracter >= 97 && caracter <= 122) || (caracter >= 128 && caracter <= 167))
		{
			puts("Carácter alfabético");
		}
		
	/*	//if para caracter no imprimible
		if()
		{
			puts("Carácter no imprimible");
		}
		
		//if para caracter de puntuación
		if()
		{
			puts("Carácter de puntuación");
		}
		
		//if para caracter dígito
		if()
		{
			puts("Dígito");
		} */
	}
