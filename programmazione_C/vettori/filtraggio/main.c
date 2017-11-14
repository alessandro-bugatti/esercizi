#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    float vettore[N], appoggio[N];
    float media;
    int elementi, n, k, i , j;
    printf("Inserisci il numero di elementi del vettore: ");
    scanf("%d", &n);
    printf("Inserisci la dimensione della finestra di filtraggio: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
        scanf("%f", &vettore[i]);
    for (i = 0; i < n; i++)
    {
        media = 0;
        elementi = 0;
        for (j = -k; j <= k; j++)
            if (i+j >= 0 && i+j<n)
            {
                media += vettore[i+j];
                elementi++;
            }
        media = media/elementi;
        appoggio[i] = media;
    }
    for (i = 0; i < n; i++)
        vettore[i] = appoggio[i];
    printf("Elementi dopo il filtraggio\n");
    for (i = 0; i < n; i++)
        printf("%f\n", vettore[i]);
    return 0;
}
