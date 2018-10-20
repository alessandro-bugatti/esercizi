#include <stdio.h>
#include <stdlib.h>

/*

 _
/ \
   \_/


*/

int main()
{
    int N, i;
    printf("Inserisci N: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        printf(" _    ");
    printf("\n");
    for (i = 0; i < N; i++)
        printf("/ \\   ");
    printf("\n");
    for (i = 0; i < N; i++)
        printf("   \\_/");
    printf("\n");
    return 0;
}
