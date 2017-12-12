#ifndef COMPLESSI_H
#define COMPLESSI_H

typedef struct{
    double re;
    double im;
} Complesso;

typedef struct{
    double modulo;
    double fase;
} ComplessoExp;

ComplessoExp convertiInExp(Complesso a);

void stampa( Complesso c);

void stampaExp( ComplessoExp c);

double modulo(Complesso c);

Complesso coniugato(Complesso c);

Complesso reciproco(Complesso c);

Complesso somma(Complesso a, Complesso b);

Complesso differenza(Complesso a, Complesso b);

Complesso prodotto(Complesso a, Complesso b);

Complesso rapporto(Complesso a, Complesso b);

#endif // COMPLESSI_H
