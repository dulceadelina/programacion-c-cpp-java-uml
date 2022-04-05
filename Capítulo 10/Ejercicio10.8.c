/*  Dulce Adelina Zuñiga Ramos
	10. Estructuras y uniones
	09/08/2017 */
#include <stdio.h>

struct Alumno
{
    int no_control;
    char nombre[50];
    char carrera[30];
    int edad;
    char domicilio[70];
    int calificaciones[10];
};

struct Profesor
{
    char nombre[50];
    char domicilio[70];
    char asignaturas[100];
};

struct Persona
{
    char nombre[50];
    char domicilio[70];
};

typedef struct Alumno alumno;
typedef struct Profesor profesor;
typedef struct Persona persona;

