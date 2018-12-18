#include <stdio.h>
#include <stdlib.h>

void stampa_quadrato(int N, char c)
{
    int i, j;
    //Stampa della prima riga
    for (i = 0; i < N; i++)
        printf("%c", c);
    printf("\n");
    //Stampa della parte centrale
    for (i = 0; i < N - 2; i++)
    {
        printf("%c", c);
        for (j = 0; j < N - 2; j++)
            printf(" ");
        printf("%c", c);
        printf("\n");
    }
    //Stampa dell'ultima riga
    for (i = 0; i < N; i++)
        printf("%c", c);
    printf("\n");
}

int main()
{
    int N;
    char c;
    printf("Inserisci il lato del quadrato (>=2) e la lettera per il contorno: ");
    scanf("%d", &N);
    scanf("\n%c", &c);//Il \n serve a evitare la lettura del \n della precedente scanf
    stampa_quadrato(N,c);
    return 0;
}
