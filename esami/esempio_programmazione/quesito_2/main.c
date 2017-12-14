#include <stdio.h>
#include <stdlib.h>

int divisori(int n)
{
    int i, cont = 0;
    for (i = 1; i <= n; i++)
        if (n%i == 0)
            cont++;
    return cont;
}

#define NUM 10

int main()
{
    int x, cont = 0, numeri = 0;
    while(numeri < NUM)
    {
        printf("Inserisci un numero naturale: ");
        scanf("%d", &x);
        if (x > 0)
        {
            cont += divisori(x);
            numeri++;
        }
    }
    printf("Il numero totale di divisori è: %d", cont);
    return 0;
}
