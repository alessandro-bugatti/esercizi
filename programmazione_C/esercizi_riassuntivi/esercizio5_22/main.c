#include <stdio.h>
#include <stdlib.h>

int parte_intera(int a, int b)
{
    return a/b;
}

int resto(int a, int b)
{
    return a%b;
}

int main()
{
    int grandezza = 1;
    int n, temp;
    printf("Inserisci il numero: ");
    scanf("%d", &n);
    temp = n;
    //la variabile grandezza conterrà l'ordine
    //di grandezza del numero da scomporre
    while (temp != 0)
    {
        temp = parte_intera(temp, 10);
        grandezza *= 10;
    }
    //Questa divisione per 10 serve ad evitare
    //di avere la prima cifra a 0
    grandezza /= 10;
    printf("'Ordine di grandezza' del numero inserito: %d\n", grandezza);
    printf("Scomposizione\n");
    while (grandezza != 0)
    {
        printf("%d  ", parte_intera(n, grandezza));
        n = resto(n, grandezza);
        grandezza = parte_intera(grandezza, 10);
    }
    return 0;
}
