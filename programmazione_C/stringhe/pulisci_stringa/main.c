#include <stdio.h>
#include <stdlib.h>

void pulisci_stringa(char s[])
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[j] = s[i];
            j++;
        }

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[j] = tolower(s[i]); //s[i] -'A' + 'a'
            j++;
        }
    }
    s[j] = '\0';
}

int main()
{
    char s[] = "Ciao! A tutti 9";
    pulisci_stringa(s);
    printf("%s\n", s);
    return 0;
}
