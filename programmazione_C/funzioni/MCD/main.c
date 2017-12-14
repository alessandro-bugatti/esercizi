#include <stdio.h>
#include <stdlib.h>

int MCD_forza_bruta(int a, int b)
{
    int i;
    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (i = a; i >= 1; i--)
        if (a%i == 0 && b%i == 0)
            return i;
}

int MCD_euclide(int a, int b)
{
    while (a % b != 0)
    {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return b;
}

int main()
{
    printf("Il MCD tra 9 e 12 è %d\n", MCD_forza_bruta(9,12));
    printf("Il MCD tra 12 e 23 è %d\n", MCD_euclide(12,23));
    return 0;
}
