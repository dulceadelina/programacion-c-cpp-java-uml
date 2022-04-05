/*  Dulce Adelina Zuñiga Ramos
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
    puts("Ingresa una estación del año: ");
    gets(temporada.nombre);

    printf("La estación que ingresaste fue %s", temporada.nombre);
}
