# Scrivere il programma Assembly che inizializza un’area (contigua)
# della memoria centrale con le codifiche binarie dei naturali che
# costituiscono la tabellina del 5, supponendo che ciascun naturale 
# sia codificato con 2 byte, la prima parola dell’area da
# inizializzare abbia indirizzo 0×64 e l’ultima parola dell’area
# abbia indirizzo 0xC6.

       LOADiL R1 0x64
       LOADiH R1 0x00
       LOADiL R2 0xC6
       LOADiH R2 0x00
       LOADiL R3 0x00
       LOADiH R3 0x00
CICLO: ADD R3 R3 0x5
       STORE R1 R3
       ADD R1 R1 0x2
       BLE R1 R2 CICLO
FINE:  END
