/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
/*
    Determina si una matriz es simétrica. La matriz se genera con números aleatorios de 0 a 7.
    El programa itera hasta encontrar una matriz simétrica.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 8
#define randomize (srand (time (NULL)))
#define random(num) (rand()%(num))
void gen_mat(int a[][N], int n);
int simetrica(int a[][N], int n);
void escribe_mat(int a[][N], int n);
int main(void)
{
    int a[N][N];
    int n, i, j;
    int es_sim;
    randomize;

    do{
        printf("\nTamaño de cada dimensión de la matriz, máximo %d: ", N);
        scanf("%d", &n);
    }while(n < 2 || n > N);
    do{
        gen_mat(a, n);
        es_sim = simetrica(a, n);
        if(es_sim)
        {
            puts("\nEncontrada matriz simétrica. \n");
            escribe_mat(a, n);
        }
    }while(!es_sim);
    return 0;
}
void gen_mat(int a[][N], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            a[i][j] = random(N);
        }
    }
    escribe_mat(a, n);
}
int simetrica(int a[][N], int n)
{
    int i, j;
    int es_simetrica;
    for(es_simetrica = 1, i = 0; i <= n-1 && es_simetrica; i++)
    {
        for(j = i+1; j < n && es_simetrica; j++)
        {
            if(a[i][j] != a[j][i])
            {
                es_simetrica = 0;
            }
        }
    }
    return es_simetrica;
}
void escribe_mat(int a[][N], int n)
{
    int i, j;
    puts("\tMatriz analizada");
    puts("\t ----------------- \n");
    for(i = 0; i < n; i++)
    {
        putchar('\t');
        for(j = 0; j < n; j++)
        {
            printf("%d %c", a[i][j], ((j == n-1)?'\n ':' '));
        }
    }
}
