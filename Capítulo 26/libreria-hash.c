/** 09/01/2021 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define principal 199
#define total 240

const char fich[12] = "fichash.dat";

FILE *fh = NULL;

typedef struct
{
    char codigo[7];
    char autor[41];
    char titulo[41];
}Libro;

#define desplazamiento(n) ((n)*sizeof(Libro))

/** prototipo de funciones */
void creacion(void);
void compra(void);      /** operaci�n de dar de ALTA */
void venta(void);       /** operaci�n de dar de BAJA */
void consulta(void);
void colisiones(Libro lib);
int indexSinonimo(const char c[]);
int hash(char c[]);
long transformaClave(const char c[]);
void escribir(Libro lib);

void main()
{
    char opcion;
    /** comprueba si el archivo ya ha sido creado */
    fh = fopen(fich, "rb");
    if(fh == NULL)
    {
        puts("EL ARCHIVO VA A SER CREADO");
        creacion();
    }
    else
        fh = NULL;
    do
    {
        puts("1. Compra ");
        puts("2. Venta ");
        puts("3. Consulta ");
        puts("5. Salir ");

        do
        {
            printf("Elige una opci�n ");
            scanf("%c%*c", &opcion);
        }while(opcion < '1' || opcion > '5' || opcion == '4');
        switch(opcion)
        {
            case '1':
                compra(); break;
            case '2':
                venta(); break;
            case '3':
                consulta(); break;
        }
    }while(opcion != '5');
    if(fh != NULL) fclose(fh);
}

/** Creaci�n: escribe consecutivamente total registros, todos con el campo c�digo
    igual a "*" para indicar que est�n libres. */
void creacion(void)
{
    Libro lib;
    int i;
    fh = fopen(fich, "wb+");
    strcpy(lib.codigo, "*");
    for(i = 1; i <= total; i++)
        fwrite(&lib, sizeof(lib), 1, fh);
    fclose(fh);
    fh = NULL;
}
/** Alta de un registro: pide al usuario los campos c�digo, t�tulo y autor. Llama a
    la funci�n hash() para obtener la posici�n en la cual leer el registro, si
    est� libre graba el nuevo registro. Si est� ocupado busca en el �rea de
    colisiones la primera posici�n libre que ser� donde escribe el regsitro. */
void compra(void)
{
    Libro lib, libar;
    long posicion;

    if(fh == NULL) fh = fopen(fich, "rb+");

    printf("C�digo: "); gets(lib.codigo);
    printf("Autor: "); gets(lib.autor);
    printf("T�tulo: "); gets(lib.titulo);
    posicion = hash(lib.codigo);
    posicion = desplazamiento(posicion);

    fseek(fh, posicion, SEEK_SET);
    fread(&libar, sizeof(Libro), 1, fh);
    if(strcmp(libar.codigo, "*") == 0) /** registro libre */
    {
        fseek(fh, -sizeof(Libro), SEEK_CUR);
        fwrite(&lib, sizeof(Libro), 1, fh);
        printf("Registro grabado en la direcci�n : %ld\n", posicion);
    }
    else if(strcmp(lib.codigo, libar.codigo) == 0) /** duplicado */
    {
        puts("c�digo repetido, rebisar los datos.");
        return;
    }
    else
        colisiones(lib);
    fflush(fh);
}
/** Baja de un registro: pide el c�digo del registro. Se lee el registro cuya
    posici�n est� determinada por la funci�n hash(). Si los c�digos son iguales,
    se da de baja escribiendo '*' en el campo c�digo. En caso contrario se busca
    en el �rea de colisiones y se procede igual */
