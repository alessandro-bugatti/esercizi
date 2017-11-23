#include <stdio.h>
#include <stdlib.h>

int is_hex(char s[])
{
    if (strlen(s) < 3 || strlen(s) > 10)
        return 0;
    if (s[0] != '0')
        return 0;
    if (!(s[1] == 'x' || s[1] == 'X'))
        return 0;
    int i;
    for (i = 2; s[i] != '\0'; i++)
        if  (!( (s[i] >= '0' && s[i] <= '9') ||
              (s[i] >= 'A' && s[i] <= 'F') ||
               (s[i] >= 'a' && s[i] <= 'f')))
               return 0;
    return 1;
}

int main()
{
    char s1[] = "0xFFFF1111";
    char s2[] = "0xFFGG";
    if (is_hex(s1) == 1)
        printf("%s esadecimale.\n", s1);
    if (is_hex(s2) == 0)
        printf("%s non esadecimale.\n", s2);

    return 0;
}
