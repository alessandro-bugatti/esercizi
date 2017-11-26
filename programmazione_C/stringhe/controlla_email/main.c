#include <stdio.h>
#include <stdlib.h>

int chiocciola(char s[])
{
    int i, conta = 0;
    for ( i= 0; s[i] != '\0'; i++)
        if (s[i] == '@')
            conta++;
    return conta;
}

int controlla_prima_parte(char s[])
{
    if (s[0]>='a' && s[0]<='z'
        || s[0]>='A' && s[0]<='Z')
        return 1;
    return 0;
}

int solo_alfabetici(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (!isalpha(s[i]))
            return 0;
    return 1;
}

int controlla_seconda_parte(char s[])
{
    int i, pos_chiocciola, quanti_punti = 0;
    //Trova la posizione della chiocciola
    for (i = 0; s[i] != '@'; i++);
    pos_chiocciola = i;
    for (; s[i] != '\0'; i++)
        if (s[i] == '.')
            quanti_punti++;
    if (quanti_punti != 1)
        return 0;
    if (s[pos_chiocciola + 1] == '.')
        return 0;
    if (s[i-3] != '.' && s[i-4] != '.')
        return 0;
    if (s[i-4] == '.' && solo_alfabetici(&s[i-3]))
        return 1;
    if (s[i-3] == '.' && solo_alfabetici(&s[i-2]))
        return 1;
    return 0;
}

int controlla_mail(char elenco[][100], int n)
{
    int i, conta = 0;
    for (i = 0; i < n; i++)
        if(chiocciola(elenco[i]) == 1 && controlla_prima_parte(elenco[i]) == 1 && controlla_seconda_parte(elenco[i]))
            conta++;
    return conta;
}



int main()
{
    char c[][100] = {"ale@gmail.com","al@gli.ut","ioio@@io@i"};
    printf("Indirizzi validi: %d\n", controlla_mail(c,3));
    return 0;
}
