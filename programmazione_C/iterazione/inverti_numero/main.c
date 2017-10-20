#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, N_inverso = 0;
    printf("Inserisci N:");
    scanf("%d", &N);
    //Viene risolto in due modi, sia stampandoli al "volo"
    //sia creando una variabile che conterrà il risultato
    while (N>0)
    {
        if (N%10 != 0)
            printf("%d", N%10);
        N_inverso = N_inverso*10 + N%10;
        N = N/10;
    }
    printf("\n%d", N_inverso);
    return 0;
}
