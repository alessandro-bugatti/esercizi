/Scrivere il programma Assembly che verifica se un numero fornito in input
/dall'utente è un numero pari oppure no.
/Se il numero è pari allora alla cella 101 deve essere
/messo il valore 1, altrimenti il valore 2

      INP R0, 2
      MOV R1, #1
      MOV R2, #2
      AND R3, R0, #1
      CMP R3, #1
      BEQ DISPARI
      STR R1, 101
      B FINE
DISPARI:
      STR R2, 101
FINE:
      HALT
