/*  Dulce Adelina Zuñiga Ramos
	10. Estructuras y uniones
	04/08/2017 */
#include <stdio.h>

struct persona
{
    char nombre[30];
    int edad;
    float altura;
    float peso;
};

int main()
{
    struct persona mar;
    printf("Sizeof(persona): %d \n", sizeof(mar));
    system("pause");
}
