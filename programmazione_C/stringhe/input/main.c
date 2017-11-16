#include <stdio.h>
#include <stdlib.h>



int main()
{
    char s1[20], s2[20];
    //Lettura errata di due stringhe
    scanf("%s", s1);
    fgets(s2, 20, stdin);
    printf("s1: %s\ns2: %s\n", s1, s2);
    return 0;
}
