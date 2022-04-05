/*  Dulce Adelina Zuñiga Ramos
	10. Estructuras y uniones
	07/08/2017 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct inventario
{
    char titulo[50];
    char fecha_pub[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};
typedef struct inventario Inventario; // typedef + tipo de dato + nombre nuevo; -- en este caso // typedef tipodedatonombre + nuevo nombre

int main()
{
    Inventario libro[100]; // arreglo de 100 para el inventario o sea, 100 libros
    int total = 0; // total nos va a ayudar para ubicar la posición
    char resp;
    char b[21]; // b = el precio de venta, después lo convertiremos a número float

    do{
        system("cls");
        printf("Total libros %d \n", total+1);
        printf("¿Cuál es el título?: ");
        gets(libro[total].titulo);

        printf("¿Cuál es la fecha de publicación?: ");
        gets(libro[total].fecha_pub);

        printf("¿Quíen es el autor?: ");
        gets(libro[total].autor);

        printf("¿Cuántos libros existen?: ");
        scanf("%d", &libro[total].num);

        printf("¿Cuántos ejemplares están pedidos?: ");
        scanf("%d", &libro[total].pedido);

        printf("¿Cuál es el precio de venta?: ");
        scanf("%d", &libro[total].precio_venta);
        //libro[total].precio_venta = atof(b);

        printf("¿Hay más libros? (S/N)");
        scanf("%c*c", &resp);

        resp = toupper(resp);
        if(resp == 'S')
        {
            total++;
            continue;
        }
    }while(resp == 'S');

    return 0;
}
