#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 7;

int somma(int a, int e)
{
    int d = a + e;
    printf("%d %d\n", a, e);
    return d;
}

int main()
{
    int b = 6, c = 4;
    c = somma(c , c);//stampa 4 4
    printf("%d %d %d\n", a, b, c);//stampa 5 6 8
    //printf("%d", d); //errore, d non è definita
    return 0;
}
