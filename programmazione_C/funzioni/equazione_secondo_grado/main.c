#include <stdio.h>
#include <stdlib.h>

double delta(double a , double b, double c)
{
    return b*b - 4*a*c;
}

void secondo_grado(double a , double b, double c,
                   double *x1, double *x2)
{
    *x1 = (-b + sqrt(delta(a,b,c)))/(2*a);
    *x2 = (-b - sqrt(delta(a,b,c)))/(2*a);
}

int main()
{
    double a, b, c, x1, x2;
    printf("Inserisci i coefficienti a, b e c dell'equazione di secondo grado: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (delta(a, b, c) < 0)
        printf("L'equazione non ha soluzioni nel campo dei reali\n");
    else
    {
        secondo_grado(a,b,c,&x1,&x2);
        printf("Le soluzioni sono x1: %lf x2: %lf\n", x1, x2);
    }
    return 0;
}
