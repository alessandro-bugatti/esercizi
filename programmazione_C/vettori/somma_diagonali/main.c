#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    int m[N][N];
    int i,j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            m[i][j] = rand()%10;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    int somma_maggiore = 0, somma_minore = 0;
    for (i = 0; i < N; i++)
        somma_maggiore += m[i][i];

    for (i = 0; i < N; i++)
        somma_minore += m[i][N - i - 1];

    printf("%d %d", somma_maggiore, somma_minore);
    return 0;
}
