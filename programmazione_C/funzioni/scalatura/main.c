#include <stdio.h>
#include <stdlib.h>

void scalatura(double *n, double s)
{
    //Attenzione alla differenza di utilizzo
    //dell'operatore *
    *n = *n*s;
}

int main()
{
    double a, s;
    printf("Inserisci il numero da scalare: ");
    scanf("%lf", &a);
    printf("Inserisci il fattore di scalatura: ");
    scanf("%lf", &s);
    scalatura(&a, s);
    printf("Il numero scalato risulta: %lf\n", a);
    return 0;
}
