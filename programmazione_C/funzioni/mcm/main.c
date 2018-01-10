#include <stdio.h>
#include <stdlib.h>

int mcm(int a, int b)
{
    int c = a, d = b;
    while(c != d)
        if (c < d)
            c += a;
        else
            d += b;
    return c;
}

int main()
{
    printf("mcm(%d, %d) = %d\n", 5, 3, mcm(5,3));
    printf("mcm(%d, %d) = %d\n", 6, 3, mcm(6,3));
    printf("mcm(%d, %d) = %d\n", 18, 12, mcm(18,12));
    return 0;
}
