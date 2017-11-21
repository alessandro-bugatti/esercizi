#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[] = "ciao";
    char s2[] = "mondo";
    char s3[] = "ciao";
    char *p;
    p = s1; //Corretta, p fa riferimento alla stringa s1
    s2 = s1; //Errata
    s1 = p; //Errata
    if (s1 == s3) //Sintatticamente corretta, logicamente errata
        printf("s1 è uguale a s3");
    if (p == s1) //Corretta, ma difficilmente ha senso usarla
        printf("p e s1 sono la \"stessa\" cosa");
    if (s1 < s2) //Sintatticamente corretta, logicamente errata
        printf("s1 è minore di s2");
    s3 = s1 + s2; //Errata, in C non si può fare
    return 0;
}
