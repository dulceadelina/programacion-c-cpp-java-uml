/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	01/02/2019 */
#include <stdio.h>
#define PI 3.141592
#define VOLCONO(radio,altura)((PI*(radio*radio)*altura)/3.0)
int main()
{
    float radio, altura, volumen;

    printf("\nIntroduzca radio del cono: ");
    scanf("%f", &radio);
    printf("Introduzca la altura del cono: ");
    scanf("%f", &altura);
    volumen = VOLCONO(radio, altura);
    printf("\nEl volumen del cono es: %.2f", volumen);

    return 0;
}
