/Scrivere un programma Assembly che scriva all'indirizzo 50 il
/fattoriale di N, con N dato in input
/dall'utente. Ricordarsi di non inserire numeri troppo grandi
/(>13) altrimenti il risultato non sarà corretto

      /Leggo il valore di N
      INP R0, 2
      /Leggo il valore di a
      MOV R1, #1
      /Leggo il valore di b che agirà come contatore del ciclo
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
