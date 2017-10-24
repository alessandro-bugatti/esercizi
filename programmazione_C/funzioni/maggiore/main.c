#include <stdio.h>
#include <stdlib.h>

int maggiore(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int n, m;
    printf("Inserisci due valori interi: ");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Il maggiore vale %d", maggiore(n,m));
    return 0;
}
