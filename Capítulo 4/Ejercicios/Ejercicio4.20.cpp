/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	//Car�cter alfab�tico, d�gito, de puntuaci�n, especial o no imprimible
	
	#include <stdio.h>
	
	unsigned char caracter;
	
	int main ()
	{
		puts("Introduce un valor del 0 al 255: ");
		scanf("%c", &caracter);
		
		// if para alfab�tico
		if((caracter >= 'A' && caracter <= 90) || (caracter >= 97 && caracter <= 122) || (caracter >= 128 && caracter <= 167))
		{
			puts("Car�cter alfab�tico");
		}
		
	/*	//if para caracter no imprimible
		if()
		{
			puts("Car�cter no imprimible");
		}
		
		//if para caracter de puntuaci�n
		if()
		{
			puts("Car�cter de puntuaci�n");
		}
		
		//if para caracter d�gito
		if()
		{
			puts("D�gito");
		} */
	}
