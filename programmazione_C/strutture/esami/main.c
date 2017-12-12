#include <stdio.h>
#include <stdlib.h>

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
    printf("\n 0) Esci");
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
    int posizione_esame = studenti[quale].esami_sostenuti;
    studenti[quale].esami[posizione_esame] = e;
    studenti[quale].esami_sostenuti++;
}

void stampa_elenco(Studente studenti[], int quanti)
{
    printf("\nStampa elenco");
    int i;
    for (i = 0; i < quanti; i++)
    {
        printf("\nMatricola: %s", studenti[i].matricola);
        printf("\nNome: %s", studenti[i].nome);
        printf("\nCognome: %s", studenti[i].cognome);
        printf("\nNumero esami sostenuti: %d", studenti[i].esami_sostenuti);
    }
}

int main()
{
    int scelta;
    Studente studenti[MAX_STUDENTI];
    Studente temp = {
        "12345",
        "Arturo",
        "Astolfi",
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
    printf("\nScegli cosa fare");
    scanf("%d", &scelta);
    while (scelta != 0){
        switch(scelta){
            case 1:aggiungi_studente(studenti, numero_studenti);
                numero_studenti++;
                stampa_elenco(studenti, numero_studenti);
            break;
            case 2:aggiungi_esame(studenti,0);
                stampa_elenco(studenti, numero_studenti);
            break;

            default:
                printf("\La tua scelta non è valida");

        }

        menu();
        printf("\nScegli cosa fare: ");
        scanf("%d", &scelta);
    }
    return 0;
}
