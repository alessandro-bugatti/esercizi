#include <stdio.h>
#include <stdlib.h>

int somma_1(int v[], int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += v[i];
    return s;
}

int somma_2(int *v, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += *(v+i);
    return s;
}

int somma_3(int v[], int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += *(v+ i);
    return s;
}

int somma_4(int *v, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += v[i];
    return s;
}

int main()
{
    int v[] ={1,2,3,4};
    printf("%d %d %d %d", somma_1(v,4), somma_2(v,4), somma_3(v,4), somma_4(v,4));
    return 0;
}
