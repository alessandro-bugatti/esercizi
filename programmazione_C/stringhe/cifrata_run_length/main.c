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

void decodifica_RLE(char s[], char d[])
{
    int i = 0, j = 0;
    while(s[i] != '\0')
    {
        if (s[i] >= '2' && s[i] <= '9')
        {
            char c = s[i + 1];
            int n = s[i] - '0';
            for (int k = 0; k < n; k++)
            {
                d[j] = c;
                j++;
            }
            i += 2;
        }
        else
        {
            d[j] = s[i];
            j++;
            i++;
        }
    }
    //Close the string
    d[j] = '\0';
}

int main()
{
    char s1[] = "ffffffffffffffff";
    char s2[] = "gggfffffabuuufff";
    char d1[100];
    char d2[100];
    char c[100];
    codifica_RLE(s1,c);
    printf("%s -> %s\n", s1, c);
    decodifica_RLE(c,d1);
    printf("%s -> %s\n", c, d1);
    codifica_RLE(s2,c);
    printf("%s -> %s\n", s2, c);
    decodifica_RLE(c,d2);
    printf("%s -> %s\n", c, d2);

    return 0;
}
