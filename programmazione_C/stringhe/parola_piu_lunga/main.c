#include <stdio.h>
#include <stdlib.h>



int main()
{
    char s[]="Questa è una frase che contiene delle parole";
    int i, conta_lettere = 0, massimo = 0, inizio=0, fine=0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
            conta_lettere++;
        else
        {
            if (conta_lettere > massimo){
                massimo = conta_lettere;
                fine = i;
                inizio = i - massimo;
            }
            conta_lettere = 0;
        }
    }
    if (conta_lettere > massimo){
                massimo = conta_lettere;
                fine = i;
                inizio = i - massimo;
            }
    printf("La parola più lunga ha %d lettere ed è '", massimo);
    for (i = inizio; i < fine; i++)
        printf("%c",s[i]);
    printf("'\nLa frase originale era : '%s'", s);
    return 0;
}
