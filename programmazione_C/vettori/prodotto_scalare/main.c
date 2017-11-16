#include <stdio.h>
#include <stdlib.h>

double prodotto_scalare(double v1[], double v2[], int n)
{
    int i;
    double p = 0;
    for (i = 0; i < n; i++)
        p += v1[i]*v2[i];
    return p;
}

int main()
{
    double v1[] = {1,2,3}, v2[] = {4,5,6};
    printf("Prodotto scalare: %lf\n", prodotto_scalare(v1,v1,3));
    return 0;
}
