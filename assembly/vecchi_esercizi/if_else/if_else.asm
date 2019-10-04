# Scrivere il programma Assembly che confronta il valore di due 
# numeri naturali che si trovano rispettivamente nelle aree di 
# memoria 0x100 e 0x200: se il primo è maggiore del secondo 
# scrive la differenza nell'area di memoria 0x300, altrimenti 
# scrive la differenza fra il secondo e il primo sempre nell'area 
# di memoria 0x300.

# Carica 5 e 8 nelle due aree di memoria

LOADiH R1 0x00
LOADiL R1 0x05
LOADiH R2 0x01
LOADiL R2 0x00
STORE R2 R1
LOADiH R1 0x00
LOADiL R1 0x08
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
BGE R2 R1 ELSE
SUB R4 R1 R2
LOADiH R3 0x03
LOADiL R3 0x00
STORE R3 R4
PRINT 0x0300
B FINE
ELSE: SUB R4 R2 R1
LOADiH R3 0x03
LOADiL R3 0x00
STORE R3 R4
PRINT 0x0300
FINE: END