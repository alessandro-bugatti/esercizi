#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, N, minimo;
    printf("Inserisci il numero di valori: ");
    scanf("%d", &N);
    //La prima lettura viene fatta esternamente
    //al ciclo per inizializzare il minimo con un
    //elemento dell'insieme
    printf("Inserisci un numero: ");
    scanf("%d", &minimo);
    //Il ciclo fa N - 1 iterazioni perchè un
    //valore è già stato letto
    for (i = 0; i < N - 1; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if (n < minimo)
            minimo = n;
    }
    printf("Il minimo valore inserito vale: %d", minimo);
    return 0;
}
