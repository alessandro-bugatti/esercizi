#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char s[])
{
    int spazi = 0, i;
    while(s[spazi] == ' ') spazi++;
    for (i = spazi; s[i] != '\0'; i++)
        s[i - spazi] = s[i];
    s[i - spazi] = '\0';
    int posizione_finale = strlen(s) - 1;
    while(s[posizione_finale] == ' ')
            posizione_finale--;
    s[posizione_finale + 1] = '\0';
}

int main()
{
    char s[] = "   ciao a tutti  ";
    trim(s);
    printf("%s|\n", s);
    return 0;
}
