#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se si vuole attivare la seconda versione
//cambiare con SECONDA_VERSIONE e ricompilare
#define PRIMA_VERSIONE

#ifdef PRIMA_VERSIONE
int finisce_ed(char s[])
{
    int n = strlen(s);
    if (s[n-1] == 'd' && s[n-2] == 'e')
        return 1;
    return 0;
}

int main()
{
    char stringhe[5][30];
    int i;
    printf("Versione che funziona solo per le stringhe che finiscono"
           " con ed, non è generalizzabile facilmente, se la stringa "
           "finale è lunga diventa 'brutta'.\n");
    for (i = 0; i < 5; i++)
    {
        printf("Inserisci una parola: ");
        scanf("%s", stringhe[i]);
    }
    for (i = 0; i < 5; i++)
        if (finisce_ed(stringhe[i]))
            printf("%s\n", stringhe[i]);

    return 0;
}
#endif // PRIMA_VERSIONE

#ifdef SECONDA_VERSIONE

int finisce(char s[], char c[])
{
    int n = strlen(s);
    int m = strlen(c);
    //Controllo per evitare indici negativi
    if (n-m < 0)
        return 0;
    if (strncmp(&s[n-m], c, m) == 0)
        return 1;
    return 0;
}

int main()
{
    char stringhe[5][30];
    char suffisso[30];
    int i;
    printf("Versione generale, verifica se una certa stringa"
           " finisce con una stringa arbitraria scelta dall'utente.\n");
    printf("Inserisci il suffisso da controllare: ");
    scanf("%s", suffisso);
    for (i = 0; i < 5; i++)
    {
        printf("Inserisci una parola: ");
        scanf("%s", stringhe[i]);
    }
    for (i = 0; i < 5; i++)
        if (finisce(stringhe[i], suffisso))
            printf("%s\n", stringhe[i]);

    return 0;
}
#endif // SECONDA_VERSIONE
