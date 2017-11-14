#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int main()
{
    int m[N][M], t[N][M];
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
            t[i][j] = m[j][i];
        }
    printf("Trasposta\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
