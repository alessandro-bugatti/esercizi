#include <stdio.h>
#include <stdlib.h>

#define STOP 0.001
#define RIMBALZO 0.99

int main()
{
    float H;
    int rimbalzi = 0;
    printf("Inserisci l'altezza di caduta della pallina in metri: ");
    scanf("%f", &H);
    while(H > STOP)
    {
        rimbalzi++;
        H *= RIMBALZO;
    }
    printf("%d rimbalzi fatti prima di fermarsi.\n", rimbalzi);
    return 0;
}
