# Scrivere il programma Assembly che verifica se il numero
# all'indirizzo 0x100 è un numero primo oppure no
# Se il numero è primo allora alla cella 0x102 deve essere
# messo il valore 1, altrimenti il valore 0


# Preload: carica il 17 alla cella 0x100
       LOADiH R1 0x01 
       LOADiL R1 0x00 
       LOADiH R2 0x00 
       LOADiL R2 0x11
       STORE R1 R2
       
#Esercizio vero e proprio
       LOADiH R1 0x01 
       LOADiL R1 0x00 
#In R2 viene caricato il valore che si trova in 0x100
       LOAD R2 R1
#In R3 si inserisce l'indirizzo dove mettere il risultato
       LOADiH R3 0x01 
       LOADiL R3 0x02
#In R4 si inserisce il divisore che verrà usato per testare se il numero in R2
#è primo o meno. Inizialmente ha valore 2
       LOADiH R4 0x00 
       LOADiL R4 0x02
#Questo ciclo continua ad essere eseguito fino a quando R4 non diventa uguale a 
#R2, nel qual caso non sono stati trovati divisori e quindi il numero è primo
CICLO: BEQ R4 R2 PRIMO
#Per verificare se un numero è divisibile per un altro, non avendo a disposizione
#l'operatore di modulo, si divide per R4 e si rimoltiplica il risultato della
#divisione per R4: dato che i numeri sono interi, se la divisione non è esatta
#non si riotterrà il valore di R2. Se invece R5 e R2 sono uguali significa che
#R4 è un divisore di R2 quindi si salta alla parte che scrive 0 in 0x102
       DIV R5 R2 R4
       MUL R5 R5 R4
       BEQ R5 R2 NON_PRIMO
#Si incrementa per provare il successore successivo       
       ADD R4 R4 0x01
       B CICLO
#Mette lo 0 in 0x102
NON_PRIMO: LOADiH R6 0x00 
       LOADiL R6 0x00
       STORE R3 R6
#ATTENZIONE: senza questo salto incondizionato il programma scriverà sempre 1
#all'indirizzo 0x102
       B FINE
#Mette 1 in 0x102
PRIMO: LOADiH R6 0x00 
       LOADiL R6 0x01
       STORE R3 R6
FINE:  END