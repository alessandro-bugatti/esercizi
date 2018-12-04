#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "Hello world";
    int i;
    //Idiomatico
    for (i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
    //Non comune, potrebbe essere più lento
    for (i = 0; i < strlen(s); i++)
        printf("%c", s[i]);
    printf("\n");
    //Utilizza i puntatori
    char *c = s;
    while (*c){
        printf("%c", *c);
        c++;
    }
    return 0;
}
