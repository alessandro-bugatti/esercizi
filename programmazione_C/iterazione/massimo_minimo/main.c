#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, valore, massimo, minimo, i;
    printf("Inserisci quanti sono i numeri della sequenza: ");
    scanf("%d", &N);
    printf("Inserisci un valore: ");
    scanf("%d", &valore);
    massimo = valore;
    minimo = valore;
    for (i = 1; i < N; i++)
    {
        printf("Inserisci un valore: ");
        scanf("%d", &valore);
        if (valore > massimo)
            massimo = valore;
        if (valore < minimo)
            minimo = valore;
    }
    printf("Max: %d Min: %d\n", massimo, minimo);
    return 0;
}
