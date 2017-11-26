#include <stdio.h>
#include <stdlib.h>

void cifrario_sostituzione(char *s, char *c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = c[s[i] - 'a'];
}

int main()
{
    char c[] = "qwertyuiopasdfghjklzxcvbnm";
    char s[] = "salutiatutti";
    cifrario_sostituzione(s,c);
    printf("%s\n", s);
    return 0;
}
