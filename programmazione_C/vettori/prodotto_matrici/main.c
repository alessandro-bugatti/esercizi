#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4
#define P 5

int main()
{
    int a[M][N], b[N][P], c[M][P];
    int i, j, k;

    //Inizializza la matrice
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            a[i][j] = rand()%10;
    //Stampa della matrice a
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    //Inizializza la matrice b
    for (i = 0; i < N; i++)
        for (j = 0; j < P; j++)
            b[i][j] = rand()%10;
    //Stampa della matrice b
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < P; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    //Inizializza la matrice b
    for (i = 0; i < M; i++)
        for (j = 0; j < P; j++)
            c[i][j] = 0;
    for (i = 0; i < M; i++)
        for (j = 0; j < P; j++)
            for (k = 0; k < N; k++)
                c[i][j] += a[i][k]*b[k][j];

    //Stampa della matrice c prodotto di a e b
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < P; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }


    return 0;
}
