#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringhe[3][30];
    int i;
    printf("Inserisci una parola: ");
    fgets(stringhe[0], 30, stdin);
    strncpy(stringhe[1], "altra parola",30);
    strncpy(stringhe[2], stringhe[0],30);
    //Questa istruzione elimina il carattere di a capo
    //presente in stringhe[2] a causa della fgets
    stringhe[2][strlen(stringhe[2])- 1] = '\0';
    strncat(stringhe[2], stringhe[1],12);
    for (i = 0; i < 3; i++)
        printf("stringhe[%d]: %s\n", i, stringhe[i]);
    return 0;
}
