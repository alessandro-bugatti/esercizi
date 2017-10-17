#include <stdio.h>
#include <stdlib.h>

#define ACCELERAZIONE_GRAVITA 9.81

int main()
{
    float massa, vel_iniziale, alt_iniziale, tempo;
    float potenziale, cinetica;
    float velocita, altezza;
    printf("Calcolo di energia cinetica e potenziale di un punto dotato di massa in caduta libera.\n");
    printf("Inserisci massa(Kg), v0(m/s), h0(m), t(s):\n");
    scanf("%f", &massa);
    scanf("%f", &vel_iniziale);
    scanf("%f", &alt_iniziale);
    scanf("%f", &tempo);
    velocita = vel_iniziale - ACCELERAZIONE_GRAVITA*tempo;
    cinetica = 0.5*massa*velocita*velocita;
    altezza = alt_iniziale + vel_iniziale*tempo -
        0.5 * ACCELERAZIONE_GRAVITA * tempo * tempo;
    potenziale = massa*ACCELERAZIONE_GRAVITA*altezza;
    if (altezza > 0)
    {
        printf("Energia cinetica: %f joules\nEnergia potenziale %f joules",
               cinetica, potenziale);
    }
    else
    {
        float tempo_di_volo;
        //Soluzione dell'equazione di secondo grado dove h(t) vale 0
        //Viene presa solo la soluzione positiva
        tempo_di_volo = (- vel_iniziale +
            sqrt(vel_iniziale*vel_iniziale +
                 4*alt_iniziale*0.5*ACCELERAZIONE_GRAVITA))/
                 (2*0.5*ACCELERAZIONE_GRAVITA);
        velocita = vel_iniziale - ACCELERAZIONE_GRAVITA*tempo_di_volo;
        cinetica = 0.5*massa*velocita*velocita;
        printf("Il punto ha toccato terra all'istante %.2f secondi con un'energia cinetica di %f joules.",
               tempo_di_volo, cinetica);
    }
    return 0;
}
