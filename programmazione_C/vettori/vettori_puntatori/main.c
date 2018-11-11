#include <stdio.h>
#include <stdlib.h>

#define N 100

char *code[] = {"int elemento_massimo(int v[], int n)\n{\n    int m = v[0], i;\n    for (i = 1; i < n; i++)\n        if (v[i] > m)\n            m = v[i];\n    return m;\n}",
    "int elemento_massimo_puntatori(int *v, int n)\n{\n    int m = *v, i;\n    for (i = 1; i < n; i++)\n        if (*(v + i) > m)\n            m = *(v + i);\n    return m;\n}",
    "int elemento_massimo_puntatore_vettori(int *v, int n)\n{\n    int m = v[0], i;\n    for (i = 1; i < n; i++)\n        if (v[i] > m)\n            m = v[i];\n    return m;\n}",
    "int elemento_massimo_vettore_puntatori(int v[], int n)\n{\n    int m = *v, i;\n    for (i = 1; i < n; i++)\n        if (*(v + i) > m)\n            m = *(v + i);\n    return m;\n}",
    "int elemento_massimo_aritmetica_puntatori(int *v, int n)\n{\n    int m = *v;\n    int *end = v + n;\n    while(++v < end)\n        if (*v > m)\n            m = *v;\n    return m;\n}",
    "void elemento_massimo_per_riferimento(int *v, int n, int *m)\n{\n    int i;\n    *m = v[0];\n    for (i = 1; i < n; i++)\n        if (v[i] > *m)\n            *m = v[i];\n}"
    };

//Versione "naturale"
int elemento_massimo(int v[], int n)
{
    int m = v[0], i;
    for (i = 1; i < n; i++)
        if (v[i] > m)
            m = v[i];
    return m;
}

//Versione con notazione a puntatori
int elemento_massimo_puntatori(int *v, int n)
{
    int m = *v, i;
    for (i = 1; i < n; i++)
        if (*(v + i) > m)
            m = *(v + i);
    return m;
}

//Versione con notazione parametri a puntatori
//e corpo della funzione che utilizza notazione a vettori
int elemento_massimo_puntatore_vettori(int *v, int n)
{
    int m = v[0], i;
    for (i = 1; i < n; i++)
        if (v[i] > m)
            m = v[i];
    return m;
}

//Versione con notazione parametro a vettore e corpo con puntatori
int elemento_massimo_vettore_puntatori(int v[], int n)
{
    int m = *v, i;
    for (i = 1; i < n; i++)
        if (*(v + i) > m)
            m = *(v + i);
    return m;
}

//Versione con aritmetica dei puntatori
int elemento_massimo_aritmetica_puntatori(int *v, int n)
{
    int m = *v;
    int *end = v + n;
    while(++v < end)
        if (*v > m)
            m = *v;
    return m;
}

void elemento_massimo_per_riferimento(int *v, int n, int *m)
{
    int i;
    *m = v[0];
    for (i = 1; i < n; i++)
        if (v[i] > *m)
            *m = v[i];
}

int main()
{
    int v[N], n, i, massimo;
    //Questa è la lunghezza utile del vettore
    //viene scelto un numero a caso compreso tra 1 e N
    n = 5; //rand()%N + 1;
    for (i = 0; i < n; i++){
        v[i] = rand();
        printf("%d ", v[i]);
    }
    massimo = elemento_massimo(v, n);
    printf("\nFunzione naturale:\n%s \nMassimo: %d", code[0], massimo);
    massimo = elemento_massimo_puntatori(v, n);
    printf("\nFunzione con notazione a puntatori:\n%s \nMassimo: %d", code[1], massimo);
    massimo = elemento_massimo_puntatore_vettori(v, n);
    printf("\nFunzione con notazione parametro puntatore e corpo con vettori:\n%s \nMassimo: %d", code[2], massimo);
    massimo = elemento_massimo_vettore_puntatori(v, n);
    printf("\nFunzione con notazione parametro vettore e corpo con puntatori:\n%s \nMassimo: %d", code[3], massimo);
    massimo = elemento_massimo_aritmetica_puntatori(v, n);
    printf("\nFunzione con aritmetica dei puntatori:\n%s \nMassimo: %d", code[4], massimo);
    massimo = 0; //serve solo a verificare che la funzione faccia davvero il proprio compito
    elemento_massimo_per_riferimento(v, n, &massimo);
    printf("\nFunzione con passaggio del massimo per riferimento:\n%s \nMassimo: %d", code[5], massimo);


    return 0;
}
