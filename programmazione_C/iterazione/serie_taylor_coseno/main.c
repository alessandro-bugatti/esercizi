#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, coseno = 0, potenza = 1;
    double fattoriale = 1;
    int i, N, segno = 1;
    printf("Inserisci il valore dell'angolo (in radianti) e il numero di elementi: ");
    scanf("%lf", &x);
    //Il valore di N non deve essere troppo alto altrimenti
    //il fattoriale non assume un valore valido
    scanf("%d", &N);
    for (i = 0; i < 2*N; i = i + 2)
    {
        coseno = coseno + segno/fattoriale*potenza;
        segno = -segno;
        fattoriale = fattoriale * (i+1) * (i+2);
        potenza = potenza * x * x;
    }
    printf("Coseno = %.10lf", coseno);
    return 0;
}
