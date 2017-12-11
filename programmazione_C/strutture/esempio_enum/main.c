#include <stdio.h>
#include <stdlib.h>

typedef enum{
    ORDINARIO,
    ASSOCIATO,
    RICERCATORE
} Tipo;

typedef struct{
    char nome[50];
    char cognome[50];
    Tipo tipo;
} Professore;

int main()
{
    Professore p1 = {
        "Pietro",
        "Baroni",
        ORDINARIO};
    Professore p2 = {
        "Alessandro",
        "Saetti",
        ASSOCIATO};
    if (p1.tipo == ORDINARIO)
        printf("Il prof. %s %s è un professore ordinario\n",
               p1.cognome, p1.nome);
    if (p2.tipo == ASSOCIATO)
        printf("Il prof. %s %s è un professore associato\n",
               p2.cognome, p2.nome);
    printf("Attenzione: il tipo sottostante è comunque un intero"
           " come si può vedere da questa stampa: %d %d\n",
           p1.tipo, p2.tipo);
    return 0;
}

