#include <stdio.h>
#include <stdlib.h>

#define D_MAX 100

int main()
{
    float v[D_MAX], media = 0;
    int N, i, conta = 0;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%f", &v[i]);
        media += v[i];
    }
    media = media / N;
    for (i = 0; i < N; i++)
        if (v[i] > media)
            conta++;
    printf("Ci sono %d elementi maggiori della media", conta);
    printf(" e la media vale : %f\n", media);
    for (i = 0; i < N; i++)
        if (v[i] > media)
            printf("%f\n", v[i]);
    return 0;
}
