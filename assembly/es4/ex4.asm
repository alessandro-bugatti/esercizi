# Scrivere il programma Assembly che prende ogni intero nell’area 
# di memoria la cui prima parola ha indirizzo 0×64 e la cui ultima 
# parola ha indirizzo 0x3E6 nell’area che inizia a 0×400 e ne copia 
# il valore diminuito di una quantità pari alla posizione del numero 
# da copiare, cioè il primo numero copiato sarà diminuito di 1, 
# il secondo di 2, ecc.

# Preload: carica i primi N numeri dispari da 0x64 fino a 0x3E6
        LOADiH R1 0x00 
        LOADiL R1 0x64 
        LOADiH R2 0x03 
        LOADiL R2 0xE6 
        LOADiH R3 0x00 
        LOADiL R3 0x01 
CARICA: STORE R1 R3
        ADD R3 R3 0x2
        ADD R1 R1 0x2
        BLE R1 R2 CARICA

#Esercizio vero e proprio
        LOADiL R1 0x64
        LOADiH R1 0x00
        LOADiL R2 0xE6
        LOADiH R2 0x03
        LOADiL R3 0x00
        LOADiH R3 0x04
CICLO:  LOAD R4 R1 
        SUB R4 R4 0x01
        STORE R3 R4
        ADD R1 R1 0x2
        ADD R3 R3 0x2
        BLE R1 R2 CICLO
FINE:   END