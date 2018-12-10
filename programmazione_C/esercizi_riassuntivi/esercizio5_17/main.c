#include <stdio.h>
#include <stdlib.h>

//Migliore, verifica i resti
int multiplo_a(int a , int b)
{
    if (b % a == 0)
        return 1;
    return 0;
}

//Ottiene lo stesso effetto con sottrazioni ripetute
int multiplo_b(int a , int b)
{
    while (b > 0)
        b -= a;
    if (b == 0)
        return 1;
    return 0;
}

int main()
{
    //Codice per verificare la correttezza delle due funzioni
    printf("multiplo_a(4,16) = %d\n", multiplo_a(4,16));
    printf("multiplo_b(4,16) = %d\n", multiplo_b(4,16));
    printf("multiplo_a(5,16) = %d\n", multiplo_a(5,16));
    printf("multiplo_b(5,16) = %d\n", multiplo_b(5,16));

    return 0;
}
