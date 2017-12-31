#include <stdio.h>
#include <stdlib.h>

int dado()
{
    int n;
    n = rand()%6 + 1;
    return n;
}

int due_dadi()
{
    return dado() + dado();
}

#define LANCI 100000

int main()
{
    int istogramma_uno[20] = {0}, istogramma_due[20] = {0}, i;
    srand(time(NULL));
    printf("Distribuzione nel lancio di un dado\n");
    for (i = 0; i < LANCI; i++)
        istogramma_uno[dado()]++;
    for (i = 1; i <= 6; i++)
        printf("%d: %d volte (%f%%)\n", i, istogramma_uno[i],
               (float)istogramma_uno[i]/LANCI*100);
    printf("Distribuzione nel lancio di due dadi\n");
    for (i = 0; i < LANCI; i++)
        istogramma_due[due_dadi()]++;
    for (i = 2; i <= 12; i++)
        printf("%d: %d volte (%f%%)\n", i, istogramma_due[i],
               (float)istogramma_due[i]/LANCI*100);

    return 0;
}
