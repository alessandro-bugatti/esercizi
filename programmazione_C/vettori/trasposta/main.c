#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

int main()
{
    int m[N][M], t[M][N];
    int i,j;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            m[i][j] = rand()%100;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            t[j][i] = m[i][j];
        }
    printf("Trasposta\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
