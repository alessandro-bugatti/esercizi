# Scrivere il programma Assembly che copia dall’area di memoria
# la cui prima parola ha indirizzo 0×64 e la cui ultima parola
# ha indirizzo 0x3E6 i valori maggiori di 10 nell’area di memoria
# la cui prima parola ha indirizzo 0x3E8.


# Preload: carica i primi interi da 0x64 fino a 0x3E6
       LOADiH R1 0x00
       LOADiL R1 0x64
       LOADiH R2 0x03
       LOADiL R2 0xE6
       LOADiH R3 0x00
       LOADiL R3 0x01
CARICA: STORE R1 R3
       ADD R3 R3 0x1
       ADD R1 R1 0x2
       BLE R1 R2 CARICA

#Esercizio vero e proprio
       LOADiL R1 0x64
       LOADiH R1 0x00
       LOADiL R2 0xE6
       LOADiH R2 0x03
       LOADiL R3 0xE8
       LOADiH R3 0x03
# Carico il B5 in valore 11 in esadecimale, cioè B
       LOADiL R5 0x0B
       LOADiH R5 0x00
CICLO: LOAD R4 R1
       BLT R4 R5 SKIP
       STORE R3 R4
SKIP:  ADD R1 R1 0x2
       ADD R3 R3 0x2
       BLE R1 R2 CICLO
FINE:  END
