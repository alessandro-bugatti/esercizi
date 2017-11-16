#include <stdio.h>
#include <stdlib.h>

void rimuovi(int v[], int n, int pos)
{
    if (pos >= n) return;
    int i;
    for (i = pos; i < n - 1; i++)
        v[i] = v[i+1];
    return;
}

int main()
{
    int v[] = {1,2,3,4,5,6}, i;
    rimuovi(v,6,2);
    for (i = 0; i < 5; i++)
        printf("%d\n", v[i]);
    return 0;
}
