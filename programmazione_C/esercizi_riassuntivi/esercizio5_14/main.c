#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genera(int start, int intervallo, int quanti)
{
    return start + intervallo*(rand()%quanti);
}

int main()
{
    int i;
    srand(time(NULL));
    //Vengono generati 40 numeri appartenenti
    //alla funzione per verificarne la correttezza
    printf("Insieme a)\n");
    for (i = 0; i < 40; i++)
        printf("%d ", genera(2,2,5));
    printf("\n");
    printf("Insieme b)\n");
    for (i = 0; i < 40; i++)
        printf("%d ", genera(3,2,5));
    printf("\n");
    printf("Insieme c)\n");
    for (i = 0; i < 40; i++)
        printf("%d ", genera(6,4,5));
    printf("\n");

    return 0;
}
