/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		float contrato, aumento, nuevosalario;
		
		puts("Ingrese salario de contrato: ");
		scanf("%f", &contrato);
		
		if(contrato > 0 && contrato <= 9000)
		{
			nuevosalario = contrato * 1.20;
		}
		else if(contrato > 9000 && contrato <= 15000)
		{
			nuevosalario = contrato * 1.1;
		}
		else if(contrato > 15000 && contrato <= 20000)
		{
			nuevosalario = contrato * 1.05;
		}
		else
		{
			nuevosalario = contrato;
		}
		
		printf("\n Su nuevo salario es $%.2f", nuevosalario);
	}