void venta(void)
{
    Libro libar;
    char codigo[7], r;
    long posicion;

    if(fh == NULL) fh = fopen(fich, "rb+");

    printf("C�digo: "); gets(codigo);
    posicion = hash(codigo);
    posicion = desplazamiento(posicion);

    fseek(fh, posicion, SEEK_SET);
    fread(&libar, sizeof(Libro), 1, fh);

    if(strcmp(libar.codigo, codigo) != 0)
        posicion = indexSinonimo(codigo);

    if(posicion != -1)
    {
        escribir(libar);
        printf("�Son correctos los datos? (S/N): ");
        scanf("%c%*c", &r);
        if(toupper(r) == 'S')
        {
            strcpy(libar.codigo, "*");
            fseek(fh, -sizeof(Libro), SEEK_CUR);
            fwrite(&libar, sizeof(Libro), 1, fh);
        }
    }
    else
        puts("No se encuentra un registro con ese c�digo.");
    fflush(fh);
}
/** Consulta de un registro: pide el c�digo del registro. Se lee el registro cuya
    posici�n est� determinada por la funci�n hash(). Si los c�digos son iguales
    se muestra por pantalla. En caso contrario se busca en el �rea de colisiones. */
void consulta(void)
{
    Libro lib;
    char codigo[7];
    long posicion;

    if(fh == NULL) fh = fopen(fich, "rb+");
    printf("C�digo: "); gets(codigo);
    posicion = hash(codigo);
    posicion = desplazamiento(posicion);

    fseek(fh, posicion, SEEK_SET);
    fread(&lib, sizeof(Libro), 1, fh);

    if(strcmp(lib.codigo, codigo) == 0)
        escribir(lib);
    else
    {
        int posicion;
        posicion = indexSinonimo(codigo);
        if(posicion != -1)
        {
            fseek(fh, -sizeof(Libro), SEEK_CUR);
            fread(&lib, sizeof(Libro), 1, fh);
            escribir(lib);
        }
        else
            puts("No se encuentra un ejemplar con ese c�digo");
    }
}
/** Inserta en �rea de sin�nimos: busca secuencialmente el primer registro libre
    (codigo==*) para grabar el registro lib */
void colisiones(Libro lib)
{
    Libro libar;
    int pos = desplazamiento(principal);
    int j = principal;
    int encontrado;

    fseek(fh, pos, SEEK_SET);       /** se sit�a en �rea de sin�nimos */
    encontrado = 0;
    while((j < total) &&  !encontrado)
    {
        fread(&libar, sizeof(Libro), 1, fh);
        j++;
        if(strcmp(libar.codigo, "*") == 0)
        {
            encontrado = 1;
            fseek(fh, -sizeof(Libro), SEEK_CUR);
            fwrite(&lib, sizeof(Libro), 1, fh);
            puts("Datos grabados en el �rea de sin�nimos.");
        }
    }
    if(!encontrado) puts("�rea de sin�nimos completa. ");
    fflush(fh);
}
/** B�squeda en �rea de sin�nimos: b�squeda secuencial, por c�digo, de un registro.
    Devuelve la posici�n que ocupa, o bien -1 si no se encuentra. */
int indexSinonimo(const char c[])
{
    Libro libar;
    int pos = desplazamiento(principal);
    int j = principal;
    int encontrado;

    fseek(fh, pos, SEEK_SET);
    encontrado = 0;
    while((j < total) && !encontrado)
    {
        fread(&libar, sizeof(Libro), 1, fh);
        j++;
        if(strcmp(libar.codigo, c) == 0)
            encontrado = 1;
    }
    if(!encontrado) j = -1;
    return j;
}
/** Aritm�tica modular: transforma cadena a un entero en el rango [0, principal).
    En primer lugar pasa los caracteres del c�digo a may�sculas. A continuaci�n, llama
    a a la funci�n que convierte la cadena a entero largo. Por �ltimo, aplica el m�dulo
    respecto a principal. El m�dulo produce un entero de 0 a principal-1. */
int hash(char c[])
{
    int i, suma = 0;

    for(i = 0; i < strlen(c); i++)
        c[i] = toupper(c[i]);
    return transformaClave(c) % principal;
}

long transformaClave(const char clave[])
{
    int j;
    long d;
    d = 0;
    for(j = 0; j < strlen(clave); j++)
        d = d *27 + clave[j];
    /** Si d supera el m�ximo entero largo, genera un n�mero negativo */
    if(d < 0) d = -d;
    return d;
}
void escribir(Libro lib)
{
    printf("C�digo: %s\t", lib.codigo);
    printf("Autor: %s\t", lib.autor);
    printf("T�tulo: %s\n", lib.titulo);
}
