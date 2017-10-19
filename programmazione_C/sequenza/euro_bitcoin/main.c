#include <stdio.h>
#include <stdlib.h>

#define CAMBIO 3321.49

int main()
{
    float euro, bitcoin;
    printf("Inserisci la quantità di euro che vuoi convertire: ");
    scanf("%f", &euro);
    bitcoin = euro / CAMBIO;
    printf("Al cambio del 19/09/2017 %.3f euro equivalgono a %.4f bitcon",
           euro, bitcoin);
    return 0;
}
