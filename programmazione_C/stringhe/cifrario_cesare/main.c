#include <stdio.h>
#include <stdlib.h>

void cifratura_cesare(char s[], char c[], int n)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        c[i] = (s[i] - 'a' + n)%26 + 'a';
    c[i] = '\0';
}

int main()
{
    char s[]="attaccoallazonanemica";
    char c[30];
    cifratura_cesare(s,c,3);
    printf("%s -> %s\n", s, c);
    return 0;
}
