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

int controlla_mail(char elenco[][100], int n)
{
    int i, conta = 0;
    for (i = 0; i < n; i++)
        if(chiocciola(elenco[i]) == 1 && controlla_prima_parte(elenco[i]) == 1)
            conta++;
    return conta;
}



int main()
{
    char c[][100] = {"ale@gmail.com","al@ggl.it","ioio@@io@i"};
    printf("Indirizzi validi: %d\n", controlla_mail(c,3));
    return 0;
}
