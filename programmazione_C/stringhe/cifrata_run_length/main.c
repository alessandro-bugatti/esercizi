#include <stdio.h>
#include <stdlib.h>

void codifica_RLE(char s[], char c[])
{
    int i, j=0;
    for (i = 0 ; s[i] != '\0'; i++)
    {
        int conta = 1;
        while (conta < 9 && s[i] == s[i+1])
        {
            conta++;
            i++;
        }
        if (conta == 1)
        {
            c[j] = s[i];
            j++;
        }
        else
        {
            c[j] = conta + '0';
            j++;
            c[j] = s[i];
            j++;
        }
    }
    c[j] = '\0';
}

int main()
{
    char s1[] = "ffffffffffffffff";
    char s2[] = "111fffff45uuufff";
    char c[100];
    codifica_RLE(s1,c);
    printf("%s -> %s\n", s1, c);
    codifica_RLE(s2,c);
    printf("%s -> %s\n", s2, c);
    return 0;
}
