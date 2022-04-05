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

alumno entra_alumno(void);
profesor entra_profesor(void);
void ver_alumno(void);
void ver_profesor(void);

int main()
{
    int entrada;
    printf("Ingresa 1 para alumno, 2 para profesor: ");
    scanf("%d", &entrada);

    if(entrada == 1)
        alumno entra_alumno();
    if(entrada == 2)
        profesor entra_profesor();
    else
        printf("Opción inválida");

    printf("Ingresa 3 para ver alumno, 4 para ver profesor");
    scanf("%d", &)
}

alumno entra_alumno(void)
{
    alumno a;
    printf("Ingresa su número de control: ");
    scanf("%d", a.no_control);
    printf("Ingresa su nombre: ");
    scanf("%s", a.nombre);
    printf("Ingresa la carrera a la que pertenece: ");
    scanf("%s", a.carrera);
    printf("Ingresa su edad: ");
    scanf("%d", a.edad);
    printf("Ingresa la dirección: ");
    scanf("%s", a.domicilio);
    for(int i = 0; i < 10; i++)
    {
        printf("Ingresa la calificación no. %d", i+1);
        scanf("%d", &a.calificaciones[i]);
    }
}
