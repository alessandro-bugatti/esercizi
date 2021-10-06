/Scrivere un programma Assembly
/che stampi il resto della divisione intera tra due
/numeri a e b inseriti dall'utente

/Non essendoci nell'ISA l'istruzione
/di modulo (resto della divisione intera)
/il risultato dovrà essere ottenuto 
/come una serie di differenze fra a e b
/per poi vedere cosa rimane come resto

	/Inserisce a
	INP R0, 2
	/Inserisce b
	INP R1, 2
	/Inizializza il risultato a zero in R2
	MOV R2, #0
	/Crea un ciclo che verrà ripetuto fino a quando il resto
	/non diventerà minore di a
CICLO:
	CMP R0, R1 
	BLT FINE
	SUB R0, R0, R1
	B CICLO
FINE:
	/Stampa il risultato che si trova in R0
	/poichè dopo le varie differenze in a rimane il resto
	OUT R0, 4
	HALT
	
