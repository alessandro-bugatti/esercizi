#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vettore di dieci interi
    int v[] = {1, 2, 3, 4, 5};
    //Puntatore a intero
    int *p;
    //Il puntatore p conterrà l'indirizzo di partenza del vettore
    p = v;
    //Da qui in poi possono essere trattati in modo quasi uguale
    printf("Primo elemento del vettore: %d %d\n", v[0], *p);
    printf("Terzo elemento del vettore: %d %d\n", v[2], *(p + 2));
    printf("Indirizzo di partenza del vettore: %p %p\n", v, p);
    printf("Indirizzo del puntatore; %p\n", &p);
//    //Cambia il contenuto del puntatore, produce un errore
//    v[-1] = 0;
//    printf("Indirizzo di partenza del vettore: %p %p\n", v, p);
//    printf("Primo elemento del vettore: %d %d\n", v[0], *p);
//    //I valori dei puntatori possono cambiare, l'indirizzo di
//    //partenza di un vettore no
//    p = &v[1];
//    printf("Indirizzo di partenza del vettore: %p %p\n", v, p);
//    printf("Primo elemento del vettore: %d %d\n", v[0], *p);
    return 0;
}
