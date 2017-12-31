#include <stdio.h>
#include <stdlib.h>

void caratteri_ripetuti(char s1[], char s2[], int n)
{
    int i, j, k = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        char c = s1[i];
        int flag = 0;
        for (j = 0; j < k; j++)
            if (c == s2[j])
                flag = 1;
        if (flag == 0)
        {
            s2[k] = c;
            k++;
        }
        if (k == n)
        {
            s2[k] = '\0';
            return;
        }
    }
    s2[k] = '\0';
}

int main()
{
    char s1[] = "Corso di Informatica";
    char s2[20];
    caratteri_ripetuti(s1, s2, 19);
    printf("Stringa originale: %s\nStringa ripulita: %s\n",
           s1, s2);
    return 0;
}
