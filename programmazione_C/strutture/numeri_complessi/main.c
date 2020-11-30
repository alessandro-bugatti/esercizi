#include <stdio.h>
#include <stdlib.h>
#include "complessi.h"


int main()
{
   Complesso a, b, c;
   a.re = 1;
   a.im = 1;
   printf("Inserisci la parte reale: ");
   scanf("%lf", &b.re);
   printf("Inserisci la parte immaginaria: ");
   scanf("%lf", &b.im);
   printf("La forma esponenziale diventa\n");
   ComplessoExp temp = convertiInExp(b);
   stampaExp(temp);
   printf("Se riconvertito alla forma originale si ha: \n");
   b = convertiInComplesso(temp);
   stampa(b);
   printf("\nIl modulo di ");
   stampa(a);
   printf(" vale %lf", modulo(a));
   printf("\nIl coniugato di ");
   stampa(a);
   printf(" è ");
   stampa(coniugato(a));
   printf("\nIl reciproco di ");
   stampa(a);
   printf(" è ");
   stampa(reciproco(a));
   printf("\nDati i numeri: ");
   stampa(a);
   printf(" e ");
   stampa(b);
   printf("\nLa somma vale :");
   stampa(somma(a,b));
   printf("\nLa differenza vale :");
   stampa(differenza(a,b));
   printf("\nIl prodotto vale :");
   stampa(prodotto(a,b));
   printf("\nIl rapporto vale :");
   stampa(rapporto(a,b));

   return 0;
}
