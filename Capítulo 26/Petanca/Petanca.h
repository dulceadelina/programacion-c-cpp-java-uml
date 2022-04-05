/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 26: Organización de datos en un archivo
    21/10/2020 **/
#ifndef PETANCA_H
#define PETANCA_H

typedef struct
{
    char candidato1[41];
    long vot1;
    char candidato2[41];
    long vot2;
    char candidato3[41];
    long vot3;
}Distrito;

char* archivo = "Petanca.dat";
FILE *pf = NULL;

#endif // PETANCA_H_INCLUDED

