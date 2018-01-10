#include <stdio.h>
#include <stdlib.h>

int MCD(int a, int b)
{
    while (a % b != 0)
    {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return b;
}


void somma_frazioni(int n1, int d1, int n2, int d2, int *ns, int *ds)
{
    *ns = n1 * d2 + n2 * d1;
    *ds = d1 * d2;
    int massimo_comun_divisore = MCD (*ns, *ds);
    *ns = *ns/massimo_comun_divisore;
    *ds = *ds/massimo_comun_divisore;
}

int main()
{
    int n, d;
    somma_frazioni(2,3,5,6,&n,&d);
    printf("La somma vale %d/%d",n,d);
    return 0;
}
