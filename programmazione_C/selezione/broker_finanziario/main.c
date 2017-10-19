#include <stdio.h>
#include <stdlib.h>

int main()
{
    float transazione, commissione;
    printf("Inserisci il valore della transazione: ");
    scanf("%f", &transazione);
    if (transazione < 2500)
    {
        commissione = 30.0 + transazione*1.7/100;
    }
    else if (transazione < 6250)
    {
        commissione = 56.0 + transazione*0.66/100;
    }
    else if (transazione < 20000)
    {
        commissione = 76.0 + transazione*0.34/100;
    }
    else
    {
        commissione = 100.0 + transazione*0.22/100;
    }
    if (commissione < 39)
        commissione = 39;
    printf("La commissione corrisponde a una transazione di %.2f euro varrà %.2f euro",
           transazione, commissione);
    return 0;
}
