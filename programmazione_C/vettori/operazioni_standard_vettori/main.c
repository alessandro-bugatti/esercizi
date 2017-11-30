#include <stdio.h>
#include <stdlib.h>

#define LUNGHEZZA 10

void inizializza_vettore(int v[], int n)
{
    int i;
    for (i = 0; i < n ; i++)
        v[i] = rand()%100;
}

void stampa(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int ricerca(int v[], int n, int cercato)
{
    int i;
    for (i = 0; i < n; i++)
        if (v[i] == cercato)
            return i;
    return -1;
}

void inserimento_inizio (int v[], int n, int inserito)
{
    int i;
    for (i = n - 1; i > 0; i--)
        v[i] = v[i - 1];
    v[0] = inserito;
}

int inserimento_in_posizione (int v[], int n, int inserito, int pos)
{
    if (pos < 0 || pos >= n)
        return -1;
    int i;
    for (i = n - 1; i > pos; i--)
        v[i] = v[i - 1];
    v[pos] = inserito;
    return pos;
}

int cancellazione_in_posizione (int v[], int n, int pos)
{
    if (pos < 0 || pos >= n)
        return -1;
    int i;
    for (i = pos; i < n - 1; i++)
        v[i] = v[i + 1];
    return n - 1;
}

void bubble_sort( int a[], int l, int r)
{
    int i,j;
    for (i=l; i<r ; i++)
        for (j=r;j>i;j--)
            if (a[j-1]>a[j])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
}

void selection_sort(int a[], int l, int r)
{
    int i,j;
    for (i=l;i<r;i++)
    {
        int min=i;
        for (j=i+1; j<=r; j++)
            if (a[j]<a[min]) min=j;
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
}

int merge(int a[], int b[], int c[],int n)
{
    int i, j, k;
    i = j = k = 0;
    while (i < n && j < n){
        if(a[i]<a[j])
            c[k] = a[i++];
        else
            c[k] = a[j++];
        k++;
    }
    while(i<=n){
        aux[k] = a[i];
        i++;
        k++;
    }
    while(i<=n){
        aux[k] = a[i];
        i++;
        k++;
    }
}



int main()
{
    int v[LUNGHEZZA], v2[LUNGHEZZA], v3[LUNGHEZZA*2];
    int cercato = 118, inserito = 444, posizione = 3, valori_presenti;
    inizializza_vettore(v, LUNGHEZZA);
    v[6] = 118; //per avere una ricerca con successo
    stampa(v, LUNGHEZZA);
    //Ricerca con successo
    printf("Il numero %d si trova in posizione %d\n", cercato,
           ricerca(v, LUNGHEZZA, cercato));
    //Ricerca senza successo
    if (ricerca(v, LUNGHEZZA, -10)) //fallisce perchè non ci sono numeri negativi
        printf("Il numero -10 non è presente nel vettore\n");
    //Inserimento all'inizio
    inserimento_inizio(v, LUNGHEZZA, inserito);
    printf("Vettore dopo l'inserimento all'inizio:\n");
    stampa(v, LUNGHEZZA);
    //Inserimento in posizione
    inserimento_in_posizione(v, LUNGHEZZA, inserito, posizione);
    printf("Vettore dopo l'inserimento di %d in posizione %d:\n", inserito,         posizione);
    stampa(v, LUNGHEZZA);
    //Cancellazione in posizione
    valori_presenti = cancellazione_in_posizione(v, LUNGHEZZA, posizione);
    if ( valori_presenti != -1)
        printf("Vettore dopo la cancellazione in posizione %d:\n", posizione);
    stampa(v, valori_presenti);
    //Bubble sort
    inizializza_vettore(v, LUNGHEZZA);
    printf("Prima dell'ordinamento: ");
    stampa(v, LUNGHEZZA);
    bubble_sort(v, 0, LUNGHEZZA - 1);
    printf("Dopo l'ordinamento: ");
    stampa(v, LUNGHEZZA);
    //Insertion sort
    inizializza_vettore(v, LUNGHEZZA);
    printf("Prima dell'ordinamento: ");
    stampa(v, LUNGHEZZA);
    selection_sort(v, 0, LUNGHEZZA - 1);
    printf("Dopo l'ordinamento: ");
    stampa(v, LUNGHEZZA);
    //Fusione
    inizializza_vettore(v, LUNGHEZZA);
    inizializza_vettore(v2, LUNGHEZZA);
    bubble_sort(v, 0 , LUNGHEZZA - 1);
    bubble_sort(v2, 0 , LUNGHEZZA - 1);
    merge(v, v2, v3, LUNGHEZZA);
    printf("Dopo il merge: ");
    stampa(v3,LUNGHEZZA*2);
    return 0;
}
