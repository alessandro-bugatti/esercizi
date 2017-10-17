#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int somma_pari, somma_dispari;
    int flag;
    printf("Verifica della divisibilità per 11 con il criterio di divisibilità\n");
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);
    do{
        somma_pari = 0, somma_dispari = 0;
        flag = 1;
        while (N > 0)
        {
            //Viene estratta la cifra meno significativa
            int temp = N / 10;
            int cifra = N - temp * 10;
            //Viene sommata alternativamente a una somma e all'altra
            if (flag == 1)
            {
                somma_dispari = somma_dispari + cifra;
                flag = 0;
            }
            else
            {
                somma_pari = somma_pari + cifra;
                flag = 1;
            }
            //Viene eliminata l'ultima cifra da N
            N = N / 10;
        }
        //N viene sostituito con la differenza tra le due somme
        //Se non è minore di 11 si reitera il procedimento
        N = abs(somma_dispari - somma_pari);
    }while(N > 10);
    if (N == 0)
        printf("Divisibile");
    else
        printf("Non divisibile");
    return 0;
}
