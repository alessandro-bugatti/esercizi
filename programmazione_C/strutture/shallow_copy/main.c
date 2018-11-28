#include <stdio.h>
#include <stdlib.h>

#define DIM 4

typedef struct{
    int campo[DIM][DIM];
} Scacchiera;

typedef struct{
    char nome[10];
    int g1, g2;
    Scacchiera *scacchiera;
} Partita;

void azzera(Scacchiera *s)
{
    int i, j;
    for(i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            s->campo[i][j] = 0;
    }
}

void stampa_partita(Partita p)
{
    int i, j;
    printf("Partita %s\n", p.nome);
    printf("Punteggio %d - %d\n", p.g1, p.g2);
    printf("Stato della scacchiera\n");
    for(i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf("%2d", p.scacchiera->campo[i][j]);
        printf("\n");
    }
}

int main()
{
    Partita uno, due;
    Scacchiera s;
    azzera(&s);
    s.campo[2][3] = 1;
    s.campo[1][1] = 2;
    strncpy(uno.nome, "Uno", 10);
    uno.g1 = 5;
    uno.g2 = 7;
    uno.scacchiera = &s;
    printf("Stato della partita uno\n");
    stampa_partita(uno);
    due = uno;
    printf("Stato della partita due copiata da uno\n");
    stampa_partita(due);
    strncpy(due.nome, "Due", 10);
    printf("Stato della partita due dopo il cambio di nome\n");
    stampa_partita(due);
    //Modifica della partita due
    due.g1 = 12;
    due.g2 = 3;
    due.scacchiera->campo[0][0] = 1;
    due.scacchiera->campo[3][1] = 2;
    printf("Stato della partita due modificata\n");
    stampa_partita(due);
    printf("Stato della partita uno che risulta anch'essa modificata\n");
    stampa_partita(uno);
    return 0;
}
