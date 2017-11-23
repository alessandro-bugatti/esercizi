#include <stdio.h>
#include <stdlib.h>

void codifica_xor(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = s[i] ^ 0xAA;
}
int main()
{
    char s[] = "ciao mondo";
    printf("Originale: %s\n", s);
    codifica_xor(s);
    printf("Cifrata: %s\n", s);
    codifica_xor(s);
    printf("Cifrata due volte: %s\n", s);
    return 0;
}
