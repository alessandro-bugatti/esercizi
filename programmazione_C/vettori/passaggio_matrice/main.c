#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 15

int massimo(int m[][M], int n)
{
    int i, j, massimo = m[0][0];
    for (i = 0; i < n; i++)
        for (j = 0; j < M ; j++)
            if (m[i][j] > massimo)
                massimo = m[i][j];
    return massimo;
}

int main()
{
    int i, j, m[N][M];
    for (i = 0; i < N; i++)
        for (j = 0; j < M ; j++)
            m[i][j] = rand()%1000;
    printf("Il massimo vale %d", massimo(m, N));

    return 0;
}
