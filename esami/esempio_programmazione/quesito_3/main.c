#include <stdio.h>
#include <stdlib.h>

int potenza_2(int exp)
{
    int potenza = 1, i;
    for (i = 0; i < exp; i++)
        potenza = potenza*2;
    return potenza;
}

void potenze_del_due(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", potenza_2(v[i]));
}

#define NUM 5

int main()
{
    int x, v[NUM], i;
    for (i = 0; i < NUM; i++)
    {
        do{
            printf("Inserisci x: ");
            scanf("%d", &x);
        }while(x < 1);
        v[i] = x;
    }
    potenze_del_due(v, NUM);
    return 0;
}
