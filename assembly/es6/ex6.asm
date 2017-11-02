# Scrivere il programma Assembly che verifica se il numero 
# presente nell'area di memoria 0x300 è compreso fra i 
# due numeri naturali che si trovano rispettivamente nelle 
# aree di memoria 0x100 e 0x200 e scrive in 0x400 01 se compreso 
# 00 diversamente

# Preload: carico tre numeri in 0x100, 0x200, 0x300
# Carico 0x14 in 0x100
LOADiL R1 0x00
LOADiH R1 0x01
LOADiL R2 0x14
LOADiH R2 0x00
STORE R1 R2
# Carico 0x22 in 0x200
LOADiL R1 0x00
LOADiH R1 0x02
LOADiL R2 0x22
LOADiH R2 0x00
STORE R1 R2
# Carico 0x1A in 0x300
LOADiL R1 0x00
LOADiH R1 0x03
LOADiL R2 0x1A
LOADiH R2 0x00
STORE R1 R2

# Programma vero e proprio
# Carica i tre numeri in memoria nei 
# registri R1, R2 e R3, poi verifica se
# R1 < R3 < R2

LOADiL R4 0x00
LOADiH R4 0x01
LOAD R1 R4
LOADiL R4 0x00
LOADiH R4 0x02
LOAD R2 R4
LOADiL R4 0x00
LOADiH R4 0x03
LOAD R3 R4
# Indirizzo del risultato
LOADiL R4 0x00
LOADiH R4 0x04
# Il numero 0
LOADiL R5 0x00
LOADiH R5 0x00
# Il numero 1
LOADiL R6 0x01
LOADiH R6 0x00
BLT R3 R1 FALSO
BGT R3 R2 FALSO
STORE R4 R6
B FINE
FALSO: STORE R4 R5
FINE: END




END

