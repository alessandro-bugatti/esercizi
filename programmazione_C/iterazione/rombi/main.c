#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i, j;
    int l = 1;
    int spazi;
    printf("Inserisci la dimensione del lato del rombo: ");
    scanf("%d", &N);
    spazi = N - 1;
    //Disegno della parte superiore del rombo
    for (i = 0; i < N; i++){
        for (j = 0; j < spazi ; j++)
             printf(" ");
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l = l + 2;
        spazi = spazi - 1;
    }
    spazi = 1;
    l = l - 4;
    //Disegno della parte inferiore del rombo
    for (i = 0; i < N - 1; i++){
        for (j = 0; j < spazi ; j++)
             printf(" ");
        for (j = 0; j < l; j++)
            printf("*");
        printf("\n");
        l = l - 2;
        spazi = spazi + 1;
    }
    return 0;
}
