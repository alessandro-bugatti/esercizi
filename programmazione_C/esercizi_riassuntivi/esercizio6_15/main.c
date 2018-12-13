#include <stdio.h>
#include <stdlib.h>

//Se si vuole attivare la seconda versione
//cambiare con SECONDA_VERSIONE e ricompilare

#define PRIMA_VERSIONE

#ifdef PRIMA_VERSIONE
int presente(int v[], int n, int cercato)
{
    int i;
    for (i = 0; i< n; i++)
        if (v[i] == cercato)
            return 1;
    return 0;
}

int main()
{
    int v[101];
    int i, n, n_elementi = 0;
    printf("Versione che memorizza i numeri letti in un vettore e "
           "per ogni nuovo numero ricerca se è presente in quelli"
           " già inseriti e nel caso lo aggiunge\n");
    for (i = 0; i < 5; i++)
    {
        printf("Inserisci un numero compreso tra 10 e 100: ");
        scanf("%d", &n);
        if (!presente(v, n_elementi, n))
        {
            v[n_elementi] = n;
            n_elementi++;
        }
    }
    printf("Elementi non duplicati:\n");
    for (i = 0; i < n_elementi; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
#endif // PRIMA_VERSIONE

#ifdef SECONDA_VERSIONE

int presente(int v[], int cercato)
{
    return v[cercato];
}

int main()
{
    int v[101] = {0};
    int i, n, n_elementi = 0;
    printf("Versione che utilizza gli indici di un vettore per "
           "memorizzare i numeri già inseriti.\n");
    for (i = 0; i < 5; i++)
    {
        printf("Inserisci un numero compreso tra 10 e 100: ");
        scanf("%d", &n);
        if (!presente(v, n))
            v[n] = 1;
    }
    printf("Elementi non duplicati:\n");
    for (i = 10; i <= 100; i++)
        if (v[i] == 1)
            printf("%d ", i );
    printf("\n");
    return 0;
}

#endif // SECONDA_VERSIONE
