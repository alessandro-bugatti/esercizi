#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int i;
    float f;
} EsempioS;

typedef union{
    int i;
    float f;
} EsempioU;

typedef union
{
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int dword;
} HW_Register;

int main()
{
    EsempioS a;
    a.i = 7;
    a.f = 9.0;
    printf("La struttura occupa %d bytes e "
           "contiene i seguenti dati: %d e %f\n",
           sizeof(a), a.i, a.f);
    EsempioU b;
    b.i = 7;
    b.f = 9.0;
    printf("L'unione occupa %d bytes e "
           "contiene i seguenti dati: %d e %f\n",
           sizeof(b), b.i, b.f);

    HW_Register reg;
    //Si può usare in due modi:
    //Accesso al registro su tutti i byte
    reg.dword = 0x12345678;
    printf("Il registro contiene il seguente valore: %p\n",
           reg.bytes);
    //oppure su un byte specifico, può essere comodo
    reg.bytes.byte2 = 0xFF;
    printf("Il registro contiene il seguente valore: %p\n",
           reg.dword);
    return 0;
}
