/*  Dulce Adelina Zu�iga Ramos
	10. Estructuras y uniones
	09/08/2017 */
#include <stdio.h>

struct Estaciones
{
    char nombre[30];
};

typedef struct Estaciones estacion;

int main()
{
    estacion temporada;
    puts("Ingresa una estaci�n del a�o: ");
    gets(temporada.nombre);

    printf("La estaci�n que ingresaste fue %s", temporada.nombre);
}
