/Scrivere il programma Assembly che scrive nell'area di memoria che 
/parte dalla cella 20 tutti i valori interi compresi tra un numero n1
/e un numero n2 inseriti dall'utente. Si può supporre che n1 < n2.

      INP R0, 2
      INP R1, 2
      MOV R2, #20
CICLO:
      CMP R0, R1
      BGT FINE
      STR R0, [R2]
      ADD R2, R2, #1
      ADD R0, R0, #1
      B CICLO
FINE:
      HALT