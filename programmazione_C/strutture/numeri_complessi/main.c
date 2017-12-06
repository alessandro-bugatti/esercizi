#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double re;
    double im;
} Complesso;

void stampa( Complesso c)
{
    printf("%.2lf + %.2lfi", c.re, c.im);
}

double modulo(Complesso c)
{
    return sqrt(c.re*c.re + c.im*c.im);
}

Complesso somma(Complesso a, Complesso b)
{
    Complesso c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

Complesso differenza(Complesso a, Complesso b)
{
    b.re = -b.re;
    b.im = -b.im;
    return somma(a,b);
}

int main()
{
   Complesso a, b, c;
   a.re = 1;
   a.im = 1;
   printf("Inserisci la parte reale: ");
   scanf("%lf", &b.re);
   printf("Inserisci la parte immaginaria: ");
   scanf("%lf", &b.im);
   printf("\nIl modulo di ");
   stampa(a);
   printf(" vale %lf", modulo(a));
   printf("\nLa somma vale :");
   stampa(somma(a,b));
   printf("\nLa differenza vale :");
   stampa(differenza(a,b));

   return 0;
}
