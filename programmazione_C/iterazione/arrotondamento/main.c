#include <stdio.h>
#include <stdlib.h>

#define MAX 10000000

int main()
{
    int i;
    int addendo_i = 7, totale_i = 0;
    float addendo_f = 7.0, totale_f = 0.0;
    for (i = 0; i < MAX; i++)
    {
        totale_i += addendo_i;
        totale_f += addendo_f;
    }
    printf("Somma intera: %d\nSomma in virgola mobile: %f\n",
           totale_i, totale_f);
    return 0;
}
