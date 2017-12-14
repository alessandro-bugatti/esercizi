#include <stdio.h>
#include <stdlib.h>

#define NUM 100

int main()
{
    int x, n, cont = 0, i;
    do{
        printf("Inserisci x: ");
        scanf("%d", &x);
    }while(x < 1 || x > 20);
    for (i = 0; i < NUM; i++)
    {
        n = rand()%20 + 1;
        printf("%d\n", n);
        if (x == n)
            cont++;
    }
    printf("Il valore %d compare %d volte\n", x, cont);
    return 0;
}
