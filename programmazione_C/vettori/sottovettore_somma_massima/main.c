#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LUNGHEZZA 3000

int max(int a, int b)
{
    return a > b ? a : b;
}

void inizializza_vettore(int v[], int n)
{
    int i;
    for (i = 0; i < n ; i++)
        v[i] = rand()%1000 - 500;
}

int algoritmo_1(int v[], int n)
{
    int massimo = v[0], a, b, k;
    for (a = 0; a < n; a++)
    {
        for (b = a; b < n; b++)
        {
            int somma = 0;
            for (k = a; k <= b; k++)
            {
                somma += v[k];
            }
            massimo = max(massimo,somma);
        }
    }
    return massimo;
}

int algoritmo_2(int v[], int n)
{
    int massimo = v[0], a, b;
    for (a = 0; a < n; a++)
    {
        int somma = 0;
        for (b = a; b < n; b++)
        {
            somma += v[b];
            massimo = max(massimo,somma);
        }
    }
    return massimo;
}

int algoritmo_3(int v[], int n)
{
    int massimo = v[0], somma = 0, k;
    for (k = 0; k < n; k++)
    {
        somma = max(v[k],somma+v[k]);
        massimo = max(massimo,somma);
    }
    return massimo;
}



int main()
{
    int v[LUNGHEZZA], massimo;
    srand(time(NULL));
    inizializza_vettore(v, LUNGHEZZA);
    time_t inizio, fine;
    inizio = clock();
    massimo = algoritmo_1(v, LUNGHEZZA);
    fine = clock();
    printf("L'algoritmo 1 ha prodotto %d e ha impiegato: %f secondi\n",
           massimo, (float)(fine - inizio)/CLOCKS_PER_SEC);

    inizio = clock();
    massimo = algoritmo_2(v, LUNGHEZZA);
    fine = clock();
    printf("L'algoritmo 2 ha prodotto %d e ha impiegato: %f secondi\n",
           massimo, (float)(fine - inizio)/CLOCKS_PER_SEC);

    inizio = clock();
    massimo = algoritmo_3(v, LUNGHEZZA);
    fine = clock();
    printf("L'algoritmo 3 ha prodotto %d e ha impiegato: %f secondi\n",
           massimo, (float)(fine - inizio)/CLOCKS_PER_SEC);
    return 0;
}
