#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh, mm;
    printf("Inserisci le ore: ");
    scanf("%d", &hh);
    printf("Inserisci i minuti: ");
    scanf("%d", &mm);
    if (hh >= 12)
        if (hh == 12)
            printf("12:%2d PM\n", mm);
        else
            printf("%2d:%2d PM\n", hh%12, mm);
    else
        if (hh == 0)
            printf("12:%2d AM\n", mm);
        else
            printf("%2d:%2d AM\n", hh, mm);

    return 0;
}
