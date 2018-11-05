#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
    #define PAUSE system("pause>nul|set/p = Premere un tasto per lanciare il dado...");
#else
    #define PAUSE system("read -p 'Premere INVIO per lanciare il dado...' continue");
#endif // WIN32

int lancio_un_dado()
{
    return rand()%6 + 1;
}

int lancio_due_dadi()
{
    return lancio_un_dado() + lancio_un_dado();
}

int main()
{
    int target, lancio;
    srand(time(NULL));
    lancio = lancio_due_dadi();
    printf("***Gioco del craps***\n");
    printf("Primo tiro: %d\n", lancio);
    if (lancio == 7 || lancio == 11)
        printf("Hai vinto\n");
    else if (lancio == 2 || lancio == 3 || lancio == 12)
        printf("Hai perso\n");
    else
    {
        target = lancio;
        printf("Target: %d\n", lancio);
        do{
            PAUSE //define per Windows e Linux
            lancio = lancio_due_dadi();
            printf("\nNuovo tiro: %d\n", lancio);
            if (lancio == target)
                printf("Hai vinto");
            else if (lancio == 7)
                printf("Hai perso");
        }while(lancio != target && lancio != 7);
    }
    return 0;
}
