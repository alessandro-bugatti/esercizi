#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, somma = 0;
    //Versione con il controllo sui numeri prodotti
    //somma solo i pari
    for (i = 2; i <= 30; i++)
        if (i % 2 == 0)
            somma += i;
    printf("La somma dei numeri pari tra 2 e 30 vale: %d\n", somma);
    //Versione in cui vengono prodotti solo numeri pari
    //quindi non serve nessun controllo, più efficiente
    somma = 0;
    for (i = 2; i <= 30; i = i + 2)
        somma += i;
    printf("La somma dei numeri pari tra 2 e 30 vale: %d\n", somma);
    return 0;
}
