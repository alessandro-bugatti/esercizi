# Scrivere il programma Assembly che incrementa di 1 unità i 30 numeri 
# naturali presenti in un’area contigua della memoria centrale, 
# supponendo che ciascun naturale sia codificato con 2 byte e 
# che il primo byte dell’area di memoria abbia indirizzo uguale a 0x200.

# Preload: carica i primi 30 numeri naturali da 0x200
        LOADiH R1 0x02 
        LOADiL R1 0x00 
        LOADiH R2 0x00 
        LOADiL R2 0x01 
        LOADiH R3 0x00 
        LOADiL R3 0x1E 
CARICA: STORE R1 R2
        ADD R1 R1 0x02
        ADD R2 R2 0x01
        BLE R2 R3 CARICA

# Esercizio vero e proprio
        LOADiH R1 0x02 
        LOADiL R1 0x00 
        LOADiH R2 0x00 
        LOADiL R2 0x01 
        LOADiH R3 0x00 
        LOADiL R3 0x1E 
CICLO:  LOAD R4 R1 
        ADD R4 R4 0x01
        STORE R1 R4
        ADD R1 R1 0x2
        ADD R2 R2 0x1
        BLE R2 R3 CICLO
FINE:   END