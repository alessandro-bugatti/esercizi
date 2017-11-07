#include <stdio.h>
#include <stdlib.h>

#define D_MAX 100

int main()
{
    int v[D_MAX], N, i;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &v[i]);
    for (i = 0; i < N; i++)
        if (v[i] % 2 == 0)
            printf("v[%d] = %d\n", i, v[i]);
    for (i = 0; i < N; i++)
        if (v[i] % 2 != 0)
            printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
