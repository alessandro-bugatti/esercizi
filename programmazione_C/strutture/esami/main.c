#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTI 100

typedef struct{
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct {
    char nome[100];
    Data data_registrazione;
    int voto;
} Esame;

typedef struct{
    char matricola[20];
    char nome[50];
    char cognome[50];
    Esame esami[100];
    int esami_sostenuti;
} Studente;

void menu()
{
    printf("\n 1) Aggiungi uno studente");
    printf("\n 2) Aggiungi un esame a uno studente");
    printf("\n 3) Stampa esami di uno studente");
    printf("\n 4) Studente che hanno effettuato un esame (da implementare");
    printf("\n 5) Stampa studenti in ordine di cognome");
    printf("\n 0) Esci");
}

int ricerca(Studente studenti[], int quanti)
{
    char matricola[20];
    printf("Inserisci la matricola dello studente: ");
    scanf("%s", matricola);
    int i;
    for (i = 0; i < quanti; i++)
        if (strncmp(matricola, studenti[i].matricola,20) == 0)
            return i;
    return -1;
}

void aggiungi_studente(Studente studenti[], int quanti)
{
    printf("Inserisci la matricola: ");
    scanf("%s", studenti[quanti].matricola);
    printf("Inserisci la nome: ");
    scanf("%s", studenti[quanti].nome);
    printf("Inserisci la cognome: ");
    scanf("%s", studenti[quanti].cognome);
    studenti[quanti].esami_sostenuti = 0;
}

void aggiungi_esame(Studente studenti[], int quale)
{
    Esame e;
    printf("Inserisci il nome dell'esame: ");
    scanf("%s", e.nome);
    printf("Inserisci il giorno: ");
    scanf("%d", &e.data_registrazione.giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &e.data_registrazione.mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &e.data_registrazione.anno);
    printf("Inserisci il voto: ");
    scanf("%d", &e.voto);
    int posizione_esame = studenti[quale].esami_sostenuti;
    studenti[quale].esami[posizione_esame] = e;
    studenti[quale].esami_sostenuti++;
}

void stampa_esame(Esame e)
{
    printf("\n\t%s (%d/%d/%d): %d",e.nome, e.data_registrazione.giorno,
           e.data_registrazione.mese, e.data_registrazione.anno, e.voto);
}

void stampa_studente(Studente s)
{
    printf("\nMatricola: %s", s.matricola);
    printf("\nNome: %s", s.nome);
    printf("\nCognome: %s", s.cognome);
    printf("\nNumero esami sostenuti: %d", s.esami_sostenuti);
    printf("\nEsami sostenuti");
    int j;
    for (j = 0; j < s.esami_sostenuti ; j++)
        stampa_esame(s.esami[j]);
}

void stampa_elenco(Studente studenti[], int quanti)
{
    printf("\nStampa elenco");
    int i;
    for (i = 0; i < quanti; i++)
        stampa_studente(studenti[i]);
}

void ordina_cognome(Studente studenti[], int quanti)
{
    int i, j;
    for (i=0; i < quanti - 1; i++)
        for (j = quanti - 1; j>i; j--)
            if ( strncmp(studenti[j-1].cognome, studenti[j].cognome, 50) > 0)
            {
                Studente t=studenti[j];
                studenti[j]=studenti[j-1];
                studenti[j-1]=t;
            }

}

int main()
{
    int scelta;
    Studente studenti[MAX_STUDENTI];
    Studente temp = {
        "12345",
        "Arturo",
        "Rastolfi",
        {
            {
                "Algebra",
                {
                    12,12,2017
                },
                28
            },
            {
                "Informatica",
                {
                    04,12,2017
                },
                30
            }
        },
        2
    };
    studenti[0] = temp;
    Studente temp2 = {
        "12346",
        "Ada",
        "Prestini",
        {
            {
                "Analisi",
                {
                    21,12,2017
                },
                30
            },
        },
        1
    };
    studenti[1] = temp2;
    int numero_studenti = 2;
    menu();
    printf("\nScegli cosa fare: ");
    scanf("%d", &scelta);
    int posizione_studente;
    while (scelta != 0){
        switch(scelta){
            case 1:
                aggiungi_studente(studenti, numero_studenti);
                numero_studenti++;
                stampa_elenco(studenti, numero_studenti);
            break;
            case 2:

                posizione_studente = ricerca(studenti, numero_studenti);
                if (posizione_studente == -1)
                    printf("Studente non trovato\n");
                else
                {
                    aggiungi_esame(studenti,posizione_studente);
                    stampa_elenco(studenti, numero_studenti);
                }
            break;
            case 3:
                posizione_studente = ricerca(studenti, numero_studenti);
                if (posizione_studente == -1)
                    printf("Studente non trovato\n");
                else
                {
                    stampa_studente(studenti[posizione_studente]);
                }
            break;
            case 4: //da implementare
                break;
            case 5:
                ordina_cognome(studenti, numero_studenti);
                stampa_elenco(studenti, numero_studenti);
            default:
                printf("\La tua scelta non è valida");

        }

        menu();
        printf("\nScegli cosa fare: ");
        scanf("%d", &scelta);
    }
    return 0;
}
