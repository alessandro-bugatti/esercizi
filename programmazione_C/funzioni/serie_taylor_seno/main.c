#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Funzione per l'elevamento a potenza intera
double potenza(double base, int esp)
{
    double p = 1;
    int i;
    for (i = 0; i < esp; i++)
        p = p*base;
    return p;
}

//Funzione per il calcolo del fattoriale
int fattoriale(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f = f*i;
    return f;
}

//Funzione per il calcolo del seno di x
//con lo sviluppo in serie di Taylor
//arrestato al termine n-esimo
double sen(double x, int n)
{
    double s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += potenza(-1,i)/fattoriale(2*i+1)*potenza(x,2*i+1);
    return s;
}

int main()
{
    double x;
    int n;
    printf("Inserisci il valore di x (in radianti): ");
    scanf("%lf", &x);
    printf("Inserisci il numero di termini della serie: ");
    scanf("%d", &n);
    printf("Il seno di %lf vale %lf\n",x , sen(x,n));
    return 0;
}
