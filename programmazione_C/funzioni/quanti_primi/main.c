#include <stdio.h>
#include <stdlib.h>

int primo (int N)
{
    int i;
    for (i=2; i <= sqrt(N);i++)
        if (N%i == 0)
            return 0;
    return 1;
}

int quanti_primi (int a, int b)
{
    int i, contatore = 0;
    for (i = a; i < b; i++)
        if (primo(i))
            contatore++;
    return contatore;
}


int main()
{
    //Esempio per vedere quanti numeri primi sono compresi tra 2 e 100
    printf("%d", quanti_primi(2, 101));
    return 0;
}
