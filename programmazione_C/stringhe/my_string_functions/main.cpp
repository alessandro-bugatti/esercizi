#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strncpy(char dest[], char src[], int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';//src[i];
}

int my_strncmp(char s1[], char s2[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
        else if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
    return 0;
}

void my_strncat(char dest[], char src[], int n)
{
    int i, j = strlen(dest);
    for (i = 0; i < n && src[i] != '\0'; i++){
        dest[j] = src[i];
        j++;
    }
    dest[j] = '\0';//src[i];
}

int main()
{
    char s1[20], s2[] = "ciao a tutti", s3[]="casetta";
    //strncpy - my_strncpy
    strncpy(s1, s2, 19);
    printf("strcpy s1: %s\n", s1);
    my_strncpy(s1, s2, 19);
    printf("my_strcpy s1: %s\n", s1);

    //strncmp - my_strncmp
    my_strncpy(s1, s3, 19);
    if (strncmp(s1,s3,10) == 0)
        printf("strncmp: %s è uguale a %s\n", s1,s3);
    if (my_strncmp(s1,s3,10) == 0)
        printf("my_strncmp: %s è uguale a %s\n", s1,s3);

    //Utilizzo dell'operatore sizeof() e della funzione strlen
    strncpy(s1, "9 lettere", 19);
    printf("strlen(s1) = %d\n" , strlen(s1) );
    printf("sizeof(s1) = %d\n" , sizeof(s1) );

    //strncat - my_strncat
    strncpy(s1, "ciao ciao ", 19);
    strncat(s1,s2,sizeof(s1) - strlen(s1) - 1);
    printf("strncat s1: %s\n", s1);


    my_strncpy(s1, "ciao ciao ", 19);
    my_strncat(s1,s2,sizeof(s1) - strlen(s1) - 1);
    printf("my_strncat s1: %s\n", s1);
    return 0;
}
