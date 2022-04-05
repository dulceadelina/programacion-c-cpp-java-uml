/*  Dulce Adelina Zuñiga Ramos
	5. Estructuras de selección: sentencias if y switch
	26.11.2016 */
	
	#include <stdio.h>
	
	int main()
	{
		float nota;
		
		puts("Ingresa la nota: ");
		scanf("%f", &nota);
		
		if((nota < 0) || (nota > 10))
		{
			puts("Nota no válida");
		}
		if(nota >= 0 && nota < 5.0)
		{
			puts("Reprobado");	
		}
		else if(nota >= 5 && nota < 6.5)
		{
			puts("Aprobado");
		}		
		else if(nota >= 6.5 && nota < 8.5)
		{
			puts("Notable");
		}
		else if(nota >= 8.5 && nota < 10)
		{
				puts("Sobresaliente");
		}
		else if(nota == 10)
		{
			puts("Matrícula de honor");
		}
			
		return 0;
	}
