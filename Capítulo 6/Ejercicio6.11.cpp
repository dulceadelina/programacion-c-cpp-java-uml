/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	#include <math.h>
	
	int main ()
	{
		int m = 3, n = 5;
		
		f0or(int i = 0; i < n; i++)
		{
			for(int j = 0; j < i; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
		
		for(int i = n; i > 0; i--)
		{
			for(int j = m; j >0; j--)
			{
				putchar('*');
			}
			putchar('\n');
		}	
	}
