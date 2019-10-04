# Scrivere il programma Assembly che verifica se il numero naturale
# che si trova nella cella di memoria 0x100 è divisibile 
# esattamente per il numero che si trova nella cella 0x200: 
# se è divisibile deve scrivere il valore 1 nella cella 
# di memoria 0x300, altrimenti il valore 0.

# Carica 0x15 (21 decimale) e 7 nelle due aree di memoria

LOADiH R1 0x00
LOADiL R1 0x15
LOADiH R2 0x01
LOADiL R2 0x00
STORE R2 R1
LOADiH R1 0x00
LOADiL R1 0x07
LOADiH R2 0x02
LOADiL R2 0x00
STORE R2 R1

# Programma vero e proprio
LOADiH R3 0x01
LOADiL R3 0x00
LOAD R1 R3
LOADiH R3 0x02
LOADiL R3 0x00
LOAD R2 R3
B CONTROLLO
CICLO: SUB R1 R1 R2
PRINT R1
CONTROLLO: BGT R1 R2 CICLO
BNE R1 R2 NO
LOADiH R4 0x00
LOADiL R4 0x01
B CARICA
NO: LOADiH R4 0x00
LOADiL R4 0x00
CARICA: LOADiH R3 0x03
LOADiL R3 0x00
STORE R3 R4
PRINT 0x300 
END