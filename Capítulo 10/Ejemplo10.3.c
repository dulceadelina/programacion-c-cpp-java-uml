/*  Dulce Adelina Zuñiga Ramos
	10. Estructuras y uniones
	07/08/2017 */
#include <stdio.h>
/*Define el tipo estructura info_persona */
struct info_persona
{
    char nombre[20];
    char calle[30];
    char ciudad[25];
    char provincia[25];
    char cp[6];
};
/* prototipos de funciones */
void entrada_pna(struct info_persona* pp); //Asterisco para poder modificar lo que hay en pp, pone a info_persona como apuntador
void ver_info(struct info_persona p); // solo se va a visualizar

void main()
{
    struct info_persona reg_dat;
    /* Pasa por referencia la variable */
    entrada_pna(&reg_dat);
    /* Pasa por valor */
    ver_info(reg_dat);
    printf("\n Pulsa letra para continuar\n");
    getchar();
}

void entrada_pna(struct info_persona* pp)
{
    puts("\nEntrada de los datos de una persona\n");
    /** Para acceder a los campos se utliza ->**/
    printf("Nombre: ");
    gets(pp->nombre);
    printf("Calle: ");
    gets(pp->calle);
    printf("Ciudad: ");
    gets(pp->ciudad);
    printf("Provincia: ");
    gets(pp->provincia);
    printf("Código Postal: ");
    gets(pp->cp);
}

void ver_info(struct info_persona p)
{
    puts("\n\tInformación relativa a la persona");
    puts(p.nombre);
    puts(p.calle);
    puts(p.ciudad);
    puts(p.provincia);
    puts(p.cp);
}
