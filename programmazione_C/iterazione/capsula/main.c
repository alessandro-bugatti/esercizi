#include <stdio.h>
#include <stdlib.h>

/*
Esempio con N = 2
  _
 / \
/   \
|   |
|   |
\   /
 \_/

*/
int main()
{
    int N, i, j, spazi_iniziali, spazi_centrali;
    printf("Inserisci N: ");
    scanf("%d", &N);
    for(i = 0; i < N; i++)
        printf(" ");
    printf("_\n");
    spazi_iniziali = N - 1;
    spazi_centrali = 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < spazi_iniziali; j++)
            printf(" ");
        printf("/");
        for (j = 0; j < spazi_centrali; j++)
            printf(" ");
        printf("\\");
        printf("\n");
        spazi_iniziali--;
        spazi_centrali += 2;
    }
    spazi_centrali -= 2;
    for (i = 0; i < N; i++)
    {
        printf("|");
        for (j = 0; j < spazi_centrali; j++)
            printf(" ");
        printf("|");
        printf("\n");
    }
    spazi_iniziali = 0;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < spazi_iniziali; j++)
            printf(" ");
        printf("\\");
        for (j = 0; j < spazi_centrali; j++)
            printf(" ");
        printf("/");
        printf("\n");
        spazi_iniziali++;
        spazi_centrali -= 2;
    }
    for (j = 0; j < spazi_iniziali; j++)
            printf(" ");
    printf("\\_/\n");
    return 0;
}
