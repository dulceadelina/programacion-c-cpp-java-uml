/*  Dulce Adelina Zuñiga Ramos
	5. Estructuras de selección: sentencias if y switch
	30.11.2016 */
	
	#include <stdio.h>
	
	int main ()
	{
		char operacion;
		int num1, num2, resultado;
		
		puts("Ingresa el caracter de operación: ");
		scanf("%c", &operacion);
		puts("Ingresa dos números enteros de dos cifras: ");
		scanf("%d %d", &num1, &num2);
		
		if(num1 < 100 && num2 <100)
		{
				switch(operacion)
				{
				case '+': 
					resultado = num1+ num2;
					printf("Resultado = %d", resultado);
					break;
					
				case '-': 
					resultado = num1 - num2;
					printf("Resultado = %d", resultado);
					break;
			
				case '*':
					resultado = num1 * num2;
					printf("Resultado = %d", resultado);
					break;
				
			case '/':
				resultado = num1 / num2;
				printf("Resultado = %d", resultado);
				break;
				
				case '%':
					resultado = num1 % num2;
					printf("Resultado = %d", resultado);
					break;
				
				default:
					printf("No salió :P");				
			}
		}
		else
		{
			puts("No son números de dos cifras :/");
		}		
	}
