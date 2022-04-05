/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int num = 10;
	
	funcion1()
	{
		//
		printf(" while\n");
		while (num <= 100)
		{
			printf("%d \n", num);
			num += 10;
		}
	}
	
	funcion2()
	{
		printf(" for\n");
		for(; num <= 100; num += 10)
		{
			printf("%d \n", num);
		}
	}
	
	funcion3()
	{
		printf(" do\n");
		do
		{
			printf("%d \n", num);
			num += 10;
		}while (num <= 100);
	}
	
	int main ()
	{
		funcion1();
		funcion2();
		funcion3();
	}
