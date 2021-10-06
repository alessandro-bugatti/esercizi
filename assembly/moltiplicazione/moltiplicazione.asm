/Scrivere un programma Assembly
/che faccia il prodotto tra due
/numeri a e b inseriti dall'utente

/Non essendoci nell'ISA l'istruzione
/che fa il prodotto
/il risultato dovrà essere ottenuto 
/come una serie di somme di a per b volte

	/Inserisce a
	INP R0, 2
	/Inserisce b
	INP R1, 2
	/Inizializza il risultato a zero in R2
	MOV R2, #0
	/Crea un ciclo che verrà ripetuto b volte
CICLO:
	ADD R2, R2, R0
	SUB R1, R1, #1
	CMP R1, #0
	BNE CICLO
	/Stampa il risultato che si trova in R2
	OUT R2, 4
	HALT
	
