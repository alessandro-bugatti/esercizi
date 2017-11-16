#include <stdio.h>
#include <stdlib.h>

void inverti(int v[], int n)
{
    int i;
    for (i = 0; i < n/2; i++)
    {
        int temp = v[i];
        v[i] = v[n -i - 1];
        v[n -i - 1] = temp;
    }
}

int main()
{
    int v1[] = {1,2,3,4,5}, i;
    inverti(v1,5);
    for (i = 0; i < 5; i++)
        printf("%d\n", v1[i]);
    return 0;
}
