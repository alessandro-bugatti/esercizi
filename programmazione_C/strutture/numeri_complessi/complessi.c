#include "complessi.h"

void stampa( Complesso c)
{
    printf("%.2lf + %.2lfi", c.re, c.im);
}

double modulo(Complesso c)
{
    return sqrt(c.re*c.re + c.im*c.im);
}

Complesso coniugato(Complesso c)
{
    Complesso temp;
    temp.re = c.re;
    temp.im = -c.im;
    return temp;
}

Complesso reciproco(Complesso c)
{
    Complesso temp;
    temp.re = c.re/(modulo(c)*modulo(c));
    temp.im = -c.im/(modulo(c)*modulo(c));
    return temp;
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

Complesso prodotto(Complesso a, Complesso b)
{
    Complesso c;
    c.re = a.re*b.re - a.im*b.im;
    c.im = a.re*b.im + a.im*b.re;
    return c;
}

Complesso rapporto(Complesso a, Complesso b)
{
    Complesso c;
    c.re = (a.re*b.re + a.im*b.im)/(modulo(b)*modulo(b));
    c.im = (a.im*b.re - a.re*b.im)/(modulo(b)*modulo(b));
    return c;
}

void stampaExp( ComplessoExp c)
{
    printf("Il modulo vale %lf e la fase vale %lf\n", c.modulo, c.fase);
}

ComplessoExp convertiInExp(Complesso a)
{
    ComplessoExp ce;
    ce.modulo = modulo(a);
    ce.fase = atan2(a.im, a.re);
    return ce;
}
