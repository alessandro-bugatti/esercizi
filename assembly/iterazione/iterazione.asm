/ Scrivere il programma Assembly che verifica se il numero naturale
/ che si trova nella cella di memoria 100 è divisibile 
/ esattamente per il numero che si trova nella cella 101: 
/ se è divisibile deve scrivere il valore 1 nella cella 
/ di memoria 102, altrimenti il valore 2.
      LDR R1, 100
      LDR R2, 101
      MOV R3, #1
      MOV R4, #2
CICLO:
      SUB R1, R1, R2
      CMP R1, R2
      BGT CICLO
      CMP R1, R2
      BEQ NO
      STR R4, 102
      B FINE
NO:
      STR R3, 102
FINE: