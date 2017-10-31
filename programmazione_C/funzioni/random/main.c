#include <stdio.h>
#include <stdlib.h>


int my_rand(int a, int b)
{
    int valore = rand()%(b-a) + a;
    return valore;
}

int main()
{
    int i;
    srand(time(NULL));
    //Simula 20 lanci di un dado a 6 facce
    for (i = 0; i < 20; i++)
        printf("%d ", my_rand(1,7));
    return 0;
}
