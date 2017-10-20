#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, f_n = 1, f_k = 1, f_n_k = 1, i;
    printf("Inserisci n e k: ");
    scanf("%d", &n);
    scanf("%d", &k);
    //Primo modo
    /*for (i = 1; i<= n; i++)
        f_n = f_n * i;
    for (i = 1; i<= k; i++)
        f_k = f_k * i;
    for (i = 1; i<= n - k; i++)
        f_n_k = f_n_k * i;*/
    //Secondo modo
    int fattoriale = 1;
    for (i = 1; i<= n; i++)
    {
        fattoriale = fattoriale * i;
        if (i == k)
            f_k = fattoriale;
        if (i == n-k)
            f_n_k = fattoriale;
        if (i == n)
            f_n = fattoriale;
    }
    printf("Il coefficiente binomiale vale: %d",
           f_n/(f_k*f_n_k));
    return 0;
}
