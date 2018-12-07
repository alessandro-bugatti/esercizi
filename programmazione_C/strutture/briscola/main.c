#include <stdio.h>
#include <stdlib.h>

//Numero di carte presenti in un mazzo da briscola
#define CARTE_BRISCOLA 40

//Nomi dei semi
typedef enum{
    SPADE,
    BASTONI,
    DENARI,
    COPPE
} Seme;

//Singola carta da briscola
typedef struct{
    Seme seme; //SPADE, ...
    int numero; // Il numero che compare sulla carta, per le
        //carte vestite è 8->fante, 9->cavallo, 10->re
    int valore; //Valore nel gioco, poichè asso e tre
        //valgono in maniera diversa dal prioprio numero
    int punteggio; //Punteggio nel computo dei punti di una partita
} Carta;

//Mazzo di carte da briscola
typedef struct{
    Carta carte[CARTE_BRISCOLA];
    int testa; //Posizione corrente della carta da pescare
} Mazzo;

//Mano di carte
typedef struct{
    Carta carte[3];
    int quante;
} Mano;

//Inizializza un mazzo da 40 carte da briscola
void inizializza_mazzo(Mazzo *mazzo)
{
    int i, j;
    /*In questo ciclo vengono inizilizzate le 40 carte
    valore e punteggio dovranno poi essere modificati
    per le carte vestite e per asso e tre, che non seguono
    una regola uguale alle altre*/
    for (i = 0; i < 4; i++) //semi
        for (j = 0; j < 10; j++) //numeri
        {
            int posizione = i*10 + j;
            mazzo->carte[posizione].seme = i;
            mazzo->carte[posizione].numero = j + 1;
            mazzo->carte[posizione].valore = j + 1;
            mazzo->carte[posizione].punteggio = 0;
        }
    //Modifica il valore degli assi e dei tre in modo
    //che asso abbia il valore maggiore e il tre il secondo
    for (i = 0; i < 4; i++) //semi
    {
        mazzo->carte[i*10].valore = 12; //assi
        mazzo->carte[i*10+2].valore = 11; //tre
    }
    //Modifica il punteggio per vestite, assi e tre
    for (i = 0; i < 4; i++) //semi
    {
        mazzo->carte[i*10].punteggio = 11; //assi
        mazzo->carte[i*10+2].punteggio = 10; //tre
        mazzo->carte[i*10+9].punteggio = 4; //re
        mazzo->carte[i*10+8].punteggio = 3; //cavallo
        mazzo->carte[i*10+7].punteggio = 2; //fante
    }
    //Indica che la prima carta del vettore
    //è quella da pescare
    mazzo->testa = 0;
}

void mescola_mazzo(Mazzo *mazzo)
{
    int i;
    //Procedimento standard: scambio coppie in posizioni
    //casuali un 'buon' numero di volte
    for (i = 0; i < 1000; i++)
    {
        Carta temp;
        int a = rand()%CARTE_BRISCOLA;
        int b = rand()%CARTE_BRISCOLA;
        temp = mazzo->carte[a];
        mazzo->carte[a] = mazzo->carte[b];
        mazzo->carte[b] = temp;
    }
}


void stampa_carta(Carta carta)
{
    //Numero
    if (carta.numero < 8)
        printf("%d", carta.numero);
    else if (carta.numero == 8)
        printf("F");
    else if (carta.numero == 9)
        printf("C");
    else if (carta.numero == 10)
        printf("R");
    //Seme
    if (carta.seme == SPADE)
        printf("\u2660");
    if (carta.seme == DENARI)
        printf("\u2665");
    if (carta.seme == BASTONI)
        printf("\u2666");
    if (carta.seme == COPPE)
        printf("\u2663");
}

//Funzione per il debug
void stampa_mazzo(Mazzo *mazzo)
{
    int i;
    for (i = 0; i < CARTE_BRISCOLA; i++)
    {
        stampa_carta(mazzo->carte[i]);
        printf(" ");
        if ((i+1)%10 == 0)
            printf("\n");
    }
}

//Funzione per il gioco
void stampa_mano(Mano *mano)
{
    int i;
    for (i = 0; i < mano->quante; i++)
    {
        stampa_carta(mano->carte[i]);
        printf("   ");
    }
    printf("\n");
    for (i = 0; i < mano->quante; i++)
        printf("(%d)  ", i+1);
    printf("\n");
}

//Serve per estrarre la successiva carta del mazzo
Carta dai_carta(Mazzo *mazzo)
{
    Carta estratta = mazzo->carte[mazzo->testa];
    mazzo->testa++;
    return estratta;
}

//Serve per permettere a un giocatore di tirare
//una carta della propria mano
Carta tira_carta(Mano *mano, int n)
{
    int i;
    Carta c = mano->carte[n];
    //Compatta le carte rimaste all'inizio del vettore
    for (i = n; i < mano->quante - 1; i++)
        mano->carte[i] = mano->carte[i+1];
    mano->quante--;
    return c;
}

//Inserisce una carta in una mano
void pesca_carta(Mano *mano, Carta carta)
{
    mano->carte[mano->quante] = carta;
    mano->quante++;
}

//Serve ad aggiungere una carta nel mazzetto di un giocatore
void raccogli_carta(Carta carta, Mazzo *mazzo)
{
    mazzo->carte[mazzo->testa] = carta;
    mazzo->testa++;
}

