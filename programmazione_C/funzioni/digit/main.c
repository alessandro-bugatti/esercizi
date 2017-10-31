#include <stdio.h>
#include <stdlib.h>

int n_cifre(int N)
{
    int i = 0;
    while(N>0)
    {
        N = N/10;
        i++;
    }
    return i;
}

int cifra_k(int N, int k)
{
    if (k <= 0 || k > n_cifre(N))
        return -1;
    int i, resto;
    for (i = 0; i < k; i++)
    {
        resto = N % 10;
        N = N/10;
    }
    return resto;
}

int main()
{
    //Esempio per verificare il funzionamento
    int i, N = 34876;
    printf("%d\n", N);
    for (i = 1; i <= n_cifre(N); i++ )
        printf("%d",cifra_k(N, i));
    return 0;
}
