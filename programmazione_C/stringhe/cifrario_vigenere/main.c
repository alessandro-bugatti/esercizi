#include <stdio.h>
#include <stdlib.h>

//Non strettamente necessaria, ma rende il procedimento
//più simile a quello manuale
void crea_tavola(char m[][26], int n)
{
    char inizio = 'a';
    int i, j;
    for (i = 0; i < n; i++)
    {
        char c = inizio;
        for (j = 0; j < 26; j++)
        {
            m[i][j] = (c - 'a' + j)%26 + 'a';
        }
        inizio++;
    }
}

void cifratura_vigenere(char m[][26], int n, char chiave[],
                        char chiaro[], char cifrato[])
{
    int i;
    int l = strlen(chiave);
    for (i = 0; chiaro[i] != '\0'; i++)
    {
        int posizione_chiave = i%l;
        int riga = chiave[posizione_chiave] - 'a';
        int colonna = chiaro[i] - 'a';
        cifrato[i] = m[riga][colonna];
    }
    cifrato[i] = '\0';
}

int main()
{
    char m[26][26];
    char chiaro[] = "testoinchiaro";
    char chiave[] = "sole";
    char cifrato[100];
    int i, j;
    crea_tavola(m, 26);
    printf("Tavola di Vigenere\n");
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < 26; j++)
            printf("%c", m[i][j]);
        printf("\n");
    }
    printf("-------------\n");
    cifratura_vigenere(m, 26, chiave, chiaro, cifrato);
    printf("Chiaro: %s\n", chiaro);
    printf("Cifrato: %s\n", cifrato);
    return 0;
}
