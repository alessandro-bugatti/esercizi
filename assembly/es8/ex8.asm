# Scrivere un programma in assembly che esegue il complemento a 1 
# nella stessa area di memoria di una sequenza binaria di 8 valori 
# presenti a partire dall'indirizzo 0x0100.

# Preload: il numero binario 11111111 nelle prime 8 celle
# a partire da 0x100
       LOADiH R1 0x01 
       LOADiL R1 0x00 
       LOADiH R2 0x01 
       LOADiL R2 0x10 
       LOADiH R3 0x00 
       LOADiL R3 0x01 
CARICA: STORE R1 R3
       ADD R1 R1 0x2
       BLT R1 R2 CARICA
# Inserisco uno zero in 0x104 per verificare la correttezza       
       LOADiH R1 0x01 
       LOADiL R1 0x04 
       LOADiH R3 0x00 
       LOADiL R3 0x00 
       STORE R1 R3

#Esercizio vero e proprio
       LOADiL R1 0x00
       LOADiH R1 0x01
       LOADiL R2 0x00
       LOADiH R2 0x00
       LOADiL R3 0x01
       LOADiH R3 0x00
       LOADiL R5 0x10
       LOADiH R5 0x01
CICLO: LOAD R4 R1
       BEQ R4 R2 DA_0_A_1
       STORE R1 R2
       B INCREMENTA
DA_0_A_1: STORE R1 R3
INCREMENTA: ADD R1 R1 0x2
       BLT R1 R5 CICLO
FINE:  END