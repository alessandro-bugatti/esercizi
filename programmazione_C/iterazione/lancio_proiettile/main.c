#include <stdio.h>
#include <stdlib.h>

#define G 9.81

int main()
{
    float vel_iniziale, theta;
    float x = 0, y = 0;
    float vx, vy;
    float tempo = 0.1;
    printf("Inserisci velocità iniziale e angolo in radianti");
    scanf("%f", &vel_iniziale);
    scanf("%f", &theta);
    vx = cos(theta)*vel_iniziale;
    vy = sin(theta)*vel_iniziale;
    do{
        printf("x: %f, y: %f\n",x,y);
        x = vx*tempo;
        y = vy*tempo - 0.5*G*tempo*tempo;
        tempo = tempo + 0.1;
    }while (y > 0);
    return 0;
}
