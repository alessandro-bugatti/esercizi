#include <stdio.h>
#include <stdlib.h>

int quante(char s[], char t[])
{
    int i, j, conta = 0;
    int lunghezza = strlen(t);
    for (i = 0; s[i + lunghezza - 1] != '\0'; i++)
    {
        j = 0;
        while (t[j] != '\0' && s[i + j] == t[j]) j++;
        if (j == lunghezza)
            conta++;
    }
    return conta;
}

int occorrenze(char m[][100], int n, char s[])
{
    int i, conta = 0;
    for(i = 0; i < n; i++)
        conta += quante(m[i], s);
    return conta;
}

int main()
{
    char frasi[][100] ={
        "la mia macchina è verde e va veloce",
        "ieri ho pescato una verdesca",
        "verde come il latte, verde come il sangue"
    };
    printf("%d\n", occorrenze(frasi, 3, "verde"));
    return 0;
}
