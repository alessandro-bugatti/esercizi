/Scrivere un programma Assembly
/che faccia la divisione intera tra due
/numeri a e b inseriti dall'utente

/Non essendoci nell'ISA l'istruzione
/che fa la divisione
/il risultato dovrà essere ottenuto 
/come una serie di differenze fra a e b

	/Inserisce a
	INP R0, 2
	/Inserisce b
	INP R1, 2
	/Inizializza il risultato a zero in R2
	MOV R2, #0
	/Crea un ciclo che verrà ripetuto fino a quando il resto
	/non diverterà minore di a
CICLO:
	CMP R0, R1 
	BLT FINE
	ADD R2, R2, #1
	SUB R0, R0, R1
	B CICLO
FINE:
	/Stampa il risultato che si trova in R2
	OUT R2, 4
	HALT
	
