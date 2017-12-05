#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float x;
    float y;
} Punto2D;

typedef struct {
    Punto2D v1;
    Punto2D v2;
    Punto2D v3;
} Triangolo;

typedef struct {
    Punto2D vertici[5];
} Pentagono;

float distanza(Punto2D a, Punto2D b)
{
    float delta_x = a.x - b.x;
    float delta_y = b.y - a.y;
    return sqrt(delta_x*delta_x + delta_y*delta_y);
}

Punto2D punto_medio(Punto2D a, Punto2D b)
{
    Punto2D p;
    p.x = (a.x + b.x)/2;
    p.y = (a.y + b.y)/2;
    return p;
}

typedef struct {
    char nominativo[100];
    int reti_segnate;
} Marcatore;


int main()
{
    //Utilizzo di una struttura semplice
    Punto2D p;
    p.x = 2.3;
    p.y = 7.1;
    printf("Il punto ha queste coordinate: (%.1f, %.1f)\n", p.x, p.y);
    //Copia e confronto
    Punto2D pa, pb;
    pa.x = 2;
    pa.y = 2;
    pb = pa;
    printf("I due punti (%.1f, %.1f) e (%.1f, %.1f) sono uguali\n",
               pa.x, pa.y, pb.x, pb.y);
    //Utilizzo di una struttura composta
    Triangolo t;
    t.v1.x = 0;
    t.v1.y = 0;
    t.v2.x = 1;
    t.v2.y = 1;
    t.v3.x = -1;
    t.v3.y = 2;
    printf("Il triangolo ha questi vertici:"
           "(%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f)\n",
           t.v1.x,t.v1.y,t.v2.x,t.v2.y,t.v3.x,t.v3.y);
    //Utilizzo di una struttura con vettore di strutture
    Pentagono pentagono;
    int i;
    for (i = 0; i < 5; i++)
    {
        pentagono.vertici[i].x = rand()%5;
        pentagono.vertici[i].y = rand()%5;
    }
    printf("I vertici del pentagono sono:\n");
    for (i = 0; i < 5; i++)
    {
        printf("(%.1f,%.1f)\n", pentagono.vertici[i].x,
               pentagono.vertici[i].y);
    }
    //Utilizzo di una funzione che ha come parametri delle strutture
    Punto2D p1, p2;
    p1.x = p1.y = 0;
    p2.x = p2.y = 1;
    printf("La distanza tra i due punti è: %.3f\n", distanza(p1,p2));
    //Esempio di funzione che ha una struttura come valore di ritorno
    Punto2D medio;
    medio = punto_medio(p1, p2);
    printf("Il punto medio tra (%.1f,%.1f) e (%.1f,%.1f) è: (%.1f,%.1f)\n",
           p1.x, p1.y, p2.x, p2.y, medio.x, medio.y);
    //Esempio di struttura con stringhe
    Marcatore g1, g2;
    strncpy(g1.nominativo, "Mauro Icardi", 99);
    g1.reti_segnate = 16;
    strncpy(g2.nominativo, "Ciro Immobile", 99);
    g2.reti_segnate = 15;
    if (g1.reti_segnate > g2.reti_segnate)
        printf("%s ha segnato più reti di %s\n",
               g1.nominativo,g2.nominativo);
    return 0;
}
