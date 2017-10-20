#include <stdio.h>
#include <stdlib.h>

int main()
{
    float larghezza, altezza;
    float volume, volume_massimo = 0, lato_massimo = 0;
    float lato = 0;
    printf("Larghezza e altezza:");
    scanf("%f", &larghezza);
    scanf("%f", &altezza);
    while (lato < altezza / 2)
    {
        volume = (altezza - 2*lato)*(larghezza - 2*lato)*
            lato;
        if (volume > volume_massimo)
        {
            volume_massimo = volume;
            lato_massimo = lato;
        }
        lato = lato + 0.01;
    }
    printf("Il valore del lato per ottenere un volume di %f vale %f",
           volume_massimo, lato_massimo);
    return 0;
}
