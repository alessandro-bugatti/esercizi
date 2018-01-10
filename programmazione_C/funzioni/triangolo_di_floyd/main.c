#include <stdio.h>
#include <stdlib.h>

void triangolo_floyd(int righe)
{
    int i, j, n = 1 , conta = 1;
    for (i = 0; i < righe; i++)
    {
        for (j = 0; j < conta; j++)
        {
            printf("%3d",n);
            n++;
        }
        printf("\n");
        conta++;
    }
}

int main()
{
    triangolo_floyd(5);
    return 0;
}
