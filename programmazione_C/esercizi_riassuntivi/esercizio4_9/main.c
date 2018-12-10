#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, N, somma = 0;
    printf("Inserisci il numero di valori: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        somma += n;
    }
    printf("La somma dei valori inseriti vale: %d", somma);
    return 0;
}
