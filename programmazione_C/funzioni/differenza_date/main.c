#include <stdio.h>
#include <stdlib.h>

int bisestile(int anno)
{
    if (anno%400 == 0)
        return 1;
    if (anno%100 == 0)
        return 0;
    if (anno%4 == 0)
        return 1;
    return 0;
}

int giorni_anno(int anno)
{
    int giorni = 0, i;
    for (i = 1900; i < anno; i++)
        giorni += 365 + bisestile(i);
    return giorni;
}

int giorni_nel_mese(int mese, int anno)
{
    if (mese == 2)
        return 28 + bisestile(anno);
    if (mese == 11 || mese == 4 || mese == 6 || mese == 9)
        return 30;
    return 31;
}

int giorni_mese(int mese, int anno)
{
    int giorni = 0, i;
    for (i = 1; i < mese; i++)
        giorni += giorni_nel_mese(i,anno);
    return giorni;
}

int differenza_date(int g1, int m1, int a1,
                    int g2, int m2, int a2)
{
    int giorni1, giorni2;
    giorni1 = giorni_anno(a1) + giorni_mese(m1,a1) + g1;
    giorni2 = giorni_anno(a2) + giorni_mese(m2,a2) + g2;
    return giorni1 - giorni2;
}

int main()
{
    //Solo 3 esempi per verificare la correttezza della funzione
    printf("%d\n", differenza_date(31,10,2017,16,6,2010)); //2694
    printf("%d\n", differenza_date(31,10,2017,16,6,2017)); //137
    printf("%d\n", differenza_date(31,10,2017,1,1,1900));  //43037
    return 0;
}
