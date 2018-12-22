#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scelta;
    float celsius, fahrenheit;
    printf("1) Conversione da Celsius a Fahrenheit\n");
    printf("2) Conversione da Fahrenheit a Celsius\n");
    printf("Inserisci la scelta: ");
    scanf("%d", &scelta);
    if (scelta == 1)
    {
        printf("Inserisci la temperatura in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsius*9/5 + 32;
        printf("%.2f gradi Celsius corrispondono a %.2f Fahrenheit\n",
               celsius, fahrenheit);
    }
    else
    {
        printf("Inserisci la temperatura in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)*5/9;
        printf("%.2f gradi Fahrenheit corrispondono a %.2f Celsius\n",
               fahrenheit, celsius);
    }
    return 0;
}

