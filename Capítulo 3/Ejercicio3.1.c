/*  Dulce Adelina Zu�iga Ramos
	3. El lenguaje C: elementos b�sicos
	30.09.2016 */
	
	#include <stdio.h>
	int main()
	{
		char pax[] = "Juan Sin Miedo";
		printf("%s %s\n", pax, &pax[4]);
		puts(pax);
		puts(&pax[4]);
		return 0;
	}
