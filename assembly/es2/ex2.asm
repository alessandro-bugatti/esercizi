/ Scrivere il programma Assembly che copia l’area di memoria 
/ la cui prima parola ha indirizzo 64 e la cui ultima parola 
/ ha indirizzo 100 nell’area di memoria la cui prima parola 
/ ha indirizzo 100.

      MOV R1, #64
      MOV R2, #78
      MOV R3, #100
CICLO:
      CMP R1, R2
      BGT FINE
      LDR R4, [R1]
      STR R4, [R3]
      ADD R1, R1, #1
      ADD R3, R3, #1
      B CICLO
FINE:
      HALT