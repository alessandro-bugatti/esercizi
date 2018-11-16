#include <stdio.h>
#include <stdlib.h>

char simboli(int n)
{
    //Prima soluzione, più standard
    /*if (n == 0)
        return ' ';
    if (n == 1)
        return 'O';
    if (n == 2)
        return 'X';*/
    //Seconda soluzione, più compatta
    char s[] ={' ','o','x'};
    return s[n];
}

int mossa_valida(int x, int y, int tris[][3], int n)
{
    if (x < 0 || x > 2)
        return 0;
    if (y < 0 || y > 2)
        return 0;
    if (tris[x][y] == 0)
        return 1;
    return 0;
}

void stampa_griglia(int tris[][3], int n)
{
    int i, j;
    for (i = 0; i < n; i++){
        printf(" %c ", simboli(tris[i][0]));
        for (j = 1; j < 3; j++)
            printf("| %c ", simboli(tris[i][j]));
        if (i < n - 1)
            printf("\n-----------\n");

    }
}

int controlla_stato(int tris[][3], int n)
{
    int i, j;
    //Controllo delle righe
    for (i = 0; i < 3; i++)
        if (tris[i][0] == tris[i][1] &&
            tris[i][1] == tris[i][2] &&
            tris[i][0] != 0)
            return tris[i][0];
    //Controllo delle colonne
    for (i = 0; i < 3; i++)
        if (tris[0][i] == tris[1][i] &&
            tris[1][i] == tris[2][i] &&
            tris[0][i] != 0)
            return tris[0][i];
    //Prima diagonale
    if (tris[0][0] == tris[1][1] &&
            tris[1][1] == tris[2][2] &&
            tris[0][0] != 0)
            return tris[0][0];
    //Seconda diagonale
    if (tris[0][2] == tris[1][1] &&
            tris[1][1] == tris[2][0] &&
            tris[0][2] != 0)
            return tris[0][2];
    int conta = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (tris[i][j] == 0)
                conta++; // return 0;
    if (conta != 0)
        return 0;
    return 3;
}

//Prima soluzione, con passaggio per valore
/*int cambia_turno(int giocatore)
{
    if (giocatore == 1)
        return 2;
    return 1;
}*/

//Seconda soluzione, con passaggio per indirizzo
void cambia_turno(int *giocatore)
{
    if (*giocatore == 1)
        *giocatore = 2;
    else
        *giocatore = 1;
}
int main()
{
    int tris[][3] =
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    int giocatore = 1;
    int stato;
    stato = controlla_stato(tris, 3);
    printf("Gioco del tris\n");
    while (stato == 0)
    {
        int r, c;
        stampa_griglia(tris, 3);
        printf("\nGiocatore %d fai la tua mossa\n", giocatore);
        printf("Inserisci il numero di riga: ");
        scanf("%d", &r);
        printf("Inserisci il numero di colonna: ");
        scanf("%d", &c);
        while (!mossa_valida(r-1,c-1,tris,3))
        {
            printf("La tua mossa non è valida, riprova\n");
            printf("Inserisci il numero di riga: ");
            scanf("%d", &r);
            printf("Inserisci il numero di colonna: ");
            scanf("%d", &c);
        }
        tris[r-1][c-1] = giocatore;
        //giocatore = cambia_turno(giocatore);
        cambia_turno(&giocatore);
        stato = controlla_stato(tris, 3);
    }
    stampa_griglia(tris, 3);
    if (stato == 3)
        printf("\nPartita pareggiata\n");
    else
        printf("\nHa vinto il giocatore %d", stato);

    return 0;
}
