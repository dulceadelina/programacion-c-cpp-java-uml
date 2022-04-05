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
    char asignaturas[150];
};

struct Persona
{
    char nombre[50];
    char domicilio[70];
};

typedef struct Alumno alumno;
typedef struct Profesor profesor;
typedef struct Persona persona;

void entrada_alumno(alumno* aa);
void ver_alumno(alumno a);
void entrada_profesor(profesor* pp);
void ver_profesor(profesor p);

int main()
{
    int entrada;
    alumno inscripcion;
    profesor registro;

    do
    {
        system("cls");
        puts("Ingresa la opción: ");
        puts("1.- Ingresar un alumno");
        puts("2.- Ingresar un profesor");
        puts("3.- Visualizar alumno");
        puts("4.- Visualizar profesor");
        scanf("%d", &entrada);

        switch(entrada)
        {
            case 1:
                entrada_alumno(&inscripcion);
                system("pause");
                break;
            case 2:
                entrada_profesor(&registro);
                break;
            case 3:
                ver_alumno(inscripcion);
                break;
            case 4:
                ver_profesor(registro);
                break;
        }
    }while(entrada < 5);
    return 0;
}

void entrada_alumno(alumno* aa)
{
    int i;
    printf("Ingresa su número de control: ");
    scanf("%d", &aa->no_control);
    printf("Ingresa su nombre: ");
    scanf("%s", &aa->nombre);
    printf("Ingresa la carrera a la que pertenece: ");
    scanf("%s", &aa->carrera);
    printf("Ingresa su edad: ");
    scanf("%d", &aa->edad);
    printf("Ingresa la dirección: ");
    scanf("%s", &aa->domicilio);
    for(i = 0; i < 10; i++)
    {
        printf("Ingresa la calificación no. %d: ", i+1);
        scanf("%d", &aa->calificaciones[i]);
    }
}

void entrada_profesor(profesor* pp)
{
    printf("Ingrese el nombre del profesor: ");
    scanf("%s", &pp->nombre);
    printf("Ingrese su dirección: ");
    scanf("%s", &pp->domicilio);
    printf("Ingrese las asignaturas que imparte separadas por coma(,)\n");
    scanf("%s", &pp->asignaturas);
}

void ver_alumno(alumno a)
{
    int i;
    printf("\t Alumno\n");
    printf("%s\n", a.nombre);
    printf("%d\n", a.no_control);
    printf("%s\n", a.carrera);
    printf("%d\n", a.edad);
    printf("%s\n", a.domicilio);
    printf("%d", a.calificaciones[0]);
    for(i = 1; i < 10; i++)
    {
        printf(", %d", a.calificaciones[i]);
    }
    system("pause");
}

void ver_profesor(profesor p)
{
    printf("\t Profesor\n");
    printf("%s\n", p.nombre);
    printf("%s\n", p.domicilio);
    printf("%s\n", p.asignaturas);
    system("pause");
}
