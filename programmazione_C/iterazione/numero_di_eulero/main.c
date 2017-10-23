#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,  i;
    double fattoriale = 1,eulero = 1;
    printf("Inserisci il numero di termini desiderati: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        fattoriale = fattoriale * i;
        eulero = eulero + 1/fattoriale;
    }
    printf("Il valore della e di Eulero con la serie fermata al %d termine vale %.10lf",
           N, eulero);
    return 0;
}
