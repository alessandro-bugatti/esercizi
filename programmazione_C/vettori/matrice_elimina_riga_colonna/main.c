#include <stdio.h>
#include <stdlib.h>


int main()
{
    int M[10][10];
    int R, C, i, j;
    int numero_righe = 5, numero_colonne = 5;
    //Inizializzazione con numeri casuali
    for(i = 0; i < numero_righe; i++)
        for(j = 0; j < numero_colonne; j++)
            M[i][j] = rand()%100;
    //Stampa prima dell'eliminazione
    for(i = 0; i < numero_righe; i++)
    {
        for(j = 0; j < numero_colonne; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
    printf("Inserisci il numero di riga e di colonna da eliminare: ");
    scanf("%d %d", &R, &C);
    //Elimina la riga R
    for(i = R; i < numero_righe; i++)
        for(j = 0; j < numero_colonne; j++)
            M[i][j] = M[i+1][j];
    numero_righe--;
    //Elimina la colonna C
    for(i = C; i < numero_colonne; i++)
        for(j = 0; j < numero_righe; j++)
            M[j][i] = M[j][i+1];
    numero_colonne--;
    //Stampa dopo l'eliminazione
    for(i = 0; i < numero_righe; i++)
    {
        for(j = 0; j < numero_colonne; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
    return 0;
}
