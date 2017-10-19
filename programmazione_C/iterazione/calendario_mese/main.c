#include <stdio.h>
#include <stdlib.h>



int main()
{
    int mese, giorni_del_mese, giorno_iniziale;
    int i;
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    if (mese == 2)
        giorni_del_mese = 28;
    else if (mese == 11 || mese == 4 || mese == 6 ||
             mese == 9)
        giorni_del_mese = 30;
    else
        giorni_del_mese = 31;
    printf("Inserisci il giorno iniziale: ");
    scanf("%d", &giorno_iniziale);
    for (i = 0; i < giorno_iniziale - 1; i++)
        printf("    ");
    for(i = 1; i <= giorni_del_mese; i++)
    {
        printf("%4d",i);
        if ((i + giorno_iniziale - 1) % 7 == 0)
            printf("\n");
    }
    return 0;
}
