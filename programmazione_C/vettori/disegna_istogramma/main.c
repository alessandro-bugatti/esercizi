#include <stdio.h>
#include <stdlib.h>

int massimo(int v[], int n)
{
    int i, max = v[0];
    for (i = 0; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max;

}

void disegna_istogramma(int v[], int n, int max)
{
    int i, j;
    int m = massimo(v,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < v[i]*max/m; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    int v[] = {23, 34, 18, 5, 28};
    printf("%d\n", massimo(v, 5));
    disegna_istogramma(v,5,30);
    return 0;
}
