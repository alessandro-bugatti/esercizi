#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 5

void applica_trasformazione(int A[N][M],
                           int R[N][M],
                           int B[3][3])
{
    int i, j, r, s;
    for (i = 1; i < N - 1; i++)
        for (j = 1; j < M - 1; j++)
    {
        for (r = -1; r < 2; r++)
            for (s = -1 ; s < 2; s++)
                R[i][j] += A[i+r][j+s]*B[r+1][s+1];
    }
}

int main()
{
    int i, j;
    int A[N][M], R[N][M];
    int B[][3] = {
        {0,1,0},
        {1,0,1},
        {0,1,0}
    };
    printf("Matrice prima della trasformazione\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            A[i][j] = rand()%100;
            printf("%4d", A[i][j]);
            R[i][j] = 0;
        }
        printf("\n");
    }
    applica_trasformazione(A,R,B);
    printf("Matrice dopo la trasformazione\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++)
            printf("%4d", R[i][j]);
        printf("\n");
    }
    return 0;
}
