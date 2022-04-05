/*  Dulce Adelina Zuñiga Ramos
	5. Estructuras de selección: sentencias if y switch
	30.11.2016 */
	
	#include <stdio.h>
	
	int main ()
	{
		int horas;
		float tasa, horasextra, salariobruto, salariototal;
		
		puts("Ingrese las horas trabajadas: ");
		scanf("%d", &horas);
		puts("Ingrese la tasa: ");
		scanf("%f", &tasa);
		
		if(horas < 38)
		{
			salariobruto = horas * tasa;
		}
		else
		{
			horasextra = ((horas - 37) * tasa) * 1.5;
			salariobruto = (37 * tasa) + horasextra;
		}
		
		if(salariobruto <= 800)
		{
			salariototal = salariobruto;
		}
		else
		{
			salariototal = salariobruto * 0.9;
		}
		
		printf("El salario de Juanito es $%f dolarucos", salariototal);
	}
