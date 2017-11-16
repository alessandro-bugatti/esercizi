#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringhe[3][30];
    int i;
    printf("Inserisci una parola: ");
    fgets(stringhe[0], 30, stdin);
    strncpy(stringhe[1], "altra parola",29);
    strncpy(stringhe[2], stringhe[0],29);
    strncat(stringhe[2], stringhe[1],12);
    for (i = 0; i < 3; i++)
        printf("stringhe[%d]: %s\n", i, stringhe[i]);
    return 0;
}
