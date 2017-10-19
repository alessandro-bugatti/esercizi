#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altezza_iniziale;
    int km = 0;
    printf("Inserisci l'altezza:");
    scanf("%f", &altezza_iniziale);
    while (altezza_iniziale > 0.01){
        altezza_iniziale = altezza_iniziale * 0.9;
        km++;
        }
    printf("L'onda si propaga per %d kilometri", km);
    return 0;
}
