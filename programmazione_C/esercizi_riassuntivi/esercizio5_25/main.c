#include <stdio.h>
#include <stdlib.h>

//Versione che mima la ricerca del minimo in un vettore
float minimo1(float a, float b, float c)
{
    float minimo = a;
    if (b <= minimo)
        minimo = b;
    if (c <= minimo)
        minimo = c;
    return minimo;
}

//Versione con controlli su ogni elemento
float minimo2(float a, float b, float c)
{
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    return c;
}

int main()
{
    float a = 2.34, b = 5.22, c = -1.34;
    printf("Il minimo tra %f, %f e %f vale %f\n",
           a, b, c, minimo1(a, b, c));
    printf("Il minimo tra %f, %f e %f vale %f\n",
           a, b, c, minimo2(a, b, c));
    return 0;
}
