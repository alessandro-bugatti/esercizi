#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    char s2[] = "Parola", s1[10],
//    s3[] = "Frase troppo lunga per stare in s1";
//    strncpy(s1, s2, 10);
//    printf("s1: %s\ns2: %s\n", s1, s2);
//    //Qua s1 non contiene il terminatore, poichè 10
//    //è minore della lunghezza di s3, quindi sarabbe
//    //da aggiungere "a mano"
//    strncpy(s1, s3, 10);
//    printf("s1: %s\ns3: %s\n", s1, s3);
//    return 0;
//}

//int main()
//{
//    char s1[] = "amico", s2[] = "amicizia",
//    s3[] = "Amore";
//    if (strncmp(s1, s2, 10) > 0)
//        printf("%s viene dopo %s in ordine alfabetico\n", s1, s2);
//    if (strncmp(s3, s1, 10) < 0)
//        printf("%s viene prima di %s in ordine alfabetico\n", s3, s1);
//    if (strncmp(s1, s2, 4) == 0)
//        printf("I primi quattro caratteri di %s e %s sono uguali\n",
//                s1, s2);
//    return 0;
//}

int main()
{
    char s1[30], s2[] = "a tutti";
    strncpy(s1,"Ciao ", 30);
    printf("s1: %s \n", s1);
    strncat(s1, s2, 10);
    printf("s1: %s \n", s1);
    return 0;
}


