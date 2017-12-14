#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int giorno;
    int mese;
    int anno;
} Data;

int precede(Data a, Data b)
{
    if (a.anno < b.anno)
        return 1;
    if (a.anno > b.anno)
        return 0;
    if (a.mese < b.mese)
        return 1;
    if (a.mese > b.mese)
        return 0;
    if (a.giorno < b.giorno)
        return 1;
    return 0;
}

int quante_precedono(Data v[], int n, Data a)
{
    int i, cont = 0;
    for (i = 0; i < n; i++)
        if (precede(v[i], a))
            cont++;
    return cont;
}

#define NUM_DATE 10

int main()
{
    Data date[NUM_DATE];
    int i;
    for (i = 0; i < NUM_DATE; i++)
    {
        printf("Inserisci giorno, mese, anno: ");
        scanf("%d", &date[i].giorno);
        scanf("%d", &date[i].mese);
        scanf("%d", &date[i].anno);
    }
    printf("Ci sono %d date precedenti all'ultima inserita\n", quante_precedono(date, NUM_DATE - 1, date[NUM_DATE - 1]));
    return 0;
}
