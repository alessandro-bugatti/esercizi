#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    float a, b, medio;
    float epsilon = 0.001;
    printf("Inserisci un numero > 1: ");
    scanf("%f", &N);
    a = 1;
    b = N;
    while(b - a > epsilon)
    {
        medio = (a + b)/2;
        if( medio*medio > N)
            b = medio;
        else
            a = medio;
    }
    printf("La radice di %.3f vale %.3f",
           N, medio);
    return 0;
}
