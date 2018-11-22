#include <stdio.h>
#include <stdlib.h>

void cifratura_cesare(char chiaro[], char cifrato[], int n)
{
    n = n % 26;
    int i;
    for (i = 0; chiaro[i] != '\0'; i++)
        cifrato[i] = (chiaro[i] - 'a' + n)%26+ 'a';
    cifrato[i] = '\0';
}

void decifratura_cesare(char cifrato[], char chiaro[], int n)
{
    n = n % 26;
    int i;
    for (i = 0; cifrato[i] != '\0'; i++)
        chiaro[i] = (cifrato[i] - 'a' + 26 - n)%26 + 'a';
    chiaro[i] = '\0';
}

int main()
{
    char chiaro[]="attaccoallazonanemica";
    char cifrato[100];
    char decifrato[100];
    printf("Codifica\n");
    cifratura_cesare(chiaro, cifrato, 3);
    printf("Chiaro: %s\n", chiaro);
    printf("Cifrato: %s\n", cifrato);

    int i;
    printf("\n--------------\n\nDecodifica a forza bruta provando tutte le chiavi\n");
    for (i = 0; i < 26; i++){
        decifratura_cesare(cifrato, decifrato, i);
        printf("Chiave %d\n", i);
        printf("Cifrato: %s\n", cifrato);
        printf("Decifrato: %s\n", decifrato);
    }
    return 0;
}
