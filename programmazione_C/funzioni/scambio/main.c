#include <stdio.h>
#include <stdlib.h>

void scambio(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void scambio_vero(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 7, b = 5;
    printf("Valori iniziali, a = %d, b = %d\n", a, b);
    //Qua non avviene nulla, passaggio per valore
    scambio(a, b);
    printf("a = %d, b = %d\n", a, b);
    //Qua avviene lo scambio, passaggio per indirizzo
    scambio_vero(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
