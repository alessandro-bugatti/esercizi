/Scrivere il programma Assembly che scrive l'alfabeto minuscolo in output, 
/ricordando che il valore ASCII della lettera 'a' è 97.
      MOV R1, #97
      MOV R2, #26
CICLO:
      CMP R2, #0
      BEQ FINE
      OUT R1, 7
      ADD R1, R1, #1
      SUB R2, R2, #1
      B CICLO
FINE:
      
      HALT
