/*  Dulce Adelina Zuñiga Ramos
	11. Apuntadores (punteros)
	02/09/2017 */
#include <stdio.h>
#include <stdlib.h>

struct t_persona
{
    char nombre[30];
    int edad;
    int altura;
    int peso;
};
typedef struct t_persona persona;
void mostrar_persona(persona *ptr);

void main()
{
    int i;
    persona empleados[] = {{"Mortimer, Pepe", 47, 182, 85},
                            {"García, Luis", 39, 170, 75},
                            {"Jímenez, Tomás", 18, 175, 80}};
    persona *p;
    p = empleados;

    for(i = 0; i < 3; i++, p++)
    {
        mostrar_persona(p);
    }
}

void mostrar_persona(persona *ptr)
{
    printf("\nNombre: %s", ptr -> nombre);
    printf("\nEdad: %d", ptr -> edad);
    printf("\nAltura: %d", ptr->altura);
    printf("\nPeso: %d\n", ptr->peso);
}
