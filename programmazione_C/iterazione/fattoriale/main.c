#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int fattoriale = 1, N;
    int i;
    printf("Inserisci il numero di cui vuoi calcolare il fattoriale: ");
    scanf("%ld", &N);
    for (i = 1; i <= N; i++)
        fattoriale = fattoriale * i;
    printf("Il fattoriale di %ld vale %ld", N, fattoriale);
    return 0;
}
