/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	# include <stdio.h>
	
	char palabra[5];
	
	int main ()
	{
		puts("Ingrese una palabra de 5 letras: ");
		scanf("%s", &palabra);
		
		
		printf("\n* * * * * * * * * * * *");
		printf("\n*                     *");
		printf("\n*        %s        *", palabra);
		printf("\n*                     *");
		printf("\n*                     *");
		printf("\n* * * * * * * * * * * *");
		
		return 0;
	}