//Serve a far tirare il computer
int scelta_AI(Mano *mano, Carta briscola, int turno, Carta giocata)
{
    //Da ideare
    return rand()%mano->quante + 1;
}

//Verifica chi vince delle due carte tirate
int vince(Carta prima, Carta seconda, Seme briscola)
{
    if (prima.seme == briscola && seconda.seme != briscola)
        return 1;
    if (prima.seme != briscola && seconda.seme == briscola)
        return 2;
    if (prima.seme == seconda.seme)
    {
        if (prima.valore > seconda.valore)
            return 1;
        else
            return 2;
    }
    return 1;
}

//Qui la testa del mazzo è usata per sapere quante carte
//contiene, poichè si calcola il punteggio di un mazzetto
int calcola_punteggio(Mazzo *mazzo)
{
    int i, punti = 0;
    for (i = 0; i < mazzo->testa; i++)
        punti += mazzo->carte[i].punteggio;
    return punti;
}

int main()
{
    Carta briscola;
    Mazzo mazzo;
    Mano giocatore1; //Umano
    Mano giocatore2; //Computer
    Mazzo mazzetto1; //Mazzetto delle carte raccolte dall'umano
    Mazzo mazzetto2; //Mazzetto delle carte raccolte dal computer
    int i, turno = 1, scelta_umano, scelta_computer;
    mazzetto1.testa = 0;
    mazzetto2.testa = 0;
    int numero_mani = 0;
    inizializza_mazzo(&mazzo);
    mescola_mazzo(&mazzo);
    //Sceglie la carta di briscola come ultima del mazzo
    briscola = mazzo.carte[CARTE_BRISCOLA - 1];
    //Distribuisce la prima mano
    for (i = 0; i < 3; i++)
    {
        giocatore1.carte[i] = dai_carta(&mazzo);
        giocatore2.carte[i] = dai_carta(&mazzo);
    }
    giocatore1.quante = 3;
    giocatore2.quante = 3;
    printf("GIOCO DELLA BRISCOLA\n");
    while(numero_mani < 20)
    {
        numero_mani++;
        printf("\n<---------Mano numero %d---------->\n", numero_mani);
        printf("Carta di briscola: ");
        stampa_carta(briscola);
        if (turno == 1)
        {
            Carta c1, c2;
            printf("\nLe tue carte:\n");
            stampa_mano(&giocatore1);
            printf("\nScegli la carta da tirare: ");
            scanf("%d", &scelta_umano);
            c1 = tira_carta(&giocatore1, scelta_umano - 1);
            scelta_computer = scelta_AI(&giocatore2, briscola, 2, c1);
            c2 = tira_carta(&giocatore2, scelta_computer - 1);
            printf("L'umano ha tirato: ");
            stampa_carta(c1);
            printf("\nIl computer ha tirato: ");
            stampa_carta(c2);
            if (vince(c1, c2, briscola.seme) == 1)
            {
                printf("\nVince il giocatore umano\n");
                raccogli_carta(c1,&mazzetto1);
                raccogli_carta(c2,&mazzetto1);
                if (numero_mani < 18)
                {
                    pesca_carta(&giocatore1, dai_carta(&mazzo));
                    pesca_carta(&giocatore2, dai_carta(&mazzo));
                }
                turno = 1;
            }
            else
            {
                printf("\nVince il computer\n");
                raccogli_carta(c1,&mazzetto2);
                raccogli_carta(c2,&mazzetto2);
                if (numero_mani < 18)
                {
                    pesca_carta(&giocatore2, dai_carta(&mazzo));
                    pesca_carta(&giocatore1, dai_carta(&mazzo));
                }
                turno = 2;
            }
        }
        else{
            Carta c1, c2;
            scelta_computer = scelta_AI(&giocatore2, briscola, 1, c1);
            c2 = tira_carta(&giocatore2, scelta_computer - 1);
            printf("\nIl computer ha tirato: ");
            stampa_carta(c2);
            printf("\nLe tue carte:\n");
            stampa_mano(&giocatore1);
            printf("\nScegli la carta da tirare: ");
            scanf("%d", &scelta_umano);
            c1 = tira_carta(&giocatore1, scelta_umano - 1);
            printf("L'umano ha tirato: ");
            stampa_carta(c1);
            if (vince(c2, c1, briscola.seme) == 1)
            {
                printf("\nVince il computer\n");
                raccogli_carta(c1,&mazzetto2);
                raccogli_carta(c2,&mazzetto2);
                if (numero_mani < 18)
                {
                    pesca_carta(&giocatore2, dai_carta(&mazzo));
                    pesca_carta(&giocatore1, dai_carta(&mazzo));
                }
                turno = 2;
            }
            else
            {
                printf("\nVince il giocatore umano\n");
                raccogli_carta(c1,&mazzetto1);
                raccogli_carta(c2,&mazzetto1);
                if (numero_mani < 18)
                {
                    pesca_carta(&giocatore1, dai_carta(&mazzo));
                    pesca_carta(&giocatore2, dai_carta(&mazzo));
                }
                turno = 1;
            }
        }
    }
    printf("\n<----------Partita terminata----------->\n");
    printf("Punteggio umano: %d\n", calcola_punteggio(&mazzetto1));
    printf("Punteggio computer: %d\n", calcola_punteggio(&mazzetto2));
    return 0;
}
