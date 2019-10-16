/Scrivere un programma Assembly che scriva nella 
/zona di memoria che parte dall'indirizzo 50 i
/primi N numeri di Fibonacci, con N dato in input
/dall'utente. Siano i primi due valori della sequenza
/0 e 1 e si parta a scrivere in memoria dall'elemento
/successivo.

      MOV R1, #0
      MOV R2, #1
      MOV R3, #50
      INP R4, 2
CICLO:
      CMP R4, #0
      BEQ FINE
      ADD R5, R1, R2
      STR R5, [R3]
      MOV R1, R2
      MOV R2, R5
      ADD R3, R3, #1
      SUB R4, R4, #1
      B CICLO
FINE:
      HALT
