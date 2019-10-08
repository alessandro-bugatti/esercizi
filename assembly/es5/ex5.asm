/Scrivere il programma Assembly che incrementa di 1 unità i 10 numeri naturali 
/presenti in un’area contigua della memoria centrale, il cui primo elemento 
/si trova nella cella 45.

      MOV R0, #45
      MOV R1, #10
CICLO:
      CMP R1, #0
      BEQ FINE
      LDR R2, [R0]
      ADD R2, R2, #1
      STR R2, [R0]
      ADD R0, R0, #1
      SUB R1, R1, #1
      B CICLO
FINE:
      HALT
