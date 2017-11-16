#include <stdio.h>
#include <stdlib.h>

#define N 3

void trova_uguali(int m[][N], int v[], int n, int numero)
{
    int i, j;
    for (i = 0; i < n; i++)
        v[i] = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < N; j++)
            if(m[i][j] == numero)
                v[i]++;
}

int main()
{
    int m[][N] = {{1,2,1},{4,5,1},{1,1,1}};
    int v[N], i;
    trova_uguali(m, v, 3, 5);
    for (i = 0; i<3; i++)
        printf("%d\n", v[i]);
    return 0;
}
