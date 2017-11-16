#include <stdio.h>
#include <stdlib.h>

//Dichiarazione delle funzioni
double media(double v[], int n);
double media_intervallo(double v[], int a, int b);

int main()
{
    double vettore[] = {2,3, 5, 23,14,12};
    double vettore2[] = {22,33,45, 23,14};
    printf("Media = %lf\n", media(vettore, 7));
    printf("Media 2 = %lf\n", media_intervallo(vettore2, 1, 4));
    return 0;
}

//Definizione delle funzioni
double media_intervallo(double v[], int a, int b)
{
    int i;
    double m = 0;
    for (i = a; i < b; i++)
        m += v[i];
    m /= (b-a);
    return m;
}

double media(double v[], int n)
{
    return media_intervallo(v, 0, n);
}
