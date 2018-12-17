#include <stdio.h>
#include <stdlib.h>

int calcola_secondi(int h, int m, int s)
{
    int totale = 0;
    totale += h*3600;
    totale += m*60;
    totale += s;
    return totale;
}

int main()
{
    printf("%d\n", calcola_secondi(14,22,37) - calcola_secondi(8,45,32));
    return 0;
}
