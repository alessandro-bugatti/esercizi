#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, N=100;
    for (i = 1; i <= N; i++)
        for (j = i + 1; j <= N; j++)
            for (k = j + 1; k <= N; k++)
                if (i*i + j*j == k*k)
                    printf("%d %d %d\n", i, j ,k);
    return 0;
}
