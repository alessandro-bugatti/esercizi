#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta = 0, somma = 0, n;
    float media;
    printf("Inserisci un numero (9999 per terminare)");
    scanf("%d", &n);
    while (n != 9999)
    {
        conta++;
        somma += n;
        printf("Inserisci un numero (9999 per terminare)");
        scanf("%d", &n);
    }
    //Per evitare la divisione per zero
    if (conta == 0)
        printf("Non posso fare la media\n");
    else
    {
        //attenzione al casting per evitare perdita di precisione
        media = (float)somma/conta;
        printf("La media vale %.2f\n", media);
    }
    return 0;
}
