/*  Dulce Adelina Zu�iga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		int i, n; 
		float mayor = 0,  num, menor, suma, media;
		
		puts("Ingresa la cantidad de n�meros a ingresar: ");
		scanf("%d", &n);
		
		for(i = 1;  i <= n; i++)
		{
			printf("Ingresa el %d� n�mero", i);
			scanf("%f", &num);
			
			if(num > mayor)
			{
				mayor = num;
			}
			else if(num < menor)
			{
				menor = num;
			}
			
			suma += num;
		}
		media = suma / n;
		printf("\nLa media es %.2f", media);
		printf("\n Mayor es %f", mayor);
		printf("\n Menor es %f", menor);
	}
