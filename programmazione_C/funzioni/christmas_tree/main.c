#include <stdio.h>
#include <stdlib.h>

void christmas_tree(int altezza)
{
    int i, j, rami = 1, spazi = altezza-1;
    for (int i = 0; i < altezza; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        for (j = 0; j < rami; j++)
            printf("*");
        printf("\n");
        rami+=2;
        spazi--;
    }
    spazi = altezza - 1;
    for (int i = 0; i < altezza/2; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        printf("*\n");
    }

}

int main()
{
    printf(" Merry Christmas...\n");
    christmas_tree(5);
    printf("\...and Happy New Year.\n");
    printf("UNIBS - anno accademico 2018-2019\n");
    return 0;
}
