#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N, l, spazi;
    printf("Inserisci il lato: ");
    scanf("%d", &N);
    printf("Triangolo a)\n");
    l = 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l++;
    }
    printf("Triangolo b)\n");
    l = N;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l--;
    }
    printf("Triangolo c)\n");
    l = N;
    spazi = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l--;
        spazi++;
    }
    printf("Triangolo d)\n");
    l = 1;
    spazi = N-1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l++;
        spazi--;
    }
    return 0;
}
