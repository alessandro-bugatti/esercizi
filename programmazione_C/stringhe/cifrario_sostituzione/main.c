#include <stdio.h>
#include <stdlib.h>

void cifrario_sostituzione(char chiaro[], char cifrato[], char chiave[])
{
    int i;
    for (i = 0; chiaro[i] != '\0'; i++)
        cifrato[i] = chiave[chiaro[i] - 'a'];
    cifrato[i] = '\0';
}

void decifratura_sostituzione(char cifrato[], char chiaro[],
                              char chiave[])
{
    int i, j;
    for (i = 0; cifrato[i] != '\0'; i++)
    {
        int posizione;
        for (j = 0; j < 26; j++)
            if (cifrato[i] == chiave[j])
                posizione = j;
        chiaro[i] = 'a' + posizione;
    }
    chiaro[i] = '\0';
}
int main()
{
    char chiaro[] = "testoinchiaro";
    char chiave[] = "qwertyuiopasdfghjklzxcvbnm";
    char cifrato[100];
    char decifrato[100];
    int i, j;
    cifrario_sostituzione(chiaro, cifrato, chiave);
    printf("Chiaro %s\n", chiaro);
    printf("Cifrato %s\n", cifrato);
    decifratura_sostituzione(cifrato, decifrato, chiave);
    printf("Cifrato %s\n", cifrato);
    printf("Chiaro %s\n", decifrato);
    return 0;
}
