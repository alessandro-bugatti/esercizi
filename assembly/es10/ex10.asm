# Scrivere il programma Assembly che scrive in memoria il fattoriale
# dei numeri compresi tra N e M (con N<M), estremi inclusi, dove il valore
# di N si trova all'indirizzo 0x100 e M all'indirizzo 0x102
# La posizione di partenza da cui iniziare a scrivere i fattoriali è 0x104

# Preload: carica N (=3) e M (=7)
       LOADiH R1 0x01 
       LOADiL R1 0x00 
       LOADiH R2 0x00 
       LOADiL R2 0x03
       STORE R1 R2
       LOADiH R1 0x01 
       LOADiL R1 0x02 
       LOADiH R2 0x00 
       LOADiL R2 0x07
       STORE R1 R2
       
#Esercizio vero e proprio
#In R1 viene caricato il valore di N
       LOADiH R3 0x01 
       LOADiL R3 0x00 
       LOAD R1 R3
#In R2 viene caricato il valore di M
       LOADiH R3 0x01 
       LOADiL R3 0x02 
       LOAD R2 R3
#In R3 verrà inserito il valore del fattoriale, inizialmente a 1
       LOADiH R3 0x00
       LOADiL R3 0x01
#In R4 si inserisce il fattore di moltiplicazione del fattoriale, inizialmente a 1
       LOADiH R4 0x00
       LOADiL R4 0x01
#In R5 si inserisce l'indirizzo da dove iniziare a copiare i fattoriali
       LOADiH R5 0x01
       LOADiL R5 0x04
#Questo ciclo continua ad essere eseguito fino a quando N diventa uguale a M
CICLO: BGT R4 R2 FINE
       MUL R3 R3 R4
#Si scrive solo quando si arriva al fattoriale di N       
       BLT R4 R1 NIENTE
       STORE R5 R3
       ADD R5 R5 0x02
#Si incrementa per provare il successore successivo       
NIENTE: ADD R4 R4 0x01
       B CICLO
FINE:  END