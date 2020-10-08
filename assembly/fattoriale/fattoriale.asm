/Scrivere un programma Assembly che scriva in output il
/fattoriale di N, con N dato in input
/dall'utente. Ricordarsi di non inserire numeri troppo grandi
/(>13) altrimenti il risultato non sarà corretto

/ Idea risolutiva: moltiplicare N*(N-1)*(N-2)*...*1
/ calcolando ogni volta la moltiplicazione come somma di n termini
/ R3 è conterrà ogni volta il prodotto parziale, ottenuto come somma
/ ripetute R2 volte del valore contenuto in R1

      /Leggo il valore di N
      INP R0, 2
      /Inserisco 1 in R1 che conterrà il numero attuale che serve per il prodotto
      MOV R1, #1
      /Copio il valore di N in R2 perchè R2 verrà usato come contatore del ciclo
      /per fare la moltiplicazione e quindi ogni volta va rimesso al valore di R0
      /attuale
      MOV R2, R0 
CICLO_ESTERNO:
      MOV R3, #0
CICLO:
      CMP R2, #0
      BEQ PASSAGGIO
      ADD R3, R3, R1
      SUB R2, R2, #1
      B CICLO
PASSAGGIO:
      SUB R0, R0, #1
      MOV R1, R3
      MOV R2, R0
      CMP R0, #0
      BGT  CICLO_ESTERNO
      OUT R3, 4
      HALT
