#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main()
{
    int setaccio[N], i, j;
    for (i = 0; i < N; i++)
        setaccio[i] = 1;
    for (i = 2; i <= N/2; i++)
    {
        if (setaccio[i] == 1)
            for (j = i*2; j < N; j = j + i)
                setaccio[j] = 0;
    }
    for (i = 2; i < N; i++)
        if (setaccio[i] == 1)
            printf("%d\n", i);
    return 0;
}
